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
    def __init__(self, *, cwd: str | Path | None = None, default_timeout: float | None = None) -> None:
        self._cwd = None if cwd is None else Path(cwd)
        self._default_timeout = default_timeout

    def run(self, command: list[str], timeout: float | None = None) -> CommandResult:
        effective_timeout = timeout if timeout is not None else self._default_timeout
        try:
            completed = subprocess.run(
                command,
                cwd=self._cwd,
                capture_output=True,
                text=True,
                encoding="utf-8",
                errors="ignore",
                check=False,
                timeout=effective_timeout,
            )
            return CommandResult(
                exit_code=completed.returncode,
                stdout=completed.stdout,
                stderr=completed.stderr,
            )
        except subprocess.TimeoutExpired:
            return CommandResult(
                exit_code=-1,
                stdout="",
                stderr=f"Command timed out after {effective_timeout}s: {' '.join(command)}",
            )


class WslCommandRunner(SubprocessCommandRunner):
    def wrap(self, command: list[str]) -> list[str]:
        return ["wsl", "bash", "-lc", " ".join(shlex.quote(part) for part in command)]

    def run(self, command: list[str]) -> CommandResult:
        return super().run(self.wrap(command))
