from __future__ import annotations

from common.validation import CommandResult, ValidationReport


class BehaviorValidator:
    def __init__(self, *, stdout_enabled: bool = True) -> None:
        self._stdout_enabled = stdout_enabled

    def compare(
        self,
        *,
        seed_result: CommandResult,
        mutant_result: CommandResult,
        compile_ok: bool = True,
    ) -> ValidationReport:
        exit_equal = seed_result.exit_code == mutant_result.exit_code
        stdout_equal = (
            seed_result.stdout == mutant_result.stdout
            if self._stdout_enabled
            else True
        )
        behavior_equivalent = compile_ok and exit_equal and stdout_equal
        return ValidationReport(
            compile_ok=compile_ok,
            exit_equal=exit_equal,
            stdout_equal=stdout_equal,
            behavior_equivalent=behavior_equivalent,
        )
