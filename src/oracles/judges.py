from __future__ import annotations

from dataclasses import dataclass

from common.metadata import MutationMeta
from slicers.base import SliceOutcome

from .base import OracleStatus


@dataclass(frozen=True, slots=True)
class JudgeDecision:
    status: OracleStatus
    reason: str
    judge_id: str
    retained_symbols: tuple[str, ...] = ()
    summary: str | None = None
    details: dict[str, object] | None = None

    @property
    def violation(self) -> bool:
        return self.status == OracleStatus.VIOLATION


def judge_retained_symbols(
    meta: MutationMeta,
    slice_outcome: SliceOutcome,
    *,
    tool: str,
    mr: str,
) -> JudgeDecision:
    judge_id = f"{tool.lower()}.{mr.lower()}.retained_symbols"
    if not slice_outcome.slice_ok:
        return JudgeDecision(
            status=OracleStatus.ERROR,
            reason="slice_failed",
            judge_id=judge_id,
            summary="Slice artifact was not produced successfully.",
        )

    artifact_text = slice_outcome.read_artifact_text()
    retained = tuple(
        symbol for symbol in meta.inserted_symbols if symbol and symbol in artifact_text
    )
    if retained:
        return JudgeDecision(
            status=OracleStatus.VIOLATION,
            reason="retained_inserted_symbols",
            judge_id=judge_id,
            retained_symbols=retained,
            summary="Inserted symbols are still present in the slice artifact.",
        )
    return JudgeDecision(
        status=OracleStatus.PASS,
        reason="no_retained_inserted_symbols",
        judge_id=judge_id,
        summary="Inserted symbols are absent from the slice artifact.",
    )


def judge_value_equivalence(
    value_comparisons: dict[str, dict[str, object]],
    *,
    tool: str,
    mr: str,
) -> JudgeDecision:
    judge_id = f"{tool.lower()}.{mr.lower()}.value_equivalence"
    missing_variables = [
        variable
        for variable, payload in value_comparisons.items()
        if payload.get("missing")
    ]
    if missing_variables:
        return JudgeDecision(
            status=OracleStatus.ERROR,
            reason="missing_observed_values",
            judge_id=judge_id,
            summary=f"Observed values were incomplete for: {', '.join(missing_variables)}",
            details={"missing_variables": missing_variables},
        )

    differing = [
        variable
        for variable, payload in value_comparisons.items()
        if bool(payload.get("different"))
    ]
    if differing:
        return JudgeDecision(
            status=OracleStatus.VIOLATION,
            reason="value_mismatch",
            judge_id=judge_id,
            summary=f"Observed values differ for: {', '.join(differing)}",
            details={"different_variables": differing},
        )
    return JudgeDecision(
        status=OracleStatus.PASS,
        reason="no_value_mismatch",
        judge_id=judge_id,
        summary="Observed values are consistent across all compared programs.",
    )


def judge_set_equivalence(
    *,
    single_union: set[str],
    multi_set: set[str],
    tool: str,
    label: str,
) -> JudgeDecision:
    judge_id = f"{tool.lower()}.mr4.set_equivalence"
    missing_from_multi = sorted(single_union - multi_set)
    extra_in_multi = sorted(multi_set - single_union)
    if missing_from_multi or extra_in_multi:
        return JudgeDecision(
            status=OracleStatus.VIOLATION,
            reason="set_mismatch",
            judge_id=judge_id,
            summary=f"Slice composition mismatch for {label}.",
            details={
                "missing_from_multi": missing_from_multi,
                "extra_in_multi": extra_in_multi,
            },
        )
    return JudgeDecision(
        status=OracleStatus.PASS,
        reason="set_match",
        judge_id=judge_id,
        summary=f"Slice composition matches for {label}.",
        details={
            "single_union_size": len(single_union),
            "multi_size": len(multi_set),
        },
    )
