from __future__ import annotations

import json
import os
import subprocess
from pathlib import Path

from tests.support.wsl_paths import has_wsl_command, to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
DEFAULT_AST_TOOL_BIN = str(PROJECT_ROOT / "tooling" / "build" / "mr_ast_tool")
FIXTURE = PROJECT_ROOT / "tests" / "fixtures" / "site_discovery_seed.c"


def test_discover_sites_reports_main_function_boundaries() -> None:
    binary = os.environ.get(
        "MR_AST_TOOL_BIN",
        DEFAULT_AST_TOOL_BIN,
    )
    default_driver = "wsl" if binary.startswith("/mnt/") and has_wsl_command() else "native"
    driver = os.environ.get("MR_AST_TOOL_DRIVER", default_driver)
    expected_seed = str(FIXTURE)
    if driver == "wsl":
        expected_seed = _to_wsl_path(FIXTURE)
        command = [
            "wsl",
            "bash",
            "-lc",
            f"'{binary}' discover-sites --seed '{expected_seed}'",
        ]
    else:
        command = [binary, "discover-sites", "--seed", str(FIXTURE)]

    completed = subprocess.run(
        command,
        check=False,
        capture_output=True,
        text=True,
        encoding="utf-8",
        errors="ignore",
    )

    assert completed.returncode == 0, completed.stderr
    payload = json.loads(completed.stdout)
    functions = {site["function_name"] for site in payload["sites"]}
    site_kinds = {site["site_kind"] for site in payload["sites"]}

    assert payload["seed"] == expected_seed
    assert "tu_anchor" in site_kinds
    assert "stmt_boundary" in site_kinds
    assert "dead_wrapper_site" in site_kinds
    assert "main" in functions
    assert payload["site_count"] >= 2


def _to_wsl_path(path: Path) -> str:
    return to_wsl_path(path)
