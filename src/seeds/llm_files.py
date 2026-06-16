from __future__ import annotations

import shutil
from pathlib import Path

from .base import SeedSource
from .models import SeedCase


class LLMFileSeedSource(SeedSource):
    def __init__(self, *, seed_dir: Path) -> None:
        self._seed_dir = seed_dir

    def list_seed_files(self) -> list[Path]:
        return sorted(path for path in self._seed_dir.glob("*.c") if path.is_file())

    def materialize_cases(self, output_dir: Path) -> list[SeedCase]:
        cases: list[SeedCase] = []
        for seed_file in self.list_seed_files():
            seed_id = seed_file.stem
            case_dir = output_dir / seed_id
            case_dir.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(seed_file, case_dir / "seed.c")
            cases.append(
                SeedCase(
                    seed_id=seed_id,
                    generator="llm_files",
                    case_dir=case_dir,
                    source_name=seed_file.name,
                    source_meta={"source_path": str(seed_file)},
                )
            )
        return cases
