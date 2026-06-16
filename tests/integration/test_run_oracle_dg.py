from __future__ import annotations

import json
import os
import subprocess
from pathlib import Path

import pytest

from tests.support.wsl_paths import bash_command, to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
PROJECT_ROOT_WSL = to_wsl_path(PROJECT_ROOT)
SRC_ROOT_WSL = to_wsl_path(PROJECT_ROOT / "src")

DG_BINARY = os.environ.get("DG_LLVM_SLICER_BINARY", "")


def test_run_oracle_dg_slices_seed_and_mutant_in_wsl(tmp_path: Path) -> None:
    if not DG_BINARY:
        pytest.skip("DG_LLVM_SLICER_BINARY env var not set")
    seed_path = tmp_path / "seed.c"
    mutant_path = tmp_path / "mutant.c"
    criteria_path = tmp_path / "criteria.json"
    mutation_meta_path = tmp_path / "mutation_meta.json"
    output_dir = tmp_path / "oracle-out"

    seed_path.write_text(
        (
            "int g_keep = 0;\n"
            "int main(void) {\n"
            "    g_keep = 1;\n"
            "    return g_keep;\n"
            "}\n"
        ),
        encoding="utf-8",
    )
    mutant_path.write_text(
        (
            "int g_keep = 0;\n"
            "int main(void) {\n"
            "    int mr2_tmp_19 = 19;\n"
            "    g_keep = 1;\n"
            "    return g_keep;\n"
            "}\n"
        ),
        encoding="utf-8",
    )
    criteria_path.write_text(
        json.dumps(
            {
                "criterion_kind": "value",
                "variables": ["g_keep"],
                "seed_id": "case-dg-1",
            }
        ),
        encoding="utf-8",
    )
    mutation_meta_path.write_text(
        json.dumps(
            {
                "mr": "MR2",
                "seed_id": "case-dg-1",
                "rng_seed": 19,
                "selected_pattern": "local_assignment_chain",
                "selected_site": None,
                "inserted_symbols": ["mr2_tmp_19"],
                "attempt_count": 1,
                "validation_status": "not_run",
                "failure_reason": None,
                "failure_history": [],
            }
        ),
        encoding="utf-8",
    )

    completed = _run_oracle_wsl(
        [
            "--tool",
            "dg",
            "--mr",
            "MR2",
            "--seed",
            _to_wsl_path(seed_path),
            "--mutant",
            _to_wsl_path(mutant_path),
            "--criteria",
            _to_wsl_path(criteria_path),
            "--mutation-meta",
            _to_wsl_path(mutation_meta_path),
            "--output-dir",
            _to_wsl_path(output_dir),
            "--dg-binary",
            DG_BINARY,
            "--dg-clang-binary",
            "clang-14",
            "--dg-llvm-dis-binary",
            "llvm-dis-14",
        ]
    )

    assert completed.returncode == 0, completed.stderr
    oracle_result = json.loads((output_dir / "oracle_result.json").read_text(encoding="utf-8"))
    assert oracle_result["tool"] == "dg"
    assert oracle_result["mr"] == "MR2"
    assert oracle_result["status"] == "PASS"
    assert oracle_result["judge_id"] == "dg.mr2.retained_symbols"
    assert oracle_result["seed_slice"]["slice_ok"] is True
    assert oracle_result["mutant_slice"]["slice_ok"] is True
    assert oracle_result["reason"] == "no_retained_inserted_symbols"
    assert Path(oracle_result["seed_slice"]["output_path"]).name == "seed_sliced.ll"
    assert Path(oracle_result["mutant_slice"]["output_path"]).name == "mutant_sliced.ll"
    assert oracle_result["evidence"]["kind"] == "dg_structured_evidence_v1"
    assert oracle_result["evidence"]["criterion_variables"] == ["g_keep"]
    assert oracle_result["evidence"]["mutant"]["criterion"] == ":g_keep"
    assert "annotated_ir" in oracle_result["evidence"]["mutant"]["artifacts"]


def _run_oracle_wsl(arguments: list[str]) -> subprocess.CompletedProcess[str]:
    command = bash_command(
        (
            f"cd {PROJECT_ROOT_WSL} && "
            f"PYTHONPATH={SRC_ROOT_WSL} "
            "python3 -m pipeline.run_oracle "
            + " ".join(_quote(argument) for argument in arguments)
        )
    )
    return subprocess.run(
        command,
        check=False,
        capture_output=True,
        text=True,
        encoding="utf-8",
        errors="ignore",
    )


def _quote(value: str) -> str:
    return "'" + value.replace("'", "'\"'\"'") + "'"


def _to_wsl_path(path: Path) -> str:
    return to_wsl_path(path)
