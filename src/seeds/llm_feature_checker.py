from __future__ import annotations

import re
from dataclasses import dataclass, field


# ---------------------------------------------------------------------------
# Topic patterns (Appendix B.1.3 Table B-2)
# ---------------------------------------------------------------------------

TOPIC_PATTERNS: dict[str, list[str]] = {
    "c_language_features": [
        r"\bva_list\b",
        r"\bva_start\b",
        r"\bva_end\b",
        r"\bva_copy\b",
        r"\bvolatile\b",
        r"\brestrict\b",
        r"\b_Atomic\b",
        r"\b__attribute__\b",
        r"\b__asm__\b",
        r"\b__constructor__\b|\b__destructor__\b|\b__attribute__\s*\(\s*\(constructor\)\s*\)\b|\b__attribute__\s*\(\s*\(destructor\)\s*\)\b",
        r"\b_Noreturn\b",
        r"\bVLA\b|\bvariable.length.array\b",
    ],
    "pointer_array_data": [
        r"\*\*",
        r"->",
        r"\bmemcpy\b",
        r"\bmemmove\b",
        r"\bmemset\b",
        r"\bstrncpy\b",
        r"\bstrncat\b",
        r"\[\s*\d+\s*\]",
    ],
    "control_flow": [
        r"\bswitch\b",
        r"\bgoto\b",
        r"\bsetjmp\b",
        r"\blongjmp\b",
        r"\b__builtin_unreachable\b",
        r"\b_Noreturn\b",
        r"\belse\s+if\b",
        r"\bdo\s*\{",
    ],
    "interprocedural": [
        r"\(\s*\*\s*\w+\s*\)\s*\(",
        r"\bcallback\b",
        r"\bqsort\b",
        r"\batexit\b",
        r"\bsignal\b",
        r"\bstrtoul\b|\bstrtoll\b|\bstrtol\b",
        r"\bexplicit_bzero\b",
        r"\bmemfrob\b",
        r"\bswab\b",
        r"\bstpcpy\b|\bstpncpy\b",
        r"\bstatic\s+\w+\s*\w*\s*=",
    ],
    "criterion_export": [
        r"\breturn\b",
        r"\bprintf\b",
        r"\bfprintf\b",
        r"\bassert\b",
    ],
}


# ---------------------------------------------------------------------------
# FeatureCheckResult
# ---------------------------------------------------------------------------


@dataclass(frozen=True, slots=True)
class FeatureCheckResult:
    """Result of semantic feature checking on a C source file."""

    matched_topics: dict[str, list[str]]
    topic_coverage: dict[str, bool]
    min_topics_satisfied: bool
    detected_features: list[str]

    def to_dict(self) -> dict[str, object]:
        return {
            "matched_topics": self.matched_topics,
            "topic_coverage": self.topic_coverage,
            "min_topics_satisfied": self.min_topics_satisfied,
            "detected_features": self.detected_features,
        }


# ---------------------------------------------------------------------------
# Core check function
# ---------------------------------------------------------------------------


def check_semantic_features(
    source_code: str,
    *,
    required_topics: list[str] | None = None,
    min_topics: int = 2,
) -> FeatureCheckResult:
    """Check whether a C source file contains target semantic features.

    Parameters
    ----------
    source_code : str
        The C source code text to check.
    required_topics : list[str] or None
        If provided, these topic keys must all have at least one match.
        Must be a subset of TOPIC_PATTERNS keys.
    min_topics : int
        Minimum number of topic dimensions that must have at least one match.

    Returns
    -------
    FeatureCheckResult
    """
    if required_topics is not None:
        unknown = set(required_topics) - set(TOPIC_PATTERNS.keys())
        if unknown:
            raise ValueError(f"Unknown topic keys: {unknown}")

    matched_topics: dict[str, list[str]] = {}
    topic_coverage: dict[str, bool] = {}
    all_features: list[str] = []

    for topic_key, patterns in TOPIC_PATTERNS.items():
        matched_in_topic: list[str] = []
        for pattern in patterns:
            if re.search(pattern, source_code):
                matched_in_topic.append(pattern)
        matched_topics[topic_key] = matched_in_topic
        topic_coverage[topic_key] = len(matched_in_topic) > 0
        all_features.extend(matched_in_topic)

    # Check minimum coverage
    topics_hit = sum(1 for v in topic_coverage.values() if v)
    min_satisfied = topics_hit >= min_topics

    # Check required topics (if specified)
    if required_topics is not None:
        for req_key in required_topics:
            if not topic_coverage.get(req_key, False):
                min_satisfied = False
                break

    return FeatureCheckResult(
        matched_topics=matched_topics,
        topic_coverage=topic_coverage,
        min_topics_satisfied=min_satisfied,
        detected_features=all_features,
    )


def summarize_features(result: FeatureCheckResult) -> str:
    """Produce a human-readable summary of the feature check result."""
    lines: list[str] = []

    for topic_key, matches in result.matched_topics.items():
        label = topic_key
        if matches:
            lines.append(f"  {label}: {len(matches)} match(es)")
        else:
            lines.append(f"  {label}: no match")

    lines.append("")
    hit_count = sum(1 for v in result.topic_coverage.values() if v)
    total = len(result.topic_coverage)
    status = "PASS" if result.min_topics_satisfied else "FAIL"
    lines.append(f"Topic coverage: {hit_count}/{total} [{status}]")

    return "\n".join(lines)
