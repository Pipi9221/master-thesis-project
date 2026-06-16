from pathlib import Path

from common.metadata import MutationMeta, ValidationStatus
from oracles.base import OracleStatus
from oracles.judges import judge_retained_symbols
from slicers.base import SliceOutcome


def test_mr2_judge_reports_violation_when_noise_symbol_survives(tmp_path: Path) -> None:
    artifact_path = tmp_path / "mutant_sliced.c"
    artifact_path.write_text(
        "int main(void) { int mr2_tmp_19 = 19; return mr2_tmp_19; }\n",
        encoding="utf-8",
    )
    meta = MutationMeta(
        mr="MR2",
        seed_id="case-1",
        rng_seed=19,
        selected_pattern="local_assignment_chain",
        selected_site=None,
        inserted_symbols=("mr2_tmp_19", "mr2_sink_19"),
        attempt_count=1,
        validation_status=ValidationStatus.NOT_RUN,
        failure_reason=None,
    )
    slice_outcome = SliceOutcome(
        tool="frama",
        input_path=tmp_path / "mutant.c",
        output_path=artifact_path,
        command=("frama-c",),
        exit_code=0,
        stdout="",
        stderr="",
        slice_ok=True,
        failure_reason=None,
    )

    result = judge_retained_symbols(meta, slice_outcome, tool="frama", mr="MR2")

    assert result.violation is True
    assert result.status == OracleStatus.VIOLATION
    assert result.retained_symbols == ("mr2_tmp_19",)
    assert result.reason == "retained_inserted_symbols"
    assert result.judge_id == "frama.mr2.retained_symbols"


def test_mr3_judge_ignores_absent_dead_path_symbols(tmp_path: Path) -> None:
    artifact_path = tmp_path / "mutant_sliced.c"
    artifact_path.write_text("int main(void) { return 0; }\n", encoding="utf-8")
    meta = MutationMeta(
        mr="MR3",
        seed_id="case-2",
        rng_seed=17,
        selected_pattern="if_zero_wrapper",
        selected_site=None,
        inserted_symbols=("mr3_tmp_17",),
        attempt_count=1,
        validation_status=ValidationStatus.NOT_RUN,
        failure_reason=None,
    )
    slice_outcome = SliceOutcome(
        tool="frama",
        input_path=tmp_path / "mutant.c",
        output_path=artifact_path,
        command=("frama-c",),
        exit_code=0,
        stdout="",
        stderr="",
        slice_ok=True,
        failure_reason=None,
    )

    result = judge_retained_symbols(meta, slice_outcome, tool="frama", mr="MR3")

    assert result.violation is False
    assert result.status == OracleStatus.PASS
    assert result.retained_symbols == ()
    assert result.reason == "no_retained_inserted_symbols"
    assert result.judge_id == "frama.mr3.retained_symbols"
