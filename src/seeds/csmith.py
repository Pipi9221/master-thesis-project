from __future__ import annotations

import os
import shlex
import subprocess
from pathlib import Path

from .base import SeedSource
from .models import SeedCase


DEFAULT_CSMITH_ARGS = (
    "--no-bitfields",
    "--max-block-depth",
    "3",
    "--max-block-size",
    "4",
    "--max-pointer-depth",
    "2",
)


class CSmithSeedSource(SeedSource):
    def __init__(
        self,
        *,
        count: int = 1,
        binary: str = "csmith",
        extra_args: tuple[str, ...] = (),
    ) -> None:
        self._count = count
        self._binary = self._resolve_binary(binary)
        self._extra_args = self._resolve_extra_args(extra_args)

    def build_command(self, output_path: Path) -> list[str]:
        return [
            self._binary,
            *self._extra_args,
            "--output",
            output_path.as_posix(),
        ]

    def materialize_cases(self, output_dir: Path) -> list[SeedCase]:
        cases: list[SeedCase] = []
        for index in range(self._count):
            seed_id = f"csmith_{index + 1:04d}"
            case_dir = output_dir / seed_id
            case_dir.mkdir(parents=True, exist_ok=True)
            seed_path = case_dir / "seed.c"

            completed = subprocess.run(
                self.build_command(seed_path),
                check=False,
                capture_output=True,
                text=True,
                encoding="utf-8",
                errors="ignore",
            )
            if completed.returncode != 0:
                raise RuntimeError(
                    f"csmith failed for {seed_id}: {completed.stderr.strip()}"
                )

            cases.append(
                SeedCase(
                    seed_id=seed_id,
                    generator="csmith",
                    case_dir=case_dir,
                    source_name="generated.c",
                    source_meta={
                        "binary": self._binary,
                        "extra_args": list(self._extra_args),
                        "csmith_home": os.environ.get("CSMITH_HOME"),
                    },
                )
            )
        return cases

    @staticmethod
    def _resolve_binary(binary: str) -> str:
        if binary != "csmith":
            return binary

        home = os.environ.get("CSMITH_HOME")
        if home is None:
            return binary

        candidates = (
            Path(home) / "bin" / "csmith",
            Path(home) / "src" / "csmith",
        )
        for candidate in candidates:
            if candidate.exists():
                return candidate.as_posix()
        return binary

    @staticmethod
    def _resolve_extra_args(extra_args: tuple[str, ...]) -> tuple[str, ...]:
        if extra_args:
            return extra_args

        env_options = os.environ.get("CSMITH_USER_OPTIONS", "").strip()
        if not env_options:
            return DEFAULT_CSMITH_ARGS
        return tuple(shlex.split(env_options))
