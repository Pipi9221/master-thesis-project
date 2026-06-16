from __future__ import annotations

from dataclasses import dataclass

from common.runner import CommandRunner
from common.validation import CommandResult


@dataclass(frozen=True, slots=True)
class CompileOutcome:
    compile_ok: bool
    command_result: CommandResult


class CompileValidator:
    def __init__(self, runner: CommandRunner) -> None:
        self._runner = runner

    def validate(self, command: list[str]) -> CompileOutcome:
        result = self._runner.run(command)
        return CompileOutcome(
            compile_ok=result.exit_code == 0,
            command_result=result,
        )
