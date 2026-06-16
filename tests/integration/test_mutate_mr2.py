from __future__ import annotations

import json
import os
import subprocess
from pathlib import Path

import pytest

from tests.support.wsl_paths import has_wsl_command, to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
DEFAULT_AST_TOOL_BIN = str(PROJECT_ROOT / "tooling" / "build" / "mr_ast_tool")
SEED = PROJECT_ROOT / "tests" / "fixtures" / "mr2_seed.c"
CRITERIA = PROJECT_ROOT / "tests" / "fixtures" / "mr2_criteria.json"


@pytest.mark.parametrize(
    ("rng_seed", "expected_pattern", "expected_snippets", "expected_symbols"),
    [
        (
            18,
            "local_assignment_chain",
            [
                "int mr2_tmp_18 = 18;",
                "int mr2_sink_18 = mr2_tmp_18 + 1;",
                "(void)mr2_sink_18;",
            ],
            ["mr2_tmp_18", "mr2_sink_18"],
        ),
        (
            19,
            "independent_loop_compute",
            [
                "int mr2_acc_19 = 0;",
                "for (int mr2_i_19 = 0; mr2_i_19 < 3; ++mr2_i_19) {",
                "mr2_acc_19 += mr2_i_19 + 19;",
                "(void)mr2_acc_19;",
            ],
            ["mr2_acc_19", "mr2_i_19"],
        ),
        (
            20,
            "independent_helper_call",
            [
                "static int mr2_helper_20(int seed) {",
                "return seed * 2 + 1;",
                "int mr2_sink_20 = mr2_helper_20(20);",
                "(void)mr2_sink_20;",
            ],
            ["mr2_helper_20", "mr2_sink_20"],
        ),
    ],
)
def test_mutate_mr2_selects_deterministic_phase1_family(
    tmp_path: Path,
    rng_seed: int,
    expected_pattern: str,
    expected_snippets: list[str],
    expected_symbols: list[str],
) -> None:
    completed = _run_mutate(tmp_path=tmp_path, rng_seed=rng_seed)

    assert completed.returncode == 0, completed.stderr
    payload = json.loads(completed.stdout)
    mutant_path = tmp_path / "mutant.c"
    meta_path = tmp_path / "mutation_meta.json"

    assert payload["mr"] == "MR2"
    assert payload["selected_pattern"] == expected_pattern
    assert payload["selected_site"]["function_name"] == "main"
    assert mutant_path.exists()
    assert meta_path.exists()

    mutant = mutant_path.read_text(encoding="utf-8")
    for snippet in expected_snippets:
        assert snippet in mutant

    meta = json.loads(meta_path.read_text(encoding="utf-8"))
    assert meta["mr"] == "MR2"
    assert meta["seed_id"] == "mr2_seed"
    assert meta["rng_seed"] == rng_seed
    assert meta["selected_pattern"] == expected_pattern
    assert meta["validation_status"] == "not_run"
    assert meta["inserted_symbols"] == expected_symbols


def _run_mutate(*, tmp_path: Path, rng_seed: int) -> subprocess.CompletedProcess[str]:
    binary = os.environ.get(
        "MR_AST_TOOL_BIN",
        DEFAULT_AST_TOOL_BIN,
    )
    default_driver = "wsl" if binary.startswith("/mnt/") and has_wsl_command() else "native"
    driver = os.environ.get("MR_AST_TOOL_DRIVER", default_driver)

    if driver == "wsl":
        command = [
            "wsl",
            "bash",
            "-lc",
            (
                f"'{binary}' mutate --mr 'MR2' --seed '{_to_wsl_path(SEED)}' "
                f"--criteria '{_to_wsl_path(CRITERIA)}' --rng-seed '{rng_seed}' "
                f"--output-dir '{_to_wsl_path(tmp_path)}'"
            ),
        ]
    else:
        command = [
            binary,
            "mutate",
            "--mr",
            "MR2",
            "--seed",
            str(SEED),
            "--criteria",
            str(CRITERIA),
            "--rng-seed",
            str(rng_seed),
            "--output-dir",
            str(tmp_path),
        ]

    return subprocess.run(
        command,
        check=False,
        capture_output=True,
        text=True,
        encoding="utf-8",
        errors="ignore",
    )


def _to_wsl_path(path: Path) -> str:
    return to_wsl_path(path)
