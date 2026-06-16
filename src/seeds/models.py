from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path


@dataclass(frozen=True, slots=True)
class SeedCase:
    seed_id: str
    generator: str
    case_dir: Path
    source_name: str
    source_meta: dict[str, object]

    @property
    def seed_path(self) -> Path:
        return self.case_dir / "seed.c"

    @property
    def criteria_path(self) -> Path:
        return self.case_dir / "criteria.json"

    @property
    def seed_meta_path(self) -> Path:
        return self.case_dir / "seed_meta.json"

    @property
    def mutant_path(self) -> Path:
        return self.case_dir / "mutant.c"

    @property
    def mutation_meta_path(self) -> Path:
        return self.case_dir / "mutation_meta.json"

    def write_seed_meta(self) -> None:
        payload = {
            "seed_id": self.seed_id,
            "generator": self.generator,
            "source_name": self.source_name,
            "source_meta": self.source_meta,
        }
        self.seed_meta_path.write_text(
            json.dumps(payload, indent=2, sort_keys=True) + "\n",
            encoding="utf-8",
        )


# ---------------------------------------------------------------------------
# Review status management
# ---------------------------------------------------------------------------

_REVIEW_STATUSES = frozenset({"pending", "approved", "rejected", "failed"})


def update_review_status(
    case_dir: Path,
    *,
    status: str,
    reviewer: str = "",
    notes: str = "",
) -> None:
    """Update the ``review_status`` field in a seed's ``seed_meta.json``.

    Parameters
    ----------
    case_dir : Path
        The case directory containing ``seed_meta.json``.
    status : str
        One of ``pending``, ``approved``, ``rejected``, ``failed``.
    reviewer : str
        Name or identifier of the reviewer.
    notes : str
        Optional review notes.
    """
    if status not in _REVIEW_STATUSES:
        raise ValueError(
            f"Invalid review status {status!r}; expected one of {sorted(_REVIEW_STATUSES)}"
        )

    meta_path = case_dir / "seed_meta.json"
    if not meta_path.exists():
        raise FileNotFoundError(f"seed_meta.json not found in {case_dir}")

    payload = json.loads(meta_path.read_text(encoding="utf-8"))
    source_meta = payload.get("source_meta", {})
    source_meta["review_status"] = status
    if reviewer:
        source_meta["reviewer"] = reviewer
    if notes:
        source_meta["review_notes"] = notes
    payload["source_meta"] = source_meta

    meta_path.write_text(
        json.dumps(payload, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )


def read_review_status(case_dir: Path) -> str | None:
    """Read the current ``review_status`` from a seed's ``seed_meta.json``."""
    meta_path = case_dir / "seed_meta.json"
    if not meta_path.exists():
        return None
    payload = json.loads(meta_path.read_text(encoding="utf-8"))
    return payload.get("source_meta", {}).get("review_status")
