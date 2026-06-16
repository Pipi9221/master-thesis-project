from __future__ import annotations

from dataclasses import dataclass
from pathlib import Path


@dataclass(frozen=True, slots=True)
class SliceRequest:
    tool: str
    input_path: Path
    output_path: Path
    variables: tuple[str, ...]
    program_point: str | None = None
    criterion_override: str | None = None


@dataclass(frozen=True, slots=True)
class SliceOutcome:
    tool: str
    input_path: Path
    output_path: Path
    command: tuple[str, ...]
    exit_code: int
    stdout: str
    stderr: str
    slice_ok: bool
    failure_reason: str | None
    auxiliary_commands: dict[str, list[str]] | None = None
    artifacts: dict[str, str] | None = None

    def read_artifact_text(self) -> str:
        if not self.output_path.exists():
            return ""
        return self.output_path.read_text(encoding="utf-8")

    def to_dict(self) -> dict[str, object]:
        return {
            "tool": self.tool,
            "input_path": str(self.input_path),
            "output_path": str(self.output_path),
            "command": list(self.command),
            "auxiliary_commands": self.auxiliary_commands,
            "artifacts": self.artifacts,
            "exit_code": self.exit_code,
            "stdout": self.stdout,
            "stderr": self.stderr,
            "slice_ok": self.slice_ok,
            "failure_reason": self.failure_reason,
        }
