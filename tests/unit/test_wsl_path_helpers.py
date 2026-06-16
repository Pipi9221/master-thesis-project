from __future__ import annotations

from pathlib import Path

from tests.support.wsl_paths import to_wsl_path


def test_to_wsl_path_converts_windows_drive_paths() -> None:
    assert (
        to_wsl_path(r"D:\pipi922\Desktop\master-thesis\project")
        == "/mnt/d/pipi922/Desktop/master-thesis/project"
    )


def test_to_wsl_path_preserves_posix_paths() -> None:
    assert (
        to_wsl_path(Path("/home/cyuan/projects/master-thesis/project/tests"))
        == "/home/cyuan/projects/master-thesis/project/tests"
    )


def test_to_wsl_path_normalizes_relative_paths() -> None:
    assert to_wsl_path(Path("tests/fixtures/seed.c")) == "tests/fixtures/seed.c"
