from __future__ import annotations

import os
import shutil
import subprocess
from pathlib import Path

from .base import SeedSource
from .models import SeedCase

DEFAULT_CREAL_SCRIPT_CANDIDATES = (
    Path("/home/cyuan/projects/Creal/creal.py"),
    Path("/root/Creal/creal.py"),
)

DEFAULT_CSMITH_HOME_CANDIDATES = (
    Path("/opt/csmith-home"),
)


def resolve_default_creal_script() -> str:
    env_value = os.environ.get("CREAL_SCRIPT", "").strip()
    if env_value:
        return env_value

    for candidate in DEFAULT_CREAL_SCRIPT_CANDIDATES:
        if candidate.is_file():
            return candidate.as_posix()
    return ""


def resolve_default_csmith_home() -> str:
    env_value = os.environ.get("CSMITH_HOME", "").strip()
    if env_value:
        return env_value

    for candidate in DEFAULT_CSMITH_HOME_CANDIDATES:
        if (candidate / "include/csmith.h").is_file() and (
            candidate / "bin/csmith"
        ).is_file():
            return candidate.as_posix()
    return ""


class CrealMr1SeedSource(SeedSource):
    def __init__(
        self,
        *,
        count: int = 1,
        python_bin: str = "/usr/bin/python3",
        script_path: str = "",
        syn_prob: int = 3,
        csmith_home: str | None = None,
        csmith_options: str | None = None,
    ) -> None:
        self._count = count
        self._python_bin = python_bin
        self._script_path = script_path or resolve_default_creal_script()
        self._syn_prob = syn_prob
        self._csmith_home = csmith_home or resolve_default_csmith_home() or None
        self._csmith_options = csmith_options or os.environ.get("CSMITH_USER_OPTIONS")

    def build_command(self, output_path: Path) -> list[str]:
        return [
            self._python_bin,
            self._script_path,
            "--dst",
            output_path.as_posix(),
            "--syn-prob",
            str(self._syn_prob),
            "--num-mutants",
            "1",
        ]

    def find_seed_and_mutant(
        self, output_dir: Path
    ) -> tuple[Path | None, Path | None]:
        seed_path = None
        mutant_path = None
        for candidate in sorted(output_dir.glob("*.c")):
            if "_seed_syn" in candidate.name:
                mutant_path = candidate
            elif candidate.name.endswith("_seed.c"):
                seed_path = candidate
        return seed_path, mutant_path

    def materialize_cases(self, output_dir: Path) -> list[SeedCase]:
        if not self._script_path:
            raise RuntimeError("creal script path is required for seed-source 'creal'")

        temp_root = output_dir / ".creal_tmp"
        temp_root.mkdir(parents=True, exist_ok=True)

        cases: list[SeedCase] = []
        for index in range(self._count):
            run_id = f"creal_{index + 1:04d}"
            run_dir = temp_root / run_id
            if run_dir.exists():
                shutil.rmtree(run_dir)
            run_dir.mkdir(parents=True, exist_ok=True)

            completed = subprocess.run(
                self.build_command(run_dir),
                check=False,
                capture_output=True,
                text=True,
                encoding="utf-8",
                errors="ignore",
                env=self.build_environment(),
            )
            if completed.returncode != 0:
                raise RuntimeError(
                    f"creal failed for {run_id}: {completed.stderr.strip()}"
                )

            seed_src, mutant_src = self.find_seed_and_mutant(run_dir)
            if seed_src is None or mutant_src is None:
                raise RuntimeError(
                    f"creal did not emit both seed and mutant for {run_id}"
                )

            case_dir = output_dir / run_id
            case_dir.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(seed_src, case_dir / "seed.c")
            shutil.copyfile(mutant_src, case_dir / "mutant.c")
            shutil.rmtree(run_dir)

            cases.append(
                SeedCase(
                    seed_id=run_id,
                    generator="creal",
                    case_dir=case_dir,
                    source_name=seed_src.name,
                    source_meta={
                        "creal_python": self._python_bin,
                        "creal_script": self._script_path,
                        "syn_prob": self._syn_prob,
                        "csmith_home": self._csmith_home,
                        "csmith_user_options": self._csmith_options,
                        "original_seed_name": seed_src.name,
                        "original_mutant_name": mutant_src.name,
                    },
                )
            )

        return cases

    def build_environment(self) -> dict[str, str]:
        env = os.environ.copy()
        if self._csmith_home:
            env["CSMITH_HOME"] = self._csmith_home
        if self._csmith_options:
            env["CSMITH_USER_OPTIONS"] = self._csmith_options
        return env
