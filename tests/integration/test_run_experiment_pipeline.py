from __future__ import annotations

import json
import os
import shlex
import subprocess
from pathlib import Path

import pytest

from tests.support.wsl_paths import bash_command, to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
PROJECT_ROOT_WSL = to_wsl_path(PROJECT_ROOT)
SRC_ROOT_WSL = to_wsl_path(PROJECT_ROOT / "src")
DEFAULT_AST_TOOL_BIN = str(PROJECT_ROOT / "tooling" / "build" / "mr_ast_tool")
LLM_SEED_DIR = PROJECT_ROOT / "tests" / "fixtures" / "llm_seeds"
FAKE_CREAL = PROJECT_ROOT / "tests" / "fixtures" / "fake_creal.py"
FAKE_FRAMA = PROJECT_ROOT / "tests" / "fixtures" / "fake_frama.py"
DG_BINARY = os.environ.get("DG_LLVM_SLICER_BINARY", "")


def test_run_experiment_generates_mutants_and_runs_both_oracles(tmp_path: Path) -> None:
    if not DG_BINARY:
        pytest.skip("DG_LLVM_SLICER_BINARY env var not set")
    tool_bin = os.environ.get(
        "MR_AST_TOOL_BIN",
        DEFAULT_AST_TOOL_BIN,
    )
    command = bash_command(
        (
            f"cd {shlex.quote(PROJECT_ROOT_WSL)} && "
            f"PYTHONPATH={shlex.quote(SRC_ROOT_WSL)} "
            "python3 -m pipeline.run_experiment "
            f"--mr-ast-tool {shlex.quote(tool_bin)} "
            "--seed-source llm_files "
            f"--seed-dir {shlex.quote(to_wsl_path(LLM_SEED_DIR))} "
            "--mr MR3 "
            "--tool frama "
            "--rng-seed-base 31 "
            f"--output-dir {shlex.quote(to_wsl_path(tmp_path))} "
            "--frama-binary python3 "
            f"--frama-args {shlex.quote(to_wsl_path(FAKE_FRAMA))} "
            f"--dg-binary {DG_BINARY} "
            "--dg-clang-binary clang-14 "
            "--dg-llvm-dis-binary llvm-dis-14"
        )
    )
    completed = subprocess.run(
        command,
        check=False,
        capture_output=True,
        text=True,
        encoding="utf-8",
        errors="ignore",
    )

    assert completed.returncode == 0, completed.stderr
    experiment_manifest = json.loads(
        (tmp_path / "experiment_manifest.json").read_text(encoding="utf-8")
    )
    assert experiment_manifest["kind"] == "experiment_manifest_v1"
    assert experiment_manifest["mr"] == "MR3"
    assert experiment_manifest["tool"] == "frama"
    assert experiment_manifest["case_count"] == 1

    case = experiment_manifest["cases"][0]
    assert case["case_dir"] == "simple_llm_seed"
    assert case["oracle_runs"]["frama"]["output_dir"] == "oracle-frama"
    assert (tmp_path / "simple_llm_seed" / "oracle-frama" / "oracle_result.json").exists()
    assert not (tmp_path / "simple_llm_seed" / "oracle-dg").exists()


def test_run_experiment_supports_mr1_with_frama(tmp_path: Path) -> None:
    completed = _run_single_tool_pipeline(
        tmp_path=tmp_path,
        mr="MR1",
        tool="frama",
        seed_source="creal",
        extra_args=[
            "--count",
            "1",
            "--creal-python",
            "python3",
            "--creal-script",
            to_wsl_path(FAKE_CREAL),
            "--frama-binary",
            "python3",
            "--frama-args",
            to_wsl_path(FAKE_FRAMA),
        ],
    )

    assert completed.returncode == 0, completed.stderr
    experiment_manifest = json.loads(
        (tmp_path / "experiment_manifest.json").read_text(encoding="utf-8")
    )
    assert experiment_manifest["tool"] == "frama"
    assert experiment_manifest["mr"] == "MR1"
    assert experiment_manifest["case_count"] == 1

    case = experiment_manifest["cases"][0]
    assert case["relation_requires_mutant"] is True
    assert case["oracle_runs"].keys() == {"frama"}
    assert (tmp_path / "creal_0001" / "oracle-frama" / "oracle_result.json").exists()


def test_run_experiment_prefers_tool_over_tools_for_mr3(tmp_path: Path) -> None:
    if not DG_BINARY:
        pytest.skip("DG_LLVM_SLICER_BINARY env var not set")
    tool_bin = os.environ.get(
        "MR_AST_TOOL_BIN",
        DEFAULT_AST_TOOL_BIN,
    )
    command = bash_command(
        (
            f"cd {shlex.quote(PROJECT_ROOT_WSL)} && "
            f"PYTHONPATH={shlex.quote(SRC_ROOT_WSL)} "
            "python3 -m pipeline.run_experiment "
            f"--mr-ast-tool {shlex.quote(tool_bin)} "
            "--seed-source llm_files "
            f"--seed-dir {shlex.quote(to_wsl_path(LLM_SEED_DIR))} "
            "--mr MR3 "
            "--tool dg "
            "--tools frama,dg "
            "--rng-seed-base 31 "
            f"--output-dir {shlex.quote(to_wsl_path(tmp_path))} "
            f"--dg-binary {DG_BINARY} "
            "--dg-clang-binary clang-14 "
            "--dg-llvm-dis-binary llvm-dis-14"
        )
    )
    completed = subprocess.run(
        command,
        check=False,
        capture_output=True,
        text=True,
        encoding="utf-8",
        errors="ignore",
    )

    assert completed.returncode == 0, completed.stderr
    experiment_manifest = json.loads(
        (tmp_path / "experiment_manifest.json").read_text(encoding="utf-8")
    )
    assert experiment_manifest["tool"] == "dg"
    assert experiment_manifest["case_count"] == 1

    case = experiment_manifest["cases"][0]
    assert case["oracle_runs"].keys() == {"dg"}
    assert case["oracle_runs"]["dg"]["output_dir"] == "oracle-dg"
    assert (tmp_path / "simple_llm_seed" / "oracle-dg" / "oracle_result.json").exists()
    assert not (tmp_path / "simple_llm_seed" / "oracle-frama").exists()


def test_run_experiment_supports_mr4_with_frama(tmp_path: Path) -> None:
    completed = _run_single_tool_pipeline(
        tmp_path=tmp_path,
        mr="MR4",
        tool="frama",
        seed_source="llm_files",
        extra_args=[
            "--seed-dir",
            to_wsl_path(LLM_SEED_DIR),
            "--frama-binary",
            "python3",
            "--frama-args",
            to_wsl_path(FAKE_FRAMA),
        ],
    )

    assert completed.returncode == 0, completed.stderr
    experiment_manifest = json.loads(
        (tmp_path / "experiment_manifest.json").read_text(encoding="utf-8")
    )
    assert experiment_manifest["tool"] == "frama"
    assert experiment_manifest["mr"] == "MR4"
    assert experiment_manifest["case_count"] == 1

    case = experiment_manifest["cases"][0]
    assert case["relation_requires_mutant"] is False
    assert case["mutant_path"] is None
    assert case["mutation_meta_path"] is None
    assert case["oracle_runs"].keys() == {"frama"}
    assert (tmp_path / "simple_llm_seed" / "oracle-frama" / "oracle_result.json").exists()


def test_run_experiment_supports_mr4_with_dg(tmp_path: Path) -> None:
    completed = _run_single_tool_pipeline(
        tmp_path=tmp_path,
        mr="MR4",
        tool="dg",
        seed_source="llm_files",
        extra_args=[
            "--seed-dir",
            to_wsl_path(LLM_SEED_DIR),
            "--dg-binary",
            DG_BINARY,
            "--dg-clang-binary",
            "clang-14",
            "--dg-llvm-dis-binary",
            "llvm-dis-14",
        ],
    )
    if not DG_BINARY:
        pytest.skip("DG_LLVM_SLICER_BINARY env var not set")

    assert completed.returncode == 0, completed.stderr
    experiment_manifest = json.loads(
        (tmp_path / "experiment_manifest.json").read_text(encoding="utf-8")
    )
    assert experiment_manifest["tool"] == "dg"
    assert experiment_manifest["mr"] == "MR4"
    assert experiment_manifest["case_count"] == 1

    case = experiment_manifest["cases"][0]
    assert case["relation_requires_mutant"] is False
    assert case["mutant_path"] is None
    assert case["mutation_meta_path"] is None
    assert case["oracle_runs"].keys() == {"dg"}
    assert (tmp_path / "simple_llm_seed" / "oracle-dg" / "oracle_result.json").exists()


def _run_single_tool_pipeline(
    *,
    tmp_path: Path,
    mr: str,
    tool: str,
    seed_source: str,
    extra_args: list[str],
) -> subprocess.CompletedProcess[str]:
    tool_bin = os.environ.get(
        "MR_AST_TOOL_BIN",
        DEFAULT_AST_TOOL_BIN,
    )
    command = bash_command(
        (
            f"cd {shlex.quote(PROJECT_ROOT_WSL)} && "
            f"PYTHONPATH={shlex.quote(SRC_ROOT_WSL)} "
            "python3 -m pipeline.run_experiment "
            f"--mr-ast-tool {shlex.quote(tool_bin)} "
            f"--seed-source {shlex.quote(seed_source)} "
            f"--mr {shlex.quote(mr)} "
            f"--tool {shlex.quote(tool)} "
            "--rng-seed-base 31 "
            f"--output-dir {shlex.quote(to_wsl_path(tmp_path))} "
            + " ".join(shlex.quote(argument) for argument in extra_args)
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
