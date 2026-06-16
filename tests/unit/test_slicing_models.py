from pathlib import Path

from oracles.base import OracleRequest, OracleResult, OracleStatus
from slicers.base import SliceOutcome, SliceRequest


def test_slice_outcome_serializes_minimal_contract(tmp_path: Path) -> None:
    output_path = tmp_path / "mutant_sliced.c"
    outcome = SliceOutcome(
        tool="frama",
        input_path=tmp_path / "mutant.c",
        output_path=output_path,
        command=("frama-c", "mutant.c"),
        exit_code=0,
        stdout="",
        stderr="",
        slice_ok=True,
        failure_reason=None,
    )

    assert outcome.to_dict() == {
        "tool": "frama",
        "input_path": str(tmp_path / "mutant.c"),
        "output_path": str(output_path),
        "command": ["frama-c", "mutant.c"],
        "auxiliary_commands": None,
        "artifacts": None,
        "exit_code": 0,
        "stdout": "",
        "stderr": "",
        "slice_ok": True,
        "failure_reason": None,
    }


def test_oracle_result_serializes_retained_symbol_evidence(tmp_path: Path) -> None:
    request = OracleRequest(
        tool="frama",
        mr="MR3",
        seed_path=tmp_path / "seed.c",
        mutant_path=tmp_path / "mutant.c",
        criteria_path=tmp_path / "criteria.json",
        mutation_meta_path=tmp_path / "mutation_meta.json",
        output_dir=tmp_path / "oracle-out",
    )
    result = OracleResult(
        request=request,
        status=OracleStatus.VIOLATION,
        violation=True,
        reason="retained_inserted_symbols",
        judge_id="frama.mr3.retained_symbols",
        retained_symbols=("mr3_tmp_17",),
        seed_slice=None,
        mutant_slice=None,
    )

    assert result.to_dict()["retained_symbols"] == ["mr3_tmp_17"]
    assert result.to_dict()["tool"] == "frama"
    assert result.to_dict()["mr"] == "MR3"
    assert result.to_dict()["status"] == "VIOLATION"
    assert result.to_dict()["judge_id"] == "frama.mr3.retained_symbols"
    assert result.to_dict()["evidence"] is None


def test_slice_request_keeps_selected_variables_in_order(tmp_path: Path) -> None:
    request = SliceRequest(
        tool="frama",
        input_path=tmp_path / "seed.c",
        output_path=tmp_path / "seed_sliced.c",
        variables=("g_a", "g_b"),
    )

    assert request.variables == ("g_a", "g_b")
