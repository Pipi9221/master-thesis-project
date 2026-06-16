from __future__ import annotations

from pathlib import Path

from common.metadata import MutationMeta, ValidationStatus
from common.validation import CommandResult
from oracles.base import OracleRequest
from slicers.base import SliceOutcome


class FakeAdapter:
    def __init__(self, seed_slice: SliceOutcome, mutant_slice: SliceOutcome) -> None:
        self._seed_slice = seed_slice
        self._mutant_slice = mutant_slice
        self.calls = 0
        self.requests = []

    def slice(self, request):  # noqa: ANN001
        self.requests.append(request)
        self.calls += 1
        if self.calls == 1:
            return self._seed_slice
        return self._mutant_slice


class FakeRunner:
    def __init__(self, command_results: dict[str, CommandResult]) -> None:
        self._command_results = command_results
        self.commands: list[list[str]] = []

    def run(self, command: list[str]) -> CommandResult:
        self.commands.append(command)
        key = command[0]
        return self._command_results[key]


def test_extract_observed_values_reads_only_g_prefixed_pairs() -> None:
    from oracles.frama import extract_observed_values

    observed = extract_observed_values(
        "checksum = 123\n"
        "g_keep: 7\n"
        "local_tmp: 8\n"
        "g_other: 9\n"
    )

    assert observed == {"g_keep": "7", "g_other": "9"}


def test_instrument_program_prints_defined_and_missing_variables(tmp_path: Path) -> None:
    from oracles.frama import instrument_program_for_observation

    source_path = tmp_path / "seed.c"
    output_path = tmp_path / "seed_observed.c"
    source_path.write_text(
        (
            "int g_keep = 1;\n"
            "int helper(void) { return g_keep + 1; }\n"
            "int main(void) {\n"
            "    g_keep = helper();\n"
            "    return g_keep;\n"
            "}\n"
        ),
        encoding="utf-8",
    )

    instrument_program_for_observation(
        source_path=source_path,
        output_path=output_path,
        variables=("g_keep", "g_missing"),
    )

    instrumented = output_path.read_text(encoding="utf-8")
    assert "#include <stdio.h>" in instrumented
    assert 'printf("g_keep: %d\\n", g_keep);' in instrumented
    assert 'printf("g_missing: not_found\\n");' in instrumented
    assert instrumented.index('printf("g_keep: %d\\n", g_keep);') < instrumented.index("return g_keep;")


def test_frama_value_oracle_reports_value_mismatch_with_fake_runner(tmp_path: Path) -> None:
    from oracles.frama import FramaValueOracle

    seed_path = tmp_path / "seed.c"
    mutant_path = tmp_path / "mutant.c"
    criteria_path = tmp_path / "criteria.json"
    mutation_meta_path = tmp_path / "mutation_meta.json"
    seed_slice_path = tmp_path / "seed_sliced.c"
    mutant_slice_path = tmp_path / "mutant_sliced.c"
    seed_path.write_text("int g_keep = 1; int main(void) { return g_keep; }\n", encoding="utf-8")
    mutant_path.write_text(
        "int g_keep = 2; int main(void) { int mr2_tmp_19 = 19; return g_keep; }\n",
        encoding="utf-8",
    )
    seed_slice_path.write_text(seed_path.read_text(encoding="utf-8"), encoding="utf-8")
    mutant_slice_path.write_text(mutant_path.read_text(encoding="utf-8"), encoding="utf-8")
    criteria_path.write_text(
        '{"criterion_kind":"value","variables":["g_keep"],"seed_id":"case-1","program_point":"main:return"}',
        encoding="utf-8",
    )
    mutation_meta_path.write_text(
        '{"mr":"MR2","seed_id":"case-1","rng_seed":19,"selected_pattern":"local_assignment_chain","selected_site":null,'
        '"inserted_symbols":["mr2_tmp_19"],"attempt_count":1,"validation_status":"not_run","failure_reason":null,"failure_history":[]}',
        encoding="utf-8",
    )
    seed_slice = SliceOutcome(
        tool="frama",
        input_path=seed_path,
        output_path=seed_slice_path,
        command=("frama-c",),
        exit_code=0,
        stdout="",
        stderr="",
        slice_ok=True,
        failure_reason=None,
    )
    mutant_slice = SliceOutcome(
        tool="frama",
        input_path=mutant_path,
        output_path=mutant_slice_path,
        command=("frama-c",),
        exit_code=0,
        stdout="",
        stderr="",
        slice_ok=True,
        failure_reason=None,
    )
    adapter = FakeAdapter(seed_slice=seed_slice, mutant_slice=mutant_slice)
    runner = FakeRunner(
        {
            "gcc": CommandResult(exit_code=0, stdout="", stderr=""),
            str(tmp_path / "oracle-out" / "seed_full"): CommandResult(exit_code=0, stdout="g_keep: 1\n", stderr=""),
            str(tmp_path / "oracle-out" / "mutant_full"): CommandResult(exit_code=0, stdout="g_keep: 2\n", stderr=""),
            str(tmp_path / "oracle-out" / "seed_slice"): CommandResult(exit_code=0, stdout="g_keep: 1\n", stderr=""),
            str(tmp_path / "oracle-out" / "mutant_slice"): CommandResult(exit_code=0, stdout="g_keep: 2\n", stderr=""),
        }
    )
    oracle = FramaValueOracle(adapter=adapter, runner=runner)
    request = OracleRequest(
        tool="frama",
        mr="MR2",
        seed_path=seed_path,
        mutant_path=mutant_path,
        criteria_path=criteria_path,
        mutation_meta_path=mutation_meta_path,
        output_dir=tmp_path / "oracle-out",
    )
    meta = MutationMeta(
        mr="MR2",
        seed_id="case-1",
        rng_seed=19,
        selected_pattern="local_assignment_chain",
        selected_site=None,
        inserted_symbols=("mr2_tmp_19",),
        attempt_count=1,
        validation_status=ValidationStatus.NOT_RUN,
        failure_reason=None,
    )

    result = oracle.run(request=request, mutation_meta=meta)

    assert result.violation is True
    assert result.reason == "value_mismatch"
    assert result.value_comparisons["g_keep"]["original"] == "1"
    assert result.value_comparisons["g_keep"]["mutant"] == "2"


def test_frama_value_oracle_slices_instrumented_sources_for_mr1(tmp_path: Path) -> None:
    from oracles.frama import FramaValueOracle

    seed_path = tmp_path / "seed.c"
    mutant_path = tmp_path / "mutant.c"
    criteria_path = tmp_path / "criteria.json"
    mutation_meta_path = tmp_path / "mutation_meta.json"
    output_dir = tmp_path / "oracle-out"
    seed_slice_path = tmp_path / "seed_sliced.c"
    mutant_slice_path = tmp_path / "mutant_sliced.c"

    source = (
        "#include <stdio.h>\n"
        "int g_keep = 3;\n"
        "int main(void) {\n"
        '    printf("g_keep: %d\\n", g_keep);\n'
        "    return g_keep;\n"
        "}\n"
    )
    seed_path.write_text("int g_keep = 3; int main(void) { return g_keep; }\n", encoding="utf-8")
    mutant_path.write_text("int g_keep = 3; int main(void) { return g_keep; }\n", encoding="utf-8")
    seed_slice_path.write_text(source, encoding="utf-8")
    mutant_slice_path.write_text(source, encoding="utf-8")
    criteria_path.write_text(
        '{"criterion_kind":"value","variables":["g_keep"],"seed_id":"case-1","program_point":"main:return"}',
        encoding="utf-8",
    )
    mutation_meta_path.write_text(
        '{"mr":"MR1","seed_id":"case-1","rng_seed":5,"selected_pattern":"semantic_rewrite","selected_site":null,'
        '"inserted_symbols":[],"attempt_count":1,"validation_status":"not_run","failure_reason":null,"failure_history":[]}',
        encoding="utf-8",
    )
    seed_slice = SliceOutcome(
        tool="frama",
        input_path=seed_path,
        output_path=seed_slice_path,
        command=("frama-c",),
        exit_code=0,
        stdout="",
        stderr="",
        slice_ok=True,
        failure_reason=None,
    )
    mutant_slice = SliceOutcome(
        tool="frama",
        input_path=mutant_path,
        output_path=mutant_slice_path,
        command=("frama-c",),
        exit_code=0,
        stdout="",
        stderr="",
        slice_ok=True,
        failure_reason=None,
    )
    adapter = FakeAdapter(seed_slice=seed_slice, mutant_slice=mutant_slice)
    runner = FakeRunner(
        {
            "gcc": CommandResult(exit_code=0, stdout="", stderr=""),
            str(tmp_path / "oracle-out" / "seed_full"): CommandResult(exit_code=0, stdout="g_keep: 3\n", stderr=""),
            str(tmp_path / "oracle-out" / "mutant_full"): CommandResult(exit_code=0, stdout="g_keep: 3\n", stderr=""),
            str(tmp_path / "oracle-out" / "seed_slice"): CommandResult(exit_code=0, stdout="g_keep: 3\n", stderr=""),
            str(tmp_path / "oracle-out" / "mutant_slice"): CommandResult(exit_code=0, stdout="g_keep: 3\n", stderr=""),
        }
    )
    oracle = FramaValueOracle(adapter=adapter, runner=runner)
    request = OracleRequest(
        tool="frama",
        mr="MR1",
        seed_path=seed_path,
        mutant_path=mutant_path,
        criteria_path=criteria_path,
        mutation_meta_path=mutation_meta_path,
        output_dir=output_dir,
    )

    result = oracle.run(request=request)

    assert result.status.value == "PASS"
    assert adapter.requests[0].input_path.name == "seed_observed.c"
    assert adapter.requests[1].input_path.name == "mutant_observed.c"
    assert result.value_comparisons["g_keep"]["original_slice"] == "3"
