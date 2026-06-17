from __future__ import annotations

import argparse
import json
import os
import shlex
import traceback
from dataclasses import dataclass
from pathlib import Path

from common.runner import SubprocessCommandRunner
from common.tool_paths import (
    resolve_dg_clang,
    resolve_dg_lli,
    resolve_dg_llvm_dis,
    resolve_dg_llvm_link,
    resolve_dg_slicer,
)
from oracles.base import OracleRequest, OracleResult, OracleStatus
from oracles.dg_oracle import DGOracle
from oracles.frama_oracle import FramaOracle
from oracles.llm_judge import LlmJudgeConfig, SubprocessLlmJudge
from slicers.dg import DGAdapter
from slicers.frama import FramaAdapter


@dataclass(frozen=True, slots=True)
class RunOracleConfig:
    tool: str
    mr: str
    seed_path: Path
    criteria_path: Path
    output_dir: Path
    mutant_path: Path | None = None
    mutation_meta_path: Path | None = None
    frama_binary: str = "frama-c"
    frama_args: str = ""
    compiler_binary: str = "gcc"
    compiler_args: str = "-Wall -Wextra"
    link_args: str = "-lm"
    csmith_include_dir: str = "/usr/include/csmith"
    dg_binary: str | None = None
    dg_clang_binary: str | None = None
    dg_llvm_dis_binary: str | None = None
    dg_lli_binary: str | None = None
    dg_llvm_link_binary: str | None = None
    dg_native_compile_args: str = "-O0 -Wall -Wextra"
    dg_args: str = "-annotate slice"
    dg_judge_mode: str = "off"
    dg_llm_judge_command: str = ""
    dg_llm_prompt_version: str = "v1"


def main() -> int:
    config = config_from_args(_parse_args())
    result = run_oracle(config)
    print(json.dumps(result.to_dict(), indent=2))
    return 0


def config_from_args(args: argparse.Namespace) -> RunOracleConfig:
    return RunOracleConfig(
        tool=args.tool,
        mr=args.mr,
        seed_path=Path(args.seed),
        mutant_path=None if args.mutant is None else Path(args.mutant),
        criteria_path=Path(args.criteria),
        mutation_meta_path=None if args.mutation_meta is None else Path(args.mutation_meta),
        output_dir=Path(args.output_dir),
        frama_binary=args.frama_binary,
        frama_args=args.frama_args,
        compiler_binary=args.compiler_binary,
        compiler_args=args.compiler_args,
        link_args=args.link_args,
        csmith_include_dir=args.csmith_include_dir,
        dg_binary=args.dg_binary,
        dg_clang_binary=args.dg_clang_binary,
        dg_llvm_dis_binary=args.dg_llvm_dis_binary,
        dg_lli_binary=args.dg_lli_binary,
        dg_llvm_link_binary=args.dg_llvm_link_binary,
        dg_native_compile_args=args.dg_native_compile_args,
        dg_args=args.dg_args,
        dg_judge_mode=args.dg_judge_mode,
        dg_llm_judge_command=args.dg_llm_judge_command,
        dg_llm_prompt_version=args.dg_llm_prompt_version,
    )


def run_oracle(config: RunOracleConfig) -> OracleResult:
    request = OracleRequest(
        tool=config.tool,
        mr=config.mr,
        seed_path=config.seed_path,
        mutant_path=config.mutant_path,
        criteria_path=config.criteria_path,
        mutation_meta_path=config.mutation_meta_path,
        output_dir=config.output_dir,
    )
    request.output_dir.mkdir(parents=True, exist_ok=True)
    runner = SubprocessCommandRunner()

    try:
        result = _build_oracle(config, runner).run(request)
    except Exception as exc:  # pragma: no cover - emergency fallback
        result = OracleResult(
            request=request,
            status=OracleStatus.ERROR,
            violation=False,
            reason="unhandled_exception",
            judge_id=f"{config.tool.lower()}.{config.mr.lower()}.runner",
            retained_symbols=(),
            seed_slice=None,
            mutant_slice=None,
            evidence={
                "kind": "runner_exception_v1",
                "exception_type": type(exc).__name__,
                "message": str(exc),
                "traceback": traceback.format_exc(),
            },
            summary="Oracle execution raised an unhandled exception.",
        )
        (request.output_dir / "oracle_result.json").write_text(
            json.dumps(result.to_dict(), indent=2, sort_keys=True) + "\n",
            encoding="utf-8",
        )
    return result


def _build_oracle(config: RunOracleConfig, runner: SubprocessCommandRunner):
    if config.tool == "frama":
        frama_args = tuple(shlex.split(config.frama_args, posix=os.name != "nt"))
        frama_post_input_args = ()
        if config.csmith_include_dir:
            frama_post_input_args = (f"-cpp-extra-args=-I{config.csmith_include_dir}",)
        adapter = FramaAdapter(
            runner=runner,
            binary=config.frama_binary,
            extra_args=frama_args,
            post_input_args=frama_post_input_args,
        )
        return FramaOracle(
            adapter=adapter,
            runner=runner,
            compiler_binary=config.compiler_binary,
            compiler_extra_args=tuple(
                shlex.split(config.compiler_args, posix=os.name != "nt")
            ),
            include_dirs=(config.csmith_include_dir,) if config.csmith_include_dir else (),
            link_args=tuple(shlex.split(config.link_args, posix=os.name != "nt")),
        )

    adapter = DGAdapter(
        runner=runner,
        binary=config.dg_binary,
        clang_binary=config.dg_clang_binary,
        llvm_dis_binary=config.dg_llvm_dis_binary,
        include_dirs=(config.csmith_include_dir,) if config.csmith_include_dir else (),
        extra_args=tuple(shlex.split(config.dg_args, posix=os.name != "nt")),
    )
    llm_judge = None
    if config.dg_judge_mode != "off":
        llm_judge = SubprocessLlmJudge(
            runner=runner,
            config=LlmJudgeConfig(
                mode=config.dg_judge_mode,
                command_template=tuple(
                    shlex.split(config.dg_llm_judge_command, posix=os.name != "nt")
                ),
                prompt_version=config.dg_llm_prompt_version,
            ),
        )
    return DGOracle(
        adapter=adapter,
        runner=runner,
        compiler_binary=config.dg_clang_binary if config.dg_clang_binary is not None else resolve_dg_clang(),
        compiler_extra_args=tuple(
            shlex.split(config.dg_native_compile_args, posix=os.name != "nt")
        ),
        include_dirs=(config.csmith_include_dir,) if config.csmith_include_dir else (),
        link_args=tuple(shlex.split(config.link_args, posix=os.name != "nt")),
        lli_binary=config.dg_lli_binary if config.dg_lli_binary is not None else resolve_dg_lli(),
        llvm_link_binary=config.dg_llvm_link_binary if config.dg_llvm_link_binary is not None else resolve_dg_llvm_link(),
        llm_judge=llm_judge,
    )


def _parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Run slicing oracle on a seed/mutant pair.")
    parser.add_argument("--tool", choices=("frama", "dg"), required=True)
    parser.add_argument("--mr", choices=("MR1", "MR2", "MR3", "MR4"), required=True)
    parser.add_argument("--seed", required=True)
    parser.add_argument("--mutant")
    parser.add_argument("--criteria", required=True)
    parser.add_argument("--mutation-meta")
    parser.add_argument("--output-dir", required=True)
    parser.add_argument("--frama-binary", default="frama-c")
    parser.add_argument("--frama-args", default="")
    parser.add_argument("--compiler-binary", default="gcc")
    parser.add_argument("--compiler-args", default="-Wall -Wextra")
    parser.add_argument("--link-args", default="-lm")
    parser.add_argument(
        "--csmith-include-dir",
        default=os.environ.get("CSMITH_INCLUDE_DIR", "/usr/include/csmith"),
    )
    parser.add_argument("--dg-binary")
    parser.add_argument("--dg-clang-binary")
    parser.add_argument("--dg-llvm-dis-binary")
    parser.add_argument("--dg-lli-binary")
    parser.add_argument("--dg-llvm-link-binary")
    parser.add_argument("--dg-native-compile-args", default="-O0 -Wall -Wextra")
    parser.add_argument("--dg-args", default="-annotate slice")
    parser.add_argument("--dg-judge-mode", choices=("off", "hybrid", "required"), default="off")
    parser.add_argument("--dg-llm-judge-command", default="")
    parser.add_argument("--dg-llm-prompt-version", default="v1")
    return parser.parse_args()


if __name__ == "__main__":
    raise SystemExit(main())
