from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path
from typing import Any


class CriteriaSpecError(ValueError):
    """Raised when a criteria manifest does not match the phase-1 contract."""


@dataclass(frozen=True, slots=True)
class CriteriaSpec:
    criterion_kind: str
    variables: tuple[str, ...]
    seed_id: str
    program_point: str | None = None


def load_criteria_spec(path: str | Path) -> CriteriaSpec:
    raw = json.loads(Path(path).read_text(encoding="utf-8-sig"))
    if not isinstance(raw, dict):
        raise CriteriaSpecError("criteria spec must be a JSON object")

    criterion_kind = _require_non_empty_string(raw, "criterion_kind")
    if criterion_kind != "value":
        raise CriteriaSpecError("criterion_kind must be 'value' in phase 1")

    variables_raw = raw.get("variables")
    if not isinstance(variables_raw, list) or not variables_raw:
        raise CriteriaSpecError("variables must be a non-empty array")

    variables = tuple(_normalize_variable(value) for value in variables_raw)
    seed_id = _require_non_empty_string(raw, "seed_id")

    program_point_raw = raw.get("program_point")
    if program_point_raw is None:
        program_point = None
    elif isinstance(program_point_raw, str) and program_point_raw.strip():
        program_point = program_point_raw.strip()
    else:
        raise CriteriaSpecError("program_point must be a non-empty string when present")

    return CriteriaSpec(
        criterion_kind=criterion_kind,
        variables=variables,
        seed_id=seed_id,
        program_point=program_point,
    )


def _require_non_empty_string(payload: dict[str, Any], key: str) -> str:
    value = payload.get(key)
    if isinstance(value, str) and value.strip():
        return value.strip()
    raise CriteriaSpecError(f"{key} must be a non-empty string")


def _normalize_variable(value: Any) -> str:
    if not isinstance(value, str) or not value.strip():
        raise CriteriaSpecError("variables must contain non-empty strings")
    return value.strip()
