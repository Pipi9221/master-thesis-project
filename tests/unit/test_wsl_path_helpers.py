from __future__ import annotations

from pathlib import Path

from tests.support.wsl_paths import to_wsl_path


def test_to_wsl_path_converts_windows_drive_paths() -> None:
    assert (
        to_wsl_path(r"D:\user\Desktop\project")
        == "/mnt/d/user/Desktop/project"
    )


def test_to_wsl_path_preserves_posix_paths() -> None:
    assert (
        to_wsl_path(Path("/home/user/projects/myproject/tests"))
        == "/home/user/projects/myproject/tests"
    )


def test_to_wsl_path_normalizes_relative_paths() -> None:
    assert to_wsl_path(Path("tests/fixtures/seed.c")) == "tests/fixtures/seed.c"
