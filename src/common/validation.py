from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path


@dataclass(frozen=True, slots=True)
class CommandResult:
    exit_code: int
    stdout: str
    stderr: str


@dataclass(frozen=True, slots=True)
class ValidationReport:
    compile_ok: bool
    exit_equal: bool
    stdout_equal: bool
    behavior_equivalent: bool

    def to_dict(self) -> dict[str, object]:
        return {
            "compile_ok": self.compile_ok,
            "exit_equal": self.exit_equal,
            "stdout_equal": self.stdout_equal,
            "behavior_equivalent": self.behavior_equivalent,
        }


def write_validation_report(path: str | Path, report: ValidationReport) -> None:
    Path(path).write_text(
        json.dumps(report.to_dict(), indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
