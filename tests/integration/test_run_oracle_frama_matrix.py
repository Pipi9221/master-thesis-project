from __future__ import annotations

import json
import subprocess
from pathlib import Path

from tests.support.wsl_paths import bash_command, to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
PROJECT_ROOT_WSL = to_wsl_path(PROJECT_ROOT)
SRC_ROOT_WSL = to_wsl_path(PROJECT_ROOT / "src")
FAKE_FRAMA = PROJECT_ROOT / "tests" / "fixtures" / "fake_frama.py"


def test_run_oracle_frama_mr1_reports_pass_for_equivalent_mutant(tmp_path: Path) -> None:
    seed_path = tmp_path / "seed.c"
    mutant_path = tmp_path / "mutant.c"
    criteria_path = tmp_path / "criteria.json"
    mutation_meta_path = tmp_path / "mutation_meta.json"
    output_dir = tmp_path / "oracle-out"

    seed_path.write_text(
        (
            "int g_keep = 0;\n"
            "int helper(void) { return 1; }\n"
            "int helper2(void) { return 2; }\n"
            "int main(void) {\n"
            "    g_keep = helper() + helper2();\n"
            "    return g_keep;\n"
            "}\n"
        ),
        encoding="utf-8",
    )
    mutant_path.write_text(
        (
            "int g_keep = 0;\n"
            "int helper(void) { return 2; }\n"
            "int helper2(void) { return 1; }\n"
            "int main(void) {\n"
            "    g_keep = helper() + helper2();\n"
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
            "seed_id": "frama-mr1",
            "program_point": "main:return",
        },
    )
    _write_json(
        mutation_meta_path,
        {
            "mr": "MR1",
            "seed_id": "frama-mr1",
            "rng_seed": 5,
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
            "frama",
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
            "--frama-binary",
            "python3",
            "--frama-args",
            _to_wsl_path(FAKE_FRAMA),
        ]
    )

    assert completed.returncode == 0, completed.stderr
    oracle_result = json.loads((output_dir / "oracle_result.json").read_text(encoding="utf-8"))
    assert oracle_result["status"] == "PASS"
    assert oracle_result["judge_id"] == "frama.mr1.value_equivalence"
    assert oracle_result["reason"] == "no_value_mismatch"
    assert oracle_result["value_comparisons"]["g_keep"] == {
        "original": "3",
        "mutant": "3",
        "original_slice": "3",
        "mutant_slice": "3",
        "different": False,
        "missing": [],
    }
    assert oracle_result["observations"]["seed_full"]["run_ok"] is True
    assert oracle_result["observations"]["mutant_slice"]["run_ok"] is True


def test_run_oracle_frama_mr3_reports_retained_dead_code_symbols(tmp_path: Path) -> None:
    seed_path = tmp_path / "seed.c"
    mutant_path = tmp_path / "mutant.c"
    criteria_path = tmp_path / "criteria.json"
    mutation_meta_path = tmp_path / "mutation_meta.json"
    output_dir = tmp_path / "oracle-out"

    seed_path.write_text(
        (
            "int g_keep = 0;\n"
            "int helper(void) { return g_keep + 1; }\n"
            "int helper2(void) { return helper() + 2; }\n"
            "int main(void) {\n"
            "    g_keep = helper2();\n"
            "    return g_keep;\n"
            "}\n"
        ),
        encoding="utf-8",
    )
    mutant_path.write_text(
        (
            "int g_keep = 0;\n"
            "int helper(void) { return g_keep + 1; }\n"
            "int helper2(void) { return helper() + 2; }\n"
            "int main(void) {\n"
            "    if (0) {\n"
            "        int mr3_tmp_17 = 17;\n"
            "        g_keep = mr3_tmp_17;\n"
            "    }\n"
            "    g_keep = helper2();\n"
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
            "seed_id": "frama-mr3",
            "program_point": "main:return",
        },
    )
    _write_json(
        mutation_meta_path,
        {
            "mr": "MR3",
            "seed_id": "frama-mr3",
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
            "frama",
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
            "--frama-binary",
            "python3",
            "--frama-args",
            _to_wsl_path(FAKE_FRAMA),
        ]
    )

    assert completed.returncode == 0, completed.stderr
    oracle_result = json.loads((output_dir / "oracle_result.json").read_text(encoding="utf-8"))
    assert oracle_result["status"] == "VIOLATION"
    assert oracle_result["judge_id"] == "frama.mr3.retained_symbols"
    assert oracle_result["reason"] == "retained_inserted_symbols"
    assert oracle_result["retained_symbols"] == ["mr3_tmp_17"]


def test_run_oracle_frama_mr4_reports_pass_for_matching_statement_sets(tmp_path: Path) -> None:
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
            "seed_id": "frama-mr4",
        },
    )

    completed = _run_oracle_wsl(
        [
            "--tool",
            "frama",
            "--mr",
            "MR4",
            "--seed",
            _to_wsl_path(seed_path),
            "--criteria",
            _to_wsl_path(criteria_path),
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
    assert oracle_result["status"] == "PASS"
    assert oracle_result["judge_id"] == "frama.mr4.set_equivalence"
    assert oracle_result["reason"] == "set_match"
    assert oracle_result["evidence"]["kind"] == "frama_mr4_evidence_v1"
    assert oracle_result["evidence"]["programs"]["seed"]["single_union_size"] >= 1


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
