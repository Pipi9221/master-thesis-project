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
