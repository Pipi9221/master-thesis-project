from __future__ import annotations

import os
import subprocess
from pathlib import Path

from tests.support.wsl_paths import has_wsl_command, to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
DEFAULT_AST_TOOL_BIN = str(PROJECT_ROOT / "tooling" / "build" / "mr_ast_tool")
FIXTURE = PROJECT_ROOT / "tests" / "fixtures" / "normalize_seed.c"


def test_normalize_wraps_control_bodies_and_adds_empty_else(tmp_path: Path) -> None:
    binary = os.environ.get(
        "MR_AST_TOOL_BIN",
        DEFAULT_AST_TOOL_BIN,
    )
    default_driver = "wsl" if binary.startswith("/mnt/") and has_wsl_command() else "native"
    driver = os.environ.get("MR_AST_TOOL_DRIVER", default_driver)
    output_path = tmp_path / "normalized.c"

    if driver == "wsl":
        command = [
            "wsl",
            "bash",
            "-lc",
            (
                f"'{binary}' normalize --seed '{_to_wsl_path(FIXTURE)}' "
                f"--output '{_to_wsl_path(output_path)}'"
            ),
        ]
    else:
        command = [
            binary,
            "normalize",
            "--seed",
            str(FIXTURE),
            "--output",
            str(output_path),
        ]

    completed = subprocess.run(
        command,
        check=False,
        capture_output=True,
        text=True,
        encoding="utf-8",
        errors="ignore",
    )

    assert completed.returncode == 0, completed.stderr
    normalized = output_path.read_text(encoding="utf-8")

    assert "if (x) {" in normalized
    assert "} else {}" in normalized
    assert "while (x < 3) {" in normalized


def _to_wsl_path(path: Path) -> str:
    return to_wsl_path(path)
