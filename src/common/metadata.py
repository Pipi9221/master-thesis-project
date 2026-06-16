from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path

try:
    from enum import StrEnum
except ImportError:  # pragma: no cover - Python < 3.11 compatibility
    from enum import Enum

    class StrEnum(str, Enum):
        pass


class ValidationStatus(StrEnum):
    NOT_RUN = "not_run"
    SUCCESS = "success"
    FAILED = "failed"


@dataclass(frozen=True, slots=True)
class SelectedSite:
    function_name: str
    node_kind: str
    line: int | None = None
    column: int | None = None
    source_offset: int | None = None

    def to_dict(self) -> dict[str, object]:
        return {
            "function_name": self.function_name,
            "node_kind": self.node_kind,
            "line": self.line,
            "column": self.column,
            "source_offset": self.source_offset,
        }

    @classmethod
    def from_dict(cls, payload: dict[str, object]) -> "SelectedSite":
        return cls(
            function_name=str(payload["function_name"]),
            node_kind=str(payload["node_kind"]),
            line=_optional_int(payload.get("line")),
            column=_optional_int(payload.get("column")),
            source_offset=_optional_int(payload.get("source_offset")),
        )


@dataclass(frozen=True, slots=True)
class MutationMeta:
    mr: str
    seed_id: str
    rng_seed: int
    selected_pattern: str | None
    selected_site: SelectedSite | None
    inserted_symbols: tuple[str, ...]
    attempt_count: int
    validation_status: ValidationStatus
    failure_reason: str | None
    failure_history: tuple[str, ...] = ()

    def to_dict(self) -> dict[str, object]:
        return {
            "mr": self.mr,
            "seed_id": self.seed_id,
            "rng_seed": self.rng_seed,
            "selected_pattern": self.selected_pattern,
            "selected_site": None if self.selected_site is None else self.selected_site.to_dict(),
            "inserted_symbols": list(self.inserted_symbols),
            "attempt_count": self.attempt_count,
            "validation_status": self.validation_status.value,
            "failure_reason": self.failure_reason,
            "failure_history": list(self.failure_history),
        }

    @classmethod
    def from_dict(cls, payload: dict[str, object]) -> "MutationMeta":
        selected_site_raw = payload.get("selected_site")
        return cls(
            mr=str(payload["mr"]),
            seed_id=str(payload["seed_id"]),
            rng_seed=int(payload["rng_seed"]),
            selected_pattern=_optional_str(payload.get("selected_pattern")),
            selected_site=(
                None
                if selected_site_raw is None
                else SelectedSite.from_dict(dict(selected_site_raw))
            ),
            inserted_symbols=tuple(str(value) for value in payload.get("inserted_symbols", [])),
            attempt_count=int(payload["attempt_count"]),
            validation_status=ValidationStatus(str(payload["validation_status"])),
            failure_reason=_optional_str(payload.get("failure_reason")),
            failure_history=tuple(str(value) for value in payload.get("failure_history", [])),
        )


def write_mutation_meta(path: str | Path, meta: MutationMeta) -> None:
    Path(path).write_text(
        json.dumps(meta.to_dict(), indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )


def load_mutation_meta(path: str | Path) -> MutationMeta:
    payload = json.loads(Path(path).read_text(encoding="utf-8-sig"))
    return MutationMeta.from_dict(payload)


def _optional_int(value: object) -> int | None:
    if value is None:
        return None
    return int(value)


def _optional_str(value: object) -> str | None:
    if value is None:
        return None
    return str(value)
