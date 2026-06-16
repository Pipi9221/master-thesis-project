from __future__ import annotations

import json
import subprocess
from pathlib import Path

from tests.support.wsl_paths import bash_command, to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
PROJECT_ROOT_WSL = to_wsl_path(PROJECT_ROOT)
SRC_ROOT_WSL = to_wsl_path(PROJECT_ROOT / "src")
FAKE_LLM_JUDGE = PROJECT_ROOT / "tests" / "fixtures" / "fake_llm_judge.py"


def test_run_oracle_dg_hybrid_llm_judge_can_override_pass(tmp_path: Path) -> None:
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
                "seed_id": "case-dg-llm-1",
            }
        ),
        encoding="utf-8",
    )
    mutation_meta_path.write_text(
        json.dumps(
            {
                "mr": "MR2",
                "seed_id": "case-dg-llm-1",
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
            "/home/cyuan/projects/dg/build/tools/llvm-slicer",
            "--dg-clang-binary",
            "clang-14",
            "--dg-llvm-dis-binary",
            "llvm-dis-14",
            "--dg-judge-mode",
            "hybrid",
            "--dg-llm-judge-command",
            f"python3 {_to_wsl_path(FAKE_LLM_JUDGE)} --bundle {{bundle_json}} --status VIOLATION --reason llm_detected_violation --summary 'fake llm override'",
        ]
    )

    assert completed.returncode == 0, completed.stderr
    oracle_result = json.loads((output_dir / "oracle_result.json").read_text(encoding="utf-8"))
    assert oracle_result["tool"] == "dg"
    assert oracle_result["mr"] == "MR2"
    assert oracle_result["status"] == "VIOLATION"
    assert oracle_result["judge_id"] == "dg.mr2.llm_judge"
    assert oracle_result["reason"] == "llm_detected_violation"
    assert oracle_result["evidence"]["llm_judge"]["status"] == "VIOLATION"
    assert oracle_result["evidence"]["llm_judge"]["parsed_output"]["bundle_mr"] == "MR2"


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
