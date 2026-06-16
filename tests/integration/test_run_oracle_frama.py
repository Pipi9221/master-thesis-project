from __future__ import annotations

import json
import subprocess
from pathlib import Path

from tests.support.wsl_paths import bash_command, to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
PROJECT_ROOT_WSL = to_wsl_path(PROJECT_ROOT)
SRC_ROOT_WSL = to_wsl_path(PROJECT_ROOT / "src")
FAKE_FRAMA = PROJECT_ROOT / "tests" / "fixtures" / "fake_frama.py"


def test_run_oracle_frama_reports_retained_mr2_symbols(tmp_path: Path) -> None:
    seed_path = tmp_path / "seed.c"
    mutant_path = tmp_path / "mutant.c"
    criteria_path = tmp_path / "criteria.json"
    mutation_meta_path = tmp_path / "mutation_meta.json"
    output_dir = tmp_path / "oracle-out"

    seed_path.write_text(
        (
            "int g_keep;\n"
            "int helper(void) { return g_keep + 1; }\n"
            "int helper2(void) { return helper() + 2; }\n"
            "int main(void) { g_keep = helper2(); return g_keep; }\n"
        ),
        encoding="utf-8",
    )
    mutant_path.write_text(
        (
            "int g_keep;\n"
            "int helper(void) { return g_keep + 1; }\n"
            "int helper2(void) { return helper() + 2; }\n"
            "int main(void) { int mr2_tmp_19 = 19; g_keep = helper2(); return mr2_tmp_19 + g_keep; }\n"
        ),
        encoding="utf-8",
    )
    criteria_path.write_text(
        json.dumps(
            {
                "criterion_kind": "value",
                "variables": ["g_keep"],
                "seed_id": "case-1",
                "program_point": "main:return",
            }
        ),
        encoding="utf-8",
    )
    mutation_meta_path.write_text(
        json.dumps(
            {
                "mr": "MR2",
                "seed_id": "case-1",
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
            "frama",
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
            "--frama-binary",
            "python3",
            "--frama-args",
            _to_wsl_path(FAKE_FRAMA),
        ]
    )

    assert completed.returncode == 0, completed.stderr
    oracle_result = json.loads((output_dir / "oracle_result.json").read_text(encoding="utf-8"))
    assert oracle_result["tool"] == "frama"
    assert oracle_result["mr"] == "MR2"
    assert oracle_result["status"] == "VIOLATION"
    assert oracle_result["violation"] is True
    assert oracle_result["reason"] == "retained_inserted_symbols"
    assert oracle_result["judge_id"] == "frama.mr2.retained_symbols"
    assert oracle_result["retained_symbols"] == ["mr2_tmp_19"]
    assert oracle_result["seed_slice"]["slice_ok"] is True
    assert oracle_result["mutant_slice"]["slice_ok"] is True
    assert oracle_result["evidence"]["kind"] == "frama_mr23_evidence_v1"
    assert oracle_result["evidence"]["mutant"]["hits"]["mr2_tmp_19"]["count"] >= 1
    assert oracle_result["value_comparisons"] is None
    assert oracle_result["observations"] is None


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
