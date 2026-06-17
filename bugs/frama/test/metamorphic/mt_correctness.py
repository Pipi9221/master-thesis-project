#!/usr/bin/env python3
import argparse
import pathlib
import shlex
import subprocess
import sys
import tempfile
from dataclasses import dataclass


@dataclass(frozen=True)
class CaseConfig:
    criteria_kind: str
    criteria_arg: str
    frama_args: list[str]
    gcc_std: str
    gcc_args: list[str]


def _read_lines(path: pathlib.Path) -> list[str]:
    return path.read_text(encoding="utf-8").splitlines()


def _parse_case_config(src: pathlib.Path) -> CaseConfig:
    criteria_line = ""
    frama_line = ""
    gcc_std = "c11"
    gcc_line = ""

    for line in _read_lines(src):
        if line.startswith("// CRITERIA: "):
            criteria_line = line[len("// CRITERIA: ") :].strip()
        elif line.startswith("// FRAMAC-ARGS: "):
            frama_line = line[len("// FRAMAC-ARGS: ") :].strip()
        elif line.startswith("// GCC-STD: "):
            gcc_std = line[len("// GCC-STD: ") :].strip() or "c11"
        elif line.startswith("// GCC-ARGS: "):
            gcc_line = line[len("// GCC-ARGS: ") :].strip()

    if not criteria_line:
        raise SystemExit(f"Missing // CRITERIA: in {src}")
    parts = criteria_line.split(maxsplit=1)
    if len(parts) != 2:
        raise SystemExit(f"Bad // CRITERIA: line in {src}: {criteria_line!r}")
    criteria_kind, criteria_arg = parts

    frama_args = shlex.split(frama_line) if frama_line else []
    gcc_args = shlex.split(gcc_line) if gcc_line else []

    return CaseConfig(
        criteria_kind=criteria_kind,
        criteria_arg=criteria_arg,
        frama_args=frama_args,
        gcc_std=gcc_std,
        gcc_args=gcc_args,
    )


def _slice_args(cfg: CaseConfig) -> list[str]:
    k = cfg.criteria_kind
    a = cfg.criteria_arg
    if k == "return":
        return ["-slice-return", a]
    if k == "value":
        return ["-slice-value", a]
    if k == "annot":
        return ["-slice-annot", a]
    if k == "rd":
        return ["-slice-rd", a]
    if k == "wr":
        return ["-slice-wr", a]
    if k == "calls":
        return ["-slice-calls", a]
    if k == "assert":
        return ["-slice-assert", a]
    if k == "loop-inv":
        return ["-slice-loop-inv", a]
    if k == "pragma":
        return ["-slice-pragma", a]
    raise SystemExit(f"Unknown criteria kind: {k}")


@dataclass(frozen=True)
class RunResult:
    exit_code: int
    stdout: str


def _run(cmd: list[str]) -> subprocess.CompletedProcess[str]:
    return subprocess.run(cmd, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)


def _compile_and_run_c(src_c: pathlib.Path, cfg: CaseConfig, work: pathlib.Path) -> RunResult:
    work.mkdir(parents=True, exist_ok=True)
    bin_path = work / (src_c.stem + ".bin")
    cc_cmd = ["gcc", f"-std={cfg.gcc_std}", "-O0", "-Wall", "-Wextra", *cfg.gcc_args, str(src_c), "-o", str(bin_path)]
    cc = _run(cc_cmd)
    if cc.returncode != 0:
        raise SystemExit(f"Compile failed for {src_c}:\n{cc.stdout}")
    runp = _run([str(bin_path)])
    return RunResult(exit_code=runp.returncode, stdout=runp.stdout)


def _slice_to_c(src_c: pathlib.Path, cfg: CaseConfig, out_c: pathlib.Path) -> None:
    frama_cmd = [
        "opam",
        "exec",
        "--switch=4.14.2",
        "--",
        "frama-c",
        str(src_c),
        *cfg.frama_args,
        *_slice_args(cfg),
        "-then-on",
        "Slicing export",
        "-print",
        "-ocode",
        str(out_c),
    ]
    p = _run(frama_cmd)
    if p.returncode != 0:
        raise SystemExit(f"Frama-C slicing failed for {src_c}:\n{p.stdout}")


def _eq(a: RunResult, b: RunResult) -> bool:
    return a.exit_code == b.exit_code and a.stdout == b.stdout


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("base", type=pathlib.Path)
    ap.add_argument("variant", type=pathlib.Path)
    ap.add_argument("--check-stdout", action="store_true", default=False)
    args = ap.parse_args(argv)

    base = args.base.resolve()
    var = args.variant.resolve()

    cfg = _parse_case_config(base)
    cfg_var = _parse_case_config(var)
    if cfg.criteria_kind != cfg_var.criteria_kind or cfg.criteria_arg != cfg_var.criteria_arg:
        raise SystemExit("Base and variant must use the same // CRITERIA")

    with tempfile.TemporaryDirectory(prefix="framac-mt-eq.") as td:
        work = pathlib.Path(td)
        base_orig = _compile_and_run_c(base, cfg, work / "base_orig")
        var_orig = _compile_and_run_c(var, cfg, work / "var_orig")

        if args.check_stdout:
            if not _eq(base_orig, var_orig):
                raise SystemExit(
                    "Original mismatch under equivalence transform:\n"
                    f"base: exit={base_orig.exit_code}, stdout={base_orig.stdout!r}\n"
                    f"var:  exit={var_orig.exit_code}, stdout={var_orig.stdout!r}\n"
                )
        else:
            if base_orig.exit_code != var_orig.exit_code:
                raise SystemExit(f"Original exit mismatch: base={base_orig.exit_code}, var={var_orig.exit_code}")

        base_sliced_c = work / "base.sliced.c"
        var_sliced_c = work / "var.sliced.c"
        _slice_to_c(base, cfg, base_sliced_c)
        _slice_to_c(var, cfg, var_sliced_c)

        base_slice = _compile_and_run_c(base_sliced_c, cfg, work / "base_slice")
        var_slice = _compile_and_run_c(var_sliced_c, cfg, work / "var_slice")

        if args.check_stdout:
            if not _eq(base_slice, var_slice):
                raise SystemExit(
                    "Sliced mismatch under equivalence transform:\n"
                    f"base: exit={base_slice.exit_code}, stdout={base_slice.stdout!r}\n"
                    f"var:  exit={var_slice.exit_code}, stdout={var_slice.stdout!r}\n"
                )
        else:
            if base_slice.exit_code != var_slice.exit_code:
                raise SystemExit(f"Sliced exit mismatch: base={base_slice.exit_code}, var={var_slice.exit_code}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
