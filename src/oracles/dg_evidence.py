from __future__ import annotations

import re
from pathlib import Path

from common.criteria import CriteriaSpec
from common.metadata import MutationMeta
from slicers.base import SliceOutcome


def build_dg_evidence(
    *,
    criteria: CriteriaSpec,
    meta: MutationMeta,
    seed_slice: SliceOutcome | None,
    mutant_slice: SliceOutcome | None,
    retained_symbols: tuple[str, ...],
) -> dict[str, object]:
    tracked_symbols = tuple(dict.fromkeys((*criteria.variables, *meta.inserted_symbols)))
    return {
        "kind": "dg_structured_evidence_v1",
        "mr": meta.mr,
        "seed_id": meta.seed_id,
        "criterion_kind": criteria.criterion_kind,
        "criterion_variables": list(criteria.variables),
        "program_point": criteria.program_point,
        "selected_pattern": meta.selected_pattern,
        "selected_site": None if meta.selected_site is None else meta.selected_site.to_dict(),
        "inserted_symbols": list(meta.inserted_symbols),
        "retained_symbols": list(retained_symbols),
        "seed": _build_slice_evidence(
            slice_outcome=seed_slice,
            tracked_symbols=tracked_symbols,
            inserted_symbols=meta.inserted_symbols,
            retained_symbols=(),
        ),
        "mutant": _build_slice_evidence(
            slice_outcome=mutant_slice,
            tracked_symbols=tracked_symbols,
            inserted_symbols=meta.inserted_symbols,
            retained_symbols=retained_symbols,
        ),
    }


def _build_slice_evidence(
    *,
    slice_outcome: SliceOutcome | None,
    tracked_symbols: tuple[str, ...],
    inserted_symbols: tuple[str, ...],
    retained_symbols: tuple[str, ...],
) -> dict[str, object] | None:
    if slice_outcome is None:
        return None

    artifacts = dict(slice_outcome.artifacts or {})
    slice_ir_hits = _collect_hits(slice_outcome.output_path, tracked_symbols)
    annotated_path = _artifact_path(artifacts, "annotated_ir")
    annotated_hits = _collect_hits(annotated_path, tracked_symbols)
    return {
        "slice_ok": slice_outcome.slice_ok,
        "failure_reason": slice_outcome.failure_reason,
        "criterion": _extract_criterion(slice_outcome.command),
        "command": list(slice_outcome.command),
        "auxiliary_commands": slice_outcome.auxiliary_commands,
        "artifacts": artifacts,
        "stderr_summary": _parse_dg_stderr(slice_outcome.stderr),
        "retained_inserted_symbols": list(retained_symbols),
        "artifact_hits": {
            "slice_ir": slice_ir_hits,
            "annotated_ir": annotated_hits,
        },
        "tracked_symbols": list(tracked_symbols),
        "inserted_symbols": list(inserted_symbols),
    }


def _extract_criterion(command: tuple[str, ...]) -> str | None:
    try:
        index = command.index("-c")
    except ValueError:
        return None
    if index + 1 >= len(command):
        return None
    return command[index + 1]


def _artifact_path(artifacts: dict[str, str], key: str) -> Path | None:
    raw = artifacts.get(key)
    if not raw:
        return None
    return Path(raw)


def _parse_dg_stderr(stderr: str) -> dict[str, object]:
    lines = [line.strip() for line in stderr.splitlines() if line.strip()]
    status_lines = [
        line
        for line in lines
        if line.startswith("SC:")
        or line.startswith("Matched ")
        or line.startswith("[llvm-slicer]")
    ]
    sliced_away = None
    match = re.search(r"Sliced away (\d+) from (\d+) nodes in DG", stderr)
    if match is not None:
        sliced_away = {
            "removed_nodes": int(match.group(1)),
            "total_nodes": int(match.group(2)),
        }
    return {
        "status_lines": status_lines,
        "sliced_away": sliced_away,
    }


def _collect_hits(path: Path | None, symbols: tuple[str, ...]) -> dict[str, dict[str, object]]:
    if path is None or not path.exists():
        return {}
    text = path.read_text(encoding="utf-8", errors="ignore")
    lines = text.splitlines()
    hits: dict[str, dict[str, object]] = {}
    for symbol in symbols:
        matched_lines = [line.strip() for line in lines if symbol in line]
        if not matched_lines:
            continue
        hits[symbol] = {
            "count": len(matched_lines),
            "snippets": matched_lines[:3],
        }
    return hits
