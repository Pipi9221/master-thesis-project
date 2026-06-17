from __future__ import annotations

import argparse
import json
import os
from dataclasses import dataclass
from pathlib import Path

from seeds import resolve_default_creal_script, resolve_default_csmith_home

from .generate_mutants import GenerateMutantsConfig, generate_mutants
from .run_oracle import RunOracleConfig, run_oracle


@dataclass(frozen=True, slots=True)
class ExperimentConfig:
    output_dir: Path
    seed_source: str
    mr: str
    tool: str | None
    tools: tuple[str, ...]
    manifest_path: Path | None = None
    mr_ast_tool: str | None = None
    rng_seed_base: int = 17
    count: int = 1
    csmith_binary: str = "csmith"
    csmith_args: str = ""
    creal_python: str = "/usr/bin/python3"
    creal_script: str = ""
    syn_prob: int = 3
    csmith_home: str = ""
    csmith_options: str = ""
    clang_binary: str = "/usr/lib/llvm-14/bin/clang"
    csmith_include_dir: str = "/usr/include/csmith"
    seed_dir: str | None = None
    frama_binary: str = "frama-c"
    frama_args: str = ""
    compiler_binary: str = "gcc"
    compiler_args: str = "-Wall -Wextra"
    link_args: str = "-lm"
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
    # LLM online seed source
    llm_command: str = ""
    llm_feature_focus: str = ""
    llm_criteria: str = "keep"
    llm_dependency_focus: str = ""
    llm_max_retries: int = 3
    llm_required_topics: str = ""
    llm_min_topics: int = 2
    no_run_check: bool = False
    max_retries: int = 0


def main() -> int:
    config = config_from_args(_parse_args())
    manifest = run_experiment(config)
    print(json.dumps(manifest, indent=2))
    return 0


def config_from_args(args: argparse.Namespace) -> ExperimentConfig:
    tools = tuple(
        tool.strip() for tool in args.tools.split(",") if tool.strip()
    )
    tool = None if args.tool is None else args.tool.strip()
    if tool:
        tools = (tool,)
    elif not tools:
        tools = ("frama", "dg")
    return ExperimentConfig(
        output_dir=Path(args.output_dir),
        seed_source=args.seed_source,
        mr=args.mr,
        tool=tool or None,
        tools=tools,
        manifest_path=None if args.manifest is None else Path(args.manifest),
        mr_ast_tool=args.mr_ast_tool,
        rng_seed_base=args.rng_seed_base,
        count=args.count,
        csmith_binary=args.csmith_binary,
        csmith_args=args.csmith_args,
        creal_python=args.creal_python,
        creal_script=args.creal_script,
        syn_prob=args.syn_prob,
        csmith_home=args.csmith_home,
        csmith_options=args.csmith_options,
        clang_binary=args.clang_binary,
        csmith_include_dir=args.csmith_include_dir,
        seed_dir=args.seed_dir,
        frama_binary=args.frama_binary,
        frama_args=args.frama_args,
        compiler_binary=args.compiler_binary,
        compiler_args=args.compiler_args,
        link_args=args.link_args,
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
        llm_command=args.llm_command,
        llm_feature_focus=args.llm_feature_focus,
        llm_criteria=args.llm_criteria,
        llm_dependency_focus=args.llm_dependency_focus,
        llm_max_retries=args.llm_max_retries,
        llm_required_topics=args.llm_required_topics,
        llm_min_topics=args.llm_min_topics,
        no_run_check=args.no_run_check,
        max_retries=args.max_retries,
    )


def run_experiment(config: ExperimentConfig) -> dict[str, object]:
    config.output_dir.mkdir(parents=True, exist_ok=True)
    generation_manifest, manifest_root = _load_or_generate_manifest(config)
    case_results: list[dict[str, object]] = []
    selected_tools = _selected_tools(config)

    for case in generation_manifest["cases"]:
        try:
            case_dir = manifest_root / str(case["case_dir"])
            seed_path = _resolve_case_artifact_path(case_dir, case, "seed_path", "seed.c")
            criteria_path = _resolve_case_artifact_path(
                case_dir,
                case,
                "criteria_path",
                "criteria.json",
            )
            mutant_path = _resolve_optional_case_artifact_path(
                case_dir,
                case,
                "mutant_path",
                "mutant.c",
            )
            mutation_meta_path = _resolve_optional_case_artifact_path(
                case_dir,
                case,
                "mutation_meta_path",
                "mutation_meta.json",
            )
            oracle_runs: dict[str, dict[str, object]] = {}
            for tool in selected_tools:
                oracle_output_dir = case_dir / f"oracle-{tool}"
                try:
                    result = run_oracle(
                        RunOracleConfig(
                            tool=tool,
                            mr=generation_manifest["mr"],
                            seed_path=seed_path,
                            mutant_path=mutant_path,
                            criteria_path=criteria_path,
                            mutation_meta_path=mutation_meta_path,
                            output_dir=oracle_output_dir,
                            frama_binary=config.frama_binary,
                            frama_args=config.frama_args,
                            compiler_binary=config.compiler_binary,
                            compiler_args=config.compiler_args,
                            link_args=config.link_args,
                            csmith_include_dir=config.csmith_include_dir,
                            dg_binary=config.dg_binary,
                            dg_clang_binary=config.dg_clang_binary,
                            dg_llvm_dis_binary=config.dg_llvm_dis_binary,
                            dg_lli_binary=config.dg_lli_binary,
                            dg_llvm_link_binary=config.dg_llvm_link_binary,
                            dg_native_compile_args=config.dg_native_compile_args,
                            dg_args=config.dg_args,
                            dg_judge_mode=config.dg_judge_mode,
                            dg_llm_judge_command=config.dg_llm_judge_command,
                            dg_llm_prompt_version=config.dg_llm_prompt_version,
                        )
                    )
                    oracle_runs[tool] = {
                        "status": result.status.value,
                        "reason": result.reason,
                        "judge_id": result.judge_id,
                        "output_dir": oracle_output_dir.name,
                        "oracle_result_path": str(oracle_output_dir / "oracle_result.json"),
                    }
                except Exception as exc:
                    oracle_runs[tool] = {
                        "status": "ERROR",
                        "reason": "oracle_exception",
                        "summary": str(exc),
                    }

            case_results.append(
                {
                    **case,
                    "relation_requires_mutant": bool(
                        case.get("relation_requires_mutant", mutant_path is not None)
                    ),
                    "oracle_runs": oracle_runs,
                }
            )
        except Exception as exc:
            case_results.append(
                {
                    **case,
                    "relation_requires_mutant": bool(
                        case.get("relation_requires_mutant", case.get("mutant_path") is not None)
                    ),
                    "oracle_runs": {},
                    "error": str(exc),
                }
            )

    manifest = {
        "kind": "experiment_manifest_v1",
        "mr": generation_manifest["mr"],
        "seed_source": generation_manifest["seed_source"],
        "case_count": generation_manifest["case_count"],
        "tool": selected_tools[0],
        "tools": list(selected_tools),
        "generation_manifest_path": str(manifest_root / "manifest.json"),
        "cases": case_results,
    }
    (config.output_dir / "experiment_manifest.json").write_text(
        json.dumps(manifest, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
    return manifest


def _load_or_generate_manifest(
    config: ExperimentConfig,
) -> tuple[dict[str, object], Path]:
    if config.manifest_path is not None:
        manifest_path = config.manifest_path
        payload = json.loads(manifest_path.read_text(encoding="utf-8-sig"))
        return payload, manifest_path.parent

    payload = generate_mutants(
        GenerateMutantsConfig(
            seed_source=config.seed_source,
            mr=config.mr,
            output_dir=config.output_dir,
            mr_ast_tool=config.mr_ast_tool,
            rng_seed_base=config.rng_seed_base,
            count=config.count,
            csmith_binary=config.csmith_binary,
            csmith_args=config.csmith_args,
            creal_python=config.creal_python,
            creal_script=config.creal_script,
            syn_prob=config.syn_prob,
            csmith_home=config.csmith_home,
            csmith_options=config.csmith_options,
            clang_binary=config.clang_binary,
            csmith_include_dir=config.csmith_include_dir,
            seed_dir=config.seed_dir,
            llm_command=config.llm_command,
            llm_feature_focus=config.llm_feature_focus,
            llm_criteria=config.llm_criteria,
            llm_dependency_focus=config.llm_dependency_focus,
            llm_max_retries=config.llm_max_retries,
            llm_required_topics=config.llm_required_topics,
            llm_min_topics=config.llm_min_topics,
            no_run_check=config.no_run_check,
            max_retries=config.max_retries,
        )
    )
    return payload, config.output_dir


def _selected_tools(config: ExperimentConfig) -> tuple[str, ...]:
    if config.tool:
        return (config.tool,)
    tools = config.tools if config.tools else ("frama",)
    if config.seed_source == "csmith" and "dg" in tools:
        tools = tuple(t for t in tools if t != "dg")
        if tools:
            print("Note: DG oracle skipped for csmith seed source (programs too large for bitcode compilation)")
        else:
            print("Warning: only DG was requested but csmith seeds are too large; running frama instead")
            tools = ("frama",)
    return tools


def _resolve_case_artifact_path(
    case_dir: Path,
    case: dict[str, object],
    key: str,
    default_name: str,
) -> Path:
    raw = case.get(key)
    if raw is None:
        return case_dir / default_name

    path = Path(str(raw))
    if path.is_absolute():
        return path
    return case_dir / path


def _resolve_optional_case_artifact_path(
    case_dir: Path,
    case: dict[str, object],
    key: str,
    default_name: str,
) -> Path | None:
    raw = case.get(key)
    if raw is None or raw == "":
        return None
    path = Path(str(raw))
    if path.is_absolute():
        return path
    return case_dir / (path if str(path) != "." else default_name)


def _parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Generate mutants and run slicing oracles across selected tools."
    )

    parser.add_argument("--output-dir", required=True)
    parser.add_argument("--manifest")
    parser.add_argument("--seed-source", choices=("csmith", "llm_files", "llm_online", "creal"), default="csmith")
    parser.add_argument("--mr", choices=("MR1", "MR2", "MR3", "MR4"), default="MR2")
    parser.add_argument("--tool", choices=("frama", "dg"))
    parser.add_argument("--tools", default="frama,dg")
    parser.add_argument("--mr-ast-tool", default=os.environ.get("MR_AST_TOOL_BIN"))
    parser.add_argument("--rng-seed-base", type=int, default=17)
    parser.add_argument("--count", type=int, default=1)
    parser.add_argument("--csmith-binary", default="csmith")
    parser.add_argument("--csmith-args", default="")
    parser.add_argument(
        "--creal-python",
        default=os.environ.get("CREAL_PYTHON", "/usr/bin/python3"),
    )
    parser.add_argument(
        "--creal-script",
        default=resolve_default_creal_script(),
    )
    parser.add_argument("--syn-prob", type=int, default=3)
    parser.add_argument("--csmith-home", default=resolve_default_csmith_home())
    parser.add_argument(
        "--csmith-options",
        default=os.environ.get("CSMITH_USER_OPTIONS", ""),
    )
    parser.add_argument(
        "--clang-binary",
        default=os.environ.get("CLANG_BIN", "/usr/lib/llvm-14/bin/clang"),
    )
    parser.add_argument(
        "--csmith-include-dir",
        default=os.environ.get("CSMITH_INCLUDE_DIR", "/usr/include/csmith"),
    )
    parser.add_argument("--seed-dir")
    parser.add_argument("--frama-binary", default=os.environ.get("FRAMA_BINARY", "frama-c"))
    parser.add_argument("--frama-args", default=os.environ.get("FRAMA_ARGS", ""))
    parser.add_argument("--compiler-binary", default=os.environ.get("COMPILER_BINARY", "gcc"))
    parser.add_argument("--compiler-args", default=os.environ.get("COMPILER_ARGS", "-Wall -Wextra"))
    parser.add_argument("--link-args", default=os.environ.get("LINK_ARGS", "-lm"))
    parser.add_argument("--dg-binary", default=os.environ.get("DG_LLVM_SLICER_BINARY"))
    parser.add_argument("--dg-clang-binary", default=os.environ.get("DG_CLANG_BINARY"))
    parser.add_argument("--dg-llvm-dis-binary", default=os.environ.get("DG_LLVM_DIS_BINARY"))
    parser.add_argument("--dg-lli-binary", default=os.environ.get("DG_LLI_BINARY"))
    parser.add_argument("--dg-llvm-link-binary", default=os.environ.get("DG_LLVM_LINK_BINARY"))
    parser.add_argument("--dg-native-compile-args", default=os.environ.get("DG_NATIVE_COMPILE_ARGS", "-O0 -Wall -Wextra"))
    parser.add_argument("--dg-args", default=os.environ.get("DG_ARGS", "-annotate slice"))
    parser.add_argument("--dg-judge-mode", choices=("off", "hybrid", "required"), default=os.environ.get("DG_JUDGE_MODE", "off"))
    parser.add_argument("--dg-llm-judge-command", default=os.environ.get("DG_LLM_JUDGE_COMMAND", ""))
    parser.add_argument("--dg-llm-prompt-version", default="v1")
    parser.add_argument("--llm-command", default=os.environ.get("LLM_COMMAND", ""), help="LLM command template for llm_online (space-separated, supports {prompt_file} and {output_file} placeholders)")
    parser.add_argument("--llm-feature-focus", default="", help="Feature focus topic dimension for LLM prompt")
    parser.add_argument("--llm-criteria", default="keep", help="Criteria variable name for LLM prompt")
    parser.add_argument("--llm-dependency-focus", default="", help="Dependency focus for LLM prompt")
    parser.add_argument("--llm-max-retries", type=int, default=3, help="Max retries per LLM seed")
    parser.add_argument("--llm-required-topics", default="", help="Comma-separated required topic dimensions")
    parser.add_argument("--llm-min-topics", type=int, default=2, help="Minimum topic coverage for feature check")
    parser.add_argument("--no-run-check", action="store_true", help="Skip runtime availability check for LLM seeds")
    parser.add_argument("--max-retries", type=int, default=0, help="Max retries for MR2/MR3 mutation+compile (0=MR-specific defaults: MR2=20, MR3=30)")
    return parser.parse_args()


if __name__ == "__main__":
    raise SystemExit(main())
