from __future__ import annotations

import json
import os
import subprocess
from pathlib import Path

import pytest

from tests.support.wsl_paths import has_wsl_command, to_wsl_path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
DEFAULT_AST_TOOL_BIN = str(PROJECT_ROOT / "tooling" / "build" / "mr_ast_tool")
SEED = PROJECT_ROOT / "tests" / "fixtures" / "mr3_seed.c"
CRITERIA = PROJECT_ROOT / "tests" / "fixtures" / "mr3_criteria.json"


@pytest.mark.parametrize(
    ("rng_seed", "expected_pattern", "expected_snippets", "expected_symbols"),
    [
        (
            30,
            "if_zero_wrapper_read_related",
            [
                "if (0) {",
                "int mr3_tmp_30 = x;",
                "(void)mr3_tmp_30;",
            ],
            ["mr3_tmp_30"],
        ),
        (
            31,
            "constant_false_wrapper_read_related",
            [
                "if ((1 == 0) && (x >= 0)) {",
                "int mr3_tmp_31 = x + 1;",
                "(void)mr3_tmp_31;",
            ],
            ["mr3_tmp_31"],
        ),
        (
            32,
            "if_zero_wrapper_adjacent_scalar_noise",
            [
                "if (0) {",
                "int mr3_noise_32 = 32;",
                "mr3_noise_32 += 2;",
                "(void)mr3_noise_32;",
            ],
            ["mr3_noise_32"],
        ),
    ],
)
def test_mutate_mr3_selects_deterministic_phase1_pattern(
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

    assert payload["mr"] == "MR3"
    assert payload["selected_pattern"] == expected_pattern
    assert payload["selected_site"]["function_name"] == "main"
    assert mutant_path.exists()
    assert meta_path.exists()

    mutant = mutant_path.read_text(encoding="utf-8")
    for snippet in expected_snippets:
        assert snippet in mutant

    meta = json.loads(meta_path.read_text(encoding="utf-8"))
    assert meta["mr"] == "MR3"
    assert meta["seed_id"] == "mr3_seed"
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
                f"'{binary}' mutate --mr 'MR3' --seed '{_to_wsl_path(SEED)}' "
                f"--criteria '{_to_wsl_path(CRITERIA)}' --rng-seed '{rng_seed}' "
                f"--output-dir '{_to_wsl_path(tmp_path)}'"
            ),
        ]
    else:
        command = [
            binary,
            "mutate",
            "--mr",
            "MR3",
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
