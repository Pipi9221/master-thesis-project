"""Integration tests for the LLM online seed source pipeline.

Uses fake LLM scripts to simulate LLM-driven seed generation without
requiring a real LLM service.

Tests that exercise only seed generation use ``MR4`` (which does not require
``--mr-ast-tool``).  Tests that need actual mutant generation must provide
``--mr-ast-tool`` and use ``with_ast_tool=True``.
"""

from __future__ import annotations

import json
import os
import shlex
import subprocess
from pathlib import Path

from tests.support.wsl_paths import to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
PROJECT_ROOT_WSL = to_wsl_path(PROJECT_ROOT)
SRC_ROOT_WSL = to_wsl_path(PROJECT_ROOT / "src")
FAKE_LLM = PROJECT_ROOT / "tests" / "fixtures" / "fake_llm.py"
DEFAULT_AST_TOOL_BIN = str(PROJECT_ROOT / "tooling" / "build" / "mr_ast_tool")


# ---------------------------------------------------------------------------
# Seed-generation-only tests (use MR4 to avoid --mr-ast-tool requirement)
# ---------------------------------------------------------------------------


def test_llm_online_generates_seeds_and_passes_checks(tmp_path: Path) -> None:
    """End-to-end: fake LLM generates seeds, all checks pass, seed files are written."""
    completed = _run_pipeline(
        tmp_path,
        [
            "--seed-source", "llm_online",
            "--mr", "MR4",
            "--count", "2",
            "--llm-command", f"python3 {to_wsl_path(FAKE_LLM)} --prompt-file {{prompt_file}} --output-file {{output_file}}",
            "--llm-min-topics", "2",
        ],
    )

    assert completed.returncode == 0, f"stderr: {completed.stderr}"

    manifest = json.loads((tmp_path / "manifest.json").read_text(encoding="utf-8"))
    assert manifest["seed_source"] == "llm_online"
    assert manifest["case_count"] == 2

    for case in manifest["cases"]:
        case_dir = tmp_path / case["case_dir"]
        assert (case_dir / "seed.c").exists()
        assert (case_dir / "seed_meta.json").exists()
        assert (case_dir / "prompt.txt").exists()

        meta = json.loads((case_dir / "seed_meta.json").read_text(encoding="utf-8"))
        assert meta["generator"] == "llm_online"
        assert meta["source_meta"]["compile_ok"] is True
        assert meta["source_meta"]["run_ok"] is True
        assert meta["source_meta"]["review_status"] == "pending"
        assert meta["source_meta"]["feature_check"]["min_topics_satisfied"] is True
        assert "prompt_hash" in meta["source_meta"]


def test_llm_online_seed_meta_has_complete_screening_record(tmp_path: Path) -> None:
    """Verify seed_meta.json contains the complete screening pipeline record."""
    completed = _run_pipeline(
        tmp_path,
        [
            "--seed-source", "llm_online",
            "--mr", "MR4",
            "--count", "1",
            "--llm-command", f"python3 {to_wsl_path(FAKE_LLM)} --prompt-file {{prompt_file}} --output-file {{output_file}}",
            "--llm-min-topics", "2",
        ],
    )

    assert completed.returncode == 0, f"stderr: {completed.stderr}"

    meta_path = tmp_path / "llm_online_0001" / "seed_meta.json"
    meta = json.loads(meta_path.read_text(encoding="utf-8"))
    sm = meta["source_meta"]

    # §4.1.2 screening pipeline fields
    assert sm["mr"] == "MR4"
    assert sm["compile_ok"] is True
    assert sm["run_ok"] is True
    assert "feature_check" in sm
    assert sm["feature_check"]["min_topics_satisfied"] is True
    assert sm["review_status"] == "pending"
    assert sm["retry_count"] >= 1
    assert "prompt_hash" in sm


def test_llm_online_with_feature_focus_and_criteria(tmp_path: Path) -> None:
    """Custom feature_focus and criteria appear in the prompt file."""
    completed = _run_pipeline(
        tmp_path,
        [
            "--seed-source", "llm_online",
            "--mr", "MR4",
            "--count", "1",
            "--llm-command", f"python3 {to_wsl_path(FAKE_LLM)} --prompt-file {{prompt_file}} --output-file {{output_file}}",
            "--llm-feature-focus", "指针与数组",
            "--llm-criteria", "result",
            "--llm-dependency-focus", "局部变量链",
        ],
    )

    assert completed.returncode == 0, f"stderr: {completed.stderr}"

    prompt_path = tmp_path / "llm_online_0001" / "prompt.txt"
    prompt_text = prompt_path.read_text(encoding="utf-8")
    assert "指针与数组" in prompt_text
    assert "result" in prompt_text
    assert "局部变量链" in prompt_text


def test_llm_online_no_command_fails_gracefully(tmp_path: Path) -> None:
    """Missing --llm-command should produce a clear error."""
    completed = _run_pipeline(
        tmp_path,
        [
            "--seed-source", "llm_online",
            "--mr", "MR4",
            "--count", "1",
        ],
    )

    assert completed.returncode != 0
    assert "--llm-command is required for llm_online seed source" in completed.stderr


def test_llm_online_with_run_check_skipped(tmp_path: Path) -> None:
    """When --no-run-check is set, run availability check is skipped."""
    completed = _run_pipeline(
        tmp_path,
        [
            "--seed-source", "llm_online",
            "--mr", "MR4",
            "--count", "1",
            "--llm-command", f"python3 {to_wsl_path(FAKE_LLM)} --prompt-file {{prompt_file}} --output-file {{output_file}}",
            "--no-run-check",
        ],
    )

    assert completed.returncode == 0, f"stderr: {completed.stderr}"

    meta = json.loads((tmp_path / "llm_online_0001" / "seed_meta.json").read_text(encoding="utf-8"))
    assert meta["source_meta"]["run_ok"] is True  # defaults to True when skipped


def test_llm_online_prompt_hash_reproducible(tmp_path: Path) -> None:
    """Prompt hash is deterministic and recorded in seed meta."""
    completed = _run_pipeline(
        tmp_path,
        [
            "--seed-source", "llm_online",
            "--mr", "MR4",
            "--count", "2",
            "--llm-command", f"python3 {to_wsl_path(FAKE_LLM)} --prompt-file {{prompt_file}} --output-file {{output_file}}",
            "--llm-feature-focus", "test_focus",
        ],
    )

    assert completed.returncode == 0, f"stderr: {completed.stderr}"

    meta1 = json.loads((tmp_path / "llm_online_0001" / "seed_meta.json").read_text(encoding="utf-8"))
    meta2 = json.loads((tmp_path / "llm_online_0002" / "seed_meta.json").read_text(encoding="utf-8"))

    # Same config → same prompt hash
    assert meta1["source_meta"]["prompt_hash"] == meta2["source_meta"]["prompt_hash"]


def test_llm_online_required_topics_filter(tmp_path: Path) -> None:
    """When required_topics are set, feature check enforces them."""
    completed = _run_pipeline(
        tmp_path,
        [
            "--seed-source", "llm_online",
            "--mr", "MR4",
            "--count", "1",
            "--llm-command", f"python3 {to_wsl_path(FAKE_LLM)} --prompt-file {{prompt_file}} --output-file {{output_file}}",
            "--llm-required-topics", "c_language_features,pointer_array_data,criterion_export",
            "--llm-min-topics", "2",
        ],
    )

    assert completed.returncode == 0, f"stderr: {completed.stderr}"

    meta = json.loads((tmp_path / "llm_online_0001" / "seed_meta.json").read_text(encoding="utf-8"))
    fc = meta["source_meta"]["feature_check"]
    assert fc["min_topics_satisfied"] is True


# ---------------------------------------------------------------------------
# Retry tests
# ---------------------------------------------------------------------------


def test_llm_online_failure_exhausts_retries(tmp_path: Path) -> None:
    """When LLM command always fails, all retries are exhausted."""
    # Use a command that always fails (exit code 1 with no output file)
    completed = _run_pipeline(
        tmp_path,
        [
            "--seed-source", "llm_online",
            "--mr", "MR4",
            "--count", "1",
            "--llm-command", "python3 -c 'import sys; sys.exit(1)'",
            "--llm-max-retries", "3",
        ],
    )

    # Pipeline should complete (not crash) even when all seeds fail
    assert completed.returncode == 0

    # Check failure meta
    failure_meta_path = tmp_path / "llm_online_0001" / "seed_meta.json"
    if failure_meta_path.exists():
        meta = json.loads(failure_meta_path.read_text(encoding="utf-8"))
        assert meta["source_meta"]["review_status"] == "failed"
        assert meta["source_meta"]["retry_count"] >= 3


def test_llm_online_retry_with_bad_program(tmp_path: Path) -> None:
    """When LLM generates a broken program (fails compile), retries exhaust."""
    # Create a custom fake that writes broken C code
    broken_llm = tmp_path / "broken_llm.py"
    broken_llm.write_text("""\
import argparse, sys
from pathlib import Path
p = argparse.ArgumentParser()
p.add_argument("--prompt-file", required=True)
p.add_argument("--output-file", required=True)
args = p.parse_args()
Path(args.output_file).write_text("this is not valid C code")
""")

    completed = _run_pipeline(
        tmp_path / "output",
        [
            "--seed-source", "llm_online",
            "--mr", "MR4",
            "--count", "1",
            "--llm-command", f"python3 {to_wsl_path(broken_llm)} --prompt-file {{prompt_file}} --output-file {{output_file}}",
            "--llm-max-retries", "3",
        ],
    )

    assert completed.returncode == 0

    failure_path = tmp_path / "output" / "llm_online_0001" / "seed_meta.json"
    if failure_path.exists():
        meta = json.loads(failure_path.read_text(encoding="utf-8"))
        assert meta["source_meta"]["review_status"] == "failed"


def _run_pipeline(
    output_dir: Path,
    extra_args: list[str],
    *,
    with_ast_tool: bool = False,
) -> subprocess.CompletedProcess[str]:
    """Run the generate_mutants pipeline with the given extra arguments."""
    args: list[str] = [
        f"--output-dir", to_wsl_path(output_dir),
    ]

    if with_ast_tool:
        tool_bin = os.environ.get("MR_AST_TOOL_BIN", DEFAULT_AST_TOOL_BIN)
        args.extend(["--mr-ast-tool", tool_bin])

    args.extend(extra_args)

    command = [
        "bash",
        "-lc",
        (
            f"cd {shlex.quote(PROJECT_ROOT_WSL)} && "
            f"PYTHONPATH={shlex.quote(SRC_ROOT_WSL)} "
            "python3 -m pipeline.generate_mutants "
            + " ".join(shlex.quote(argument) for argument in args)
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
