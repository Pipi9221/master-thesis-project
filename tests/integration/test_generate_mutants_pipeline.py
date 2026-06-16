from __future__ import annotations

import json
import os
import shlex
import subprocess
from pathlib import Path

import pytest

from tests.support.wsl_paths import to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
PROJECT_ROOT_WSL = to_wsl_path(PROJECT_ROOT)
SRC_ROOT_WSL = to_wsl_path(PROJECT_ROOT / "src")
DEFAULT_AST_TOOL_BIN = str(PROJECT_ROOT / "tooling" / "build" / "mr_ast_tool")
LLM_SEED_DIR = PROJECT_ROOT / "tests" / "fixtures" / "llm_seeds"
FAKE_CREAL = PROJECT_ROOT / "tests" / "fixtures" / "fake_creal.py"
FAKE_CSMITH = PROJECT_ROOT / "tests" / "fixtures" / "fake_csmith.py"


def _resolve_tool_bin() -> str:
    binary = os.environ.get("MR_AST_TOOL_BIN", DEFAULT_AST_TOOL_BIN)
    if not Path(binary).is_file() and not binary.startswith("/mnt/"):
        pytest.skip(
            f"mr_ast_tool binary not found at {binary}. "
            "Build it with: cmake -S tooling -B tooling/build && cmake --build tooling/build"
        )
    return binary


def test_generate_mutants_pipeline_supports_creal_mr1(tmp_path: Path) -> None:
    completed = _run_pipeline(
        [
            "--seed-source",
            "creal",
            "--mr",
            "MR1",
            "--count",
            "1",
            "--output-dir",
            to_wsl_path(tmp_path),
            "--creal-python",
            "python3",
            "--creal-script",
            to_wsl_path(FAKE_CREAL),
        ]
    )

    assert completed.returncode == 0, completed.stderr
    case_dir = tmp_path / "creal_0001"
    manifest_path = tmp_path / "manifest.json"

    assert (case_dir / "seed.c").exists()
    assert (case_dir / "criteria.json").exists()
    assert (case_dir / "seed_meta.json").exists()
    assert (case_dir / "mutant.c").exists()
    assert (case_dir / "mutation_meta.json").exists()
    assert manifest_path.exists()

    seed = (case_dir / "seed.c").read_text(encoding="utf-8")
    mutant = (case_dir / "mutant.c").read_text(encoding="utf-8")
    assert "int x = 1;" in seed
    assert "static int creal_helper(void)" in mutant

    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    assert manifest["seed_source"] == "creal"
    assert manifest["mr"] == "MR1"
    assert manifest["case_count"] == 1
    assert manifest["cases"][0]["case_dir"] == "creal_0001"
    assert manifest["cases"][0]["compile_check"]["compile_ok"] is True
    assert manifest["cases"][0]["mutate_result"]["selected_pattern"] == "creal_seed_syn"

    meta = json.loads((case_dir / "mutation_meta.json").read_text(encoding="utf-8"))
    assert meta["mr"] == "MR1"
    assert meta["selected_pattern"] == "creal_seed_syn"
    assert meta["selected_site"] is None
    assert meta["compile_check"]["compile_ok"] is True


def test_generate_mutants_pipeline_resolves_installed_creal_defaults(
    tmp_path: Path, monkeypatch
) -> None:
    monkeypatch.setenv("CREAL_SCRIPT", str(FAKE_CREAL))
    completed = _run_pipeline(
        [
            "--seed-source",
            "creal",
            "--mr",
            "MR1",
            "--count",
            "1",
            "--output-dir",
            to_wsl_path(tmp_path),
        ]
    )

    assert completed.returncode == 0, completed.stderr
    manifest = json.loads((tmp_path / "manifest.json").read_text(encoding="utf-8"))
    assert manifest["seed_source"] == "creal"
    assert manifest["mr"] == "MR1"
    assert manifest["cases"][0]["compile_check"]["compile_ok"] is True
    assert manifest["cases"][0]["case_dir"] == "creal_0001"


def test_generate_mutants_pipeline_supports_llm_seed_files(tmp_path: Path) -> None:
    _resolve_tool_bin()  # skip if mr_ast_tool not built
    completed = _run_pipeline(
        [
            "--seed-source",
            "llm_files",
            "--seed-dir",
            to_wsl_path(LLM_SEED_DIR),
            "--mr",
            "MR3",
            "--rng-seed-base",
            "31",
            "--output-dir",
            to_wsl_path(tmp_path),
        ]
    )

    assert completed.returncode == 0, completed.stderr
    case_dir = tmp_path / "simple_llm_seed"
    manifest_path = tmp_path / "manifest.json"

    assert (case_dir / "seed.c").exists()
    assert (case_dir / "criteria.json").exists()
    assert (case_dir / "seed_meta.json").exists()
    assert (case_dir / "mutant.c").exists()
    assert (case_dir / "mutation_meta.json").exists()
    assert manifest_path.exists()

    criteria = json.loads((case_dir / "criteria.json").read_text(encoding="utf-8"))
    assert criteria["seed_id"] == "simple_llm_seed"
    assert criteria["variables"] == ["x"]

    mutant = (case_dir / "mutant.c").read_text(encoding="utf-8")
    assert "if (0) {" in mutant  # dead-code wrapper pattern

    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    assert manifest["seed_source"] == "llm_files"
    assert manifest["case_count"] == 1
    assert manifest["cases"][0]["case_dir"] == "simple_llm_seed"
    assert manifest["cases"][0]["seed_id"] == "simple_llm_seed"
    assert manifest["cases"][0]["compile_check"]["compile_ok"] is True
    assert manifest["cases"][0]["compile_check"]["compiler"].endswith("clang")


def test_generate_mutants_pipeline_supports_csmith_seeds(tmp_path: Path) -> None:
    _resolve_tool_bin()  # skip if mr_ast_tool not built
    completed = _run_pipeline(
        [
            "--seed-source",
            "csmith",
            "--count",
            "1",
            "--mr",
            "MR2",
            "--rng-seed-base",
            "19",
            "--output-dir",
            to_wsl_path(tmp_path),
            "--csmith-binary",
            "csmith",
            "--csmith-args",
            "--no-bitfields --max-block-depth 2 --max-block-size 2",
        ]
    )

    assert completed.returncode == 0, completed.stderr
    case_dir = tmp_path / "csmith_0001"
    manifest_path = tmp_path / "manifest.json"

    assert (case_dir / "seed.c").exists()
    assert (case_dir / "criteria.json").exists()
    assert (case_dir / "seed_meta.json").exists()
    assert (case_dir / "mutant.c").exists()
    assert (case_dir / "mutation_meta.json").exists()
    assert manifest_path.exists()

    seed = (case_dir / "seed.c").read_text(encoding="utf-8")
    assert 'csmith.h' in seed

    criteria = json.loads((case_dir / "criteria.json").read_text(encoding="utf-8"))
    assert criteria["seed_id"] == "csmith_0001"
    assert len(criteria["variables"]) == 1

    mutant = (case_dir / "mutant.c").read_text(encoding="utf-8")
    assert "for (int mr2_i_19 = 0; mr2_i_19 < 3; ++mr2_i_19) {" in mutant

    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    assert manifest["seed_source"] == "csmith"
    assert manifest["case_count"] == 1
    assert manifest["cases"][0]["case_dir"] == "csmith_0001"
    assert manifest["cases"][0]["seed_id"] == "csmith_0001"
    assert manifest["cases"][0]["compile_check"]["compile_ok"] is True
    assert manifest["cases"][0]["compile_check"]["compiler"].endswith("clang")


def test_generate_mutants_pipeline_supports_mr4_llm_files_without_mutant(
    tmp_path: Path,
) -> None:
    completed = _run_pipeline_without_ast_tool(
        [
            "--seed-source",
            "llm_files",
            "--seed-dir",
            to_wsl_path(LLM_SEED_DIR),
            "--mr",
            "MR4",
            "--output-dir",
            to_wsl_path(tmp_path),
        ]
    )

    assert completed.returncode == 0, completed.stderr
    case_dir = tmp_path / "simple_llm_seed"
    manifest = json.loads((tmp_path / "manifest.json").read_text(encoding="utf-8"))

    assert (case_dir / "seed.c").exists()
    assert (case_dir / "criteria.json").exists()
    assert (case_dir / "seed_meta.json").exists()
    assert not (case_dir / "mutant.c").exists()
    assert not (case_dir / "mutation_meta.json").exists()
    assert manifest["mr"] == "MR4"
    assert manifest["cases"][0]["relation_requires_mutant"] is False
    assert manifest["cases"][0]["mutant_path"] is None
    assert manifest["cases"][0]["mutation_meta_path"] is None
    assert len(json.loads((case_dir / "criteria.json").read_text(encoding="utf-8"))["variables"]) == 2


def test_generate_mutants_pipeline_supports_mr4_csmith_without_mutant(
    tmp_path: Path,
) -> None:
    completed = _run_pipeline_without_ast_tool(
        [
            "--seed-source",
            "csmith",
            "--count",
            "1",
            "--mr",
            "MR4",
            "--rng-seed-base",
            "41",
            "--output-dir",
            to_wsl_path(tmp_path),
            "--csmith-binary",
            "python3",
            "--csmith-args",
            to_wsl_path(FAKE_CSMITH),
        ]
    )

    assert completed.returncode == 0, completed.stderr
    case_dir = tmp_path / "csmith_0001"
    manifest = json.loads((tmp_path / "manifest.json").read_text(encoding="utf-8"))

    assert (case_dir / "seed.c").exists()
    assert (case_dir / "criteria.json").exists()
    assert (case_dir / "seed_meta.json").exists()
    assert not (case_dir / "mutant.c").exists()
    assert not (case_dir / "mutation_meta.json").exists()
    assert manifest["mr"] == "MR4"
    assert manifest["cases"][0]["relation_requires_mutant"] is False
    assert manifest["cases"][0]["mutant_path"] is None
    assert manifest["cases"][0]["mutation_meta_path"] is None
    assert json.loads((case_dir / "criteria.json").read_text(encoding="utf-8"))["variables"] == ["g_1", "g_2"]


def test_generate_mutants_pipeline_rejects_mr1_without_creal_seed_source(
    tmp_path: Path,
) -> None:
    completed = _run_pipeline(
        [
            "--seed-source",
            "llm_files",
            "--seed-dir",
            to_wsl_path(LLM_SEED_DIR),
            "--mr",
            "MR1",
            "--output-dir",
            to_wsl_path(tmp_path),
        ]
    )

    assert completed.returncode != 0
    assert "MR1 requires --seed-source creal" in completed.stderr


def test_generate_mutants_pipeline_rejects_mr4_with_creal_seed_source(
    tmp_path: Path,
) -> None:
    completed = _run_pipeline_without_ast_tool(
        [
            "--seed-source",
            "creal",
            "--mr",
            "MR4",
            "--count",
            "1",
            "--output-dir",
            to_wsl_path(tmp_path),
        ]
    )

    assert completed.returncode != 0
    assert "seed-source creal is only supported for MR1" in completed.stderr


def test_generate_mutants_pipeline_requires_ast_tool_for_mr2(
    tmp_path: Path,
) -> None:
    completed = _run_pipeline_without_ast_tool(
        [
            "--seed-source",
            "llm_files",
            "--seed-dir",
            to_wsl_path(LLM_SEED_DIR),
            "--mr",
            "MR2",
            "--output-dir",
            to_wsl_path(tmp_path),
        ]
    )

    assert completed.returncode != 0
    assert "--mr-ast-tool is required for MR2 and MR3" in completed.stderr


def _run_pipeline(arguments: list[str]) -> subprocess.CompletedProcess[str]:
    tool_bin = os.environ.get("MR_AST_TOOL_BIN", DEFAULT_AST_TOOL_BIN)
    command = [
        "bash",
        "-lc",
        (
            f"cd {shlex.quote(PROJECT_ROOT_WSL)} && "
            f"PYTHONPATH={shlex.quote(SRC_ROOT_WSL)} "
            "python3 -m pipeline.generate_mutants "
            f"--mr-ast-tool {shlex.quote(tool_bin)} "
            + " ".join(shlex.quote(argument) for argument in arguments)
        ),
    ]
    return subprocess.run(
        command,
        check=False,
        capture_output=True,
        text=True,
        encoding="utf-8",
        errors="ignore",
    )


def _run_pipeline_without_ast_tool(arguments: list[str]) -> subprocess.CompletedProcess[str]:
    command = [
        "bash",
        "-lc",
        (
            f"cd {shlex.quote(PROJECT_ROOT_WSL)} && "
            f"PYTHONPATH={shlex.quote(SRC_ROOT_WSL)} "
            "python3 -m pipeline.generate_mutants "
            + " ".join(shlex.quote(argument) for argument in arguments)
        ),
    ]
    return subprocess.run(
        command,
        check=False,
        capture_output=True,
        text=True,
        encoding="utf-8",
        errors="ignore",
    )
