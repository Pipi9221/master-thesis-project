from __future__ import annotations

import json
import subprocess
from pathlib import Path

from tests.support.wsl_paths import bash_command, to_wsl_path


DG_BINARY = "/home/cyuan/projects/dg/build/tools/llvm-slicer"
PROJECT_ROOT = Path(__file__).resolve().parents[2]
PROJECT_ROOT_WSL = to_wsl_path(PROJECT_ROOT)
SRC_ROOT_WSL = to_wsl_path(PROJECT_ROOT / "src")


def test_run_oracle_dg_mr1_reports_pass_for_equivalent_mutant(tmp_path: Path) -> None:
    seed_path = tmp_path / "seed.c"
    mutant_path = tmp_path / "mutant.c"
    criteria_path = tmp_path / "criteria.json"
    mutation_meta_path = tmp_path / "mutation_meta.json"
    output_dir = tmp_path / "oracle-out"

    seed_path.write_text(
        (
            "int g_keep = 0;\n"
            "int main(void) {\n"
            "    g_keep = 1 + 2;\n"
            "    return g_keep;\n"
            "}\n"
        ),
        encoding="utf-8",
    )
    mutant_path.write_text(
        (
            "int g_keep = 0;\n"
            "int main(void) {\n"
            "    g_keep = 2 + 1;\n"
            "    return g_keep;\n"
            "}\n"
        ),
        encoding="utf-8",
    )
    _write_json(
        criteria_path,
        {
            "criterion_kind": "value",
            "variables": ["g_keep"],
            "seed_id": "dg-mr1",
        },
    )
    _write_json(
        mutation_meta_path,
        {
            "mr": "MR1",
            "seed_id": "dg-mr1",
            "rng_seed": 11,
            "selected_pattern": "semantic_rewrite",
            "selected_site": None,
            "inserted_symbols": [],
            "attempt_count": 1,
            "validation_status": "not_run",
            "failure_reason": None,
            "failure_history": [],
        },
    )

    completed = _run_oracle_wsl(
        [
            "--tool",
            "dg",
            "--mr",
            "MR1",
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
            "--dg-lli-binary",
            "lli-14",
            "--dg-llvm-link-binary",
            "llvm-link-14",
        ]
    )

    assert completed.returncode == 0, completed.stderr
    oracle_result = json.loads((output_dir / "oracle_result.json").read_text(encoding="utf-8"))
    assert oracle_result["status"] == "PASS"
    assert oracle_result["judge_id"] == "dg.mr1.value_equivalence"
    assert oracle_result["reason"] == "no_value_mismatch"
    assert oracle_result["value_comparisons"]["g_keep"] == {
        "original": "3",
        "mutant": "3",
        "original_slice": "3",
        "mutant_slice": "3",
        "different": False,
        "missing": [],
    }
    assert oracle_result["evidence"]["observation_criterion"] == "mr_observe_value"
    assert oracle_result["observations"]["seed_slice"]["run_ok"] is True
    assert oracle_result["observations"]["mutant_slice"]["run_ok"] is True


def test_run_oracle_dg_mr3_runs_retained_symbol_path(tmp_path: Path) -> None:
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
            "    if (0) {\n"
            "        g_keep = 17;\n"
            "    }\n"
            "    g_keep = 1;\n"
            "    return g_keep;\n"
            "}\n"
        ),
        encoding="utf-8",
    )
    _write_json(
        criteria_path,
        {
            "criterion_kind": "value",
            "variables": ["g_keep"],
            "seed_id": "dg-mr3",
        },
    )
    _write_json(
        mutation_meta_path,
        {
            "mr": "MR3",
            "seed_id": "dg-mr3",
            "rng_seed": 17,
            "selected_pattern": "if_zero_wrapper",
            "selected_site": None,
            "inserted_symbols": ["mr3_tmp_17"],
            "attempt_count": 1,
            "validation_status": "not_run",
            "failure_reason": None,
            "failure_history": [],
        },
    )

    completed = _run_oracle_wsl(
        [
            "--tool",
            "dg",
            "--mr",
            "MR3",
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
    assert oracle_result["mr"] == "MR3"
    assert oracle_result["judge_id"] == "dg.mr3.retained_symbols"
    assert oracle_result["status"] in {"PASS", "VIOLATION"}
    assert oracle_result["reason"] in {
        "no_retained_inserted_symbols",
        "retained_inserted_symbols",
    }
    assert oracle_result["seed_slice"]["slice_ok"] is True
    assert oracle_result["mutant_slice"]["slice_ok"] is True
    assert oracle_result["evidence"]["kind"] == "dg_structured_evidence_v1"


def test_run_oracle_dg_mr4_reports_pass_for_matching_instruction_sets(tmp_path: Path) -> None:
    seed_path = tmp_path / "seed.c"
    criteria_path = tmp_path / "criteria.json"
    output_dir = tmp_path / "oracle-out"

    seed_path.write_text(
        (
            "int g_a = 1;\n"
            "int g_b = 2;\n"
            "int main(void) {\n"
            "    int x = g_a + 1;\n"
            "    int y = g_b + 2;\n"
            "    return x + y;\n"
            "}\n"
        ),
        encoding="utf-8",
    )
    _write_json(
        criteria_path,
        {
            "criterion_kind": "value",
            "variables": ["g_a", "g_b"],
            "seed_id": "dg-mr4",
        },
    )

    completed = _run_oracle_wsl(
        [
            "--tool",
            "dg",
            "--mr",
            "MR4",
            "--seed",
            _to_wsl_path(seed_path),
            "--criteria",
            _to_wsl_path(criteria_path),
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
    assert oracle_result["status"] == "PASS"
    assert oracle_result["judge_id"] == "dg.mr4.set_equivalence"
    assert oracle_result["reason"] == "set_match"
    assert oracle_result["evidence"]["kind"] == "dg_mr4_evidence_v1"


def _write_json(path: Path, payload: dict[str, object]) -> None:
    path.write_text(json.dumps(payload), encoding="utf-8")


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
