from __future__ import annotations

import shlex
import subprocess
from pathlib import Path
from typing import Protocol

from .validation import CommandResult


class CommandRunner(Protocol):
    def run(self, command: list[str]) -> CommandResult:
        ...


class SubprocessCommandRunner:
    def __init__(self, *, cwd: str | Path | None = None) -> None:
        self._cwd = None if cwd is None else Path(cwd)

    def run(self, command: list[str]) -> CommandResult:
        completed = subprocess.run(
            command,
            cwd=self._cwd,
            capture_output=True,
            text=True,
            encoding="utf-8",
            errors="ignore",
            check=False,
        )
        return CommandResult(
            exit_code=completed.returncode,
            stdout=completed.stdout,
            stderr=completed.stderr,
        )


class WslCommandRunner(SubprocessCommandRunner):
    def wrap(self, command: list[str]) -> list[str]:
        return ["wsl", "bash", "-lc", " ".join(shlex.quote(part) for part in command)]

    def run(self, command: list[str]) -> CommandResult:
        return super().run(self.wrap(command))
