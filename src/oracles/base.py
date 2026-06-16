from __future__ import annotations

from dataclasses import dataclass
from pathlib import Path

from slicers.base import SliceOutcome
from common.metadata import StrEnum


class OracleStatus(StrEnum):
    PASS = "PASS"
    VIOLATION = "VIOLATION"
    ERROR = "ERROR"


@dataclass(frozen=True, slots=True)
class OracleRequest:
    tool: str
    mr: str
    seed_path: Path
    mutant_path: Path | None
    criteria_path: Path
    mutation_meta_path: Path | None
    output_dir: Path


@dataclass(frozen=True, slots=True)
class OracleResult:
    request: OracleRequest
    status: OracleStatus
    violation: bool
    reason: str
    judge_id: str
    retained_symbols: tuple[str, ...]
    seed_slice: SliceOutcome | None
    mutant_slice: SliceOutcome | None
    value_comparisons: dict[str, dict[str, object]] | None = None
    observations: dict[str, dict[str, object]] | None = None
    evidence: dict[str, object] | None = None
    summary: str | None = None

    def to_dict(self) -> dict[str, object]:
        return {
            "tool": self.request.tool,
            "mr": self.request.mr,
            "seed_path": str(self.request.seed_path),
            "mutant_path": None if self.request.mutant_path is None else str(self.request.mutant_path),
            "criteria_path": str(self.request.criteria_path),
            "mutation_meta_path": (
                None
                if self.request.mutation_meta_path is None
                else str(self.request.mutation_meta_path)
            ),
            "output_dir": str(self.request.output_dir),
            "status": self.status.value,
            "violation": self.violation,
            "reason": self.reason,
            "reason_code": self.reason,
            "judge_id": self.judge_id,
            "retained_symbols": list(self.retained_symbols),
            "seed_slice": None if self.seed_slice is None else self.seed_slice.to_dict(),
            "mutant_slice": None if self.mutant_slice is None else self.mutant_slice.to_dict(),
            "value_comparisons": self.value_comparisons,
            "observations": self.observations,
            "evidence": self.evidence,
            "summary": self.summary,
        }
