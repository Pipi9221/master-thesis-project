from __future__ import annotations

import argparse
import json
import os
import shlex
from dataclasses import dataclass
from pathlib import Path

from common.runner import SubprocessCommandRunner
from mutators.backend import MutationRequest, ToolingBackend
from seeds import (
    CrealMr1SeedSource,
    CSmithSeedSource,
    LLMFileSeedSource,
    LlmOnlineConfig,
    LlmOnlineSeedSource,
    SeedCase,
    resolve_default_creal_script,
    resolve_default_csmith_home,
)
from seeds.criteria import choose_criterion_variables, write_criteria_file
from seeds.smart_criteria import rank_variables
from validators.compile_validator import CompileValidator


@dataclass(frozen=True, slots=True)
class GenerateMutantsConfig:
    seed_source: str
    mr: str
    output_dir: Path
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
    # LLM online seed source
    llm_command: str = ""
    llm_feature_focus: str = ""
    llm_criteria: str = "keep"
    llm_dependency_focus: str = ""
    llm_max_retries: int = 3
    llm_required_topics: str = ""
    llm_min_topics: int = 2
    no_run_check: bool = False
    # Pipeline-level retry for MR2/MR3
    max_retries: int = 0  # 0 means use MR-specific defaults


def main() -> int:
    config = config_from_args(_parse_args())
    manifest = generate_mutants(config)
    print(json.dumps(manifest, indent=2))
    return 0


def config_from_args(args: argparse.Namespace) -> GenerateMutantsConfig:
    return GenerateMutantsConfig(
        seed_source=args.seed_source,
        mr=args.mr,
        output_dir=Path(args.output_dir),
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


def generate_mutants(config: GenerateMutantsConfig) -> dict[str, object]:
    output_dir = config.output_dir
    output_dir.mkdir(parents=True, exist_ok=True)

    seed_source = _build_seed_source(config)
    cases = seed_source.materialize_cases(output_dir)

    runner = SubprocessCommandRunner()
    compile_validator = CompileValidator(runner)
    backend = None
    if config.mr in {"MR2", "MR3"}:
        if not config.mr_ast_tool:
            raise SystemExit("--mr-ast-tool is required for MR2 and MR3")
        backend = ToolingBackend(binary=config.mr_ast_tool)
    summaries: list[dict[str, object]] = []

    # Determine MR-specific max retries
    effective_max_retries = config.max_retries
    if effective_max_retries == 0:
        effective_max_retries = _default_max_retries(config.mr)

    for index, case in enumerate(cases):
        _prepare_case(case, config.mr)
        rng_seed = config.rng_seed_base + index
        relation_requires_mutant = config.mr != "MR4"
        compile_check = None
        if config.mr == "MR1":
            mutate_result = _materialize_mr1_result(case, rng_seed)
            compile_check = _run_compile_gate(
                validator=compile_validator,
                clang_binary=config.clang_binary,
                include_dir=config.csmith_include_dir,
                mutant_path=case.mutant_path,
            )
            _write_compile_check(case.mutation_meta_path, compile_check)
            if not compile_check["compile_ok"]:
                raise SystemExit(
                    f"compile gate failed for {case.seed_id}: exit={compile_check['exit_code']}"
                )
            # MR1 prerequisite: seed/mutant must have equivalent observable behavior
            behavior_check = _check_behavior_equivalence(
                runner=runner,
                clang_binary=config.clang_binary,
                include_dir=config.csmith_include_dir,
                seed_path=case.seed_path,
                mutant_path=case.mutant_path,
                work_dir=case.case_dir,
            )
            _update_mr1_behavior(case.mutation_meta_path, behavior_check)
            if not behavior_check["behavior_ok"]:
                raise SystemExit(
                    f"MR1 behavior equivalence failed for {case.seed_id}: "
                    f"seed_exit={behavior_check.get('seed_exit_code')}, "
                    f"mutant_exit={behavior_check.get('mutant_exit_code')}"
                )
        elif config.mr in {"MR2", "MR3"}:
            mutate_result, compile_check = _try_mr23_with_retries(
                case=case,
                config=config,
                runner=runner,
                compile_validator=compile_validator,
                backend=backend,
                rng_seed_base=rng_seed,
                max_retries=effective_max_retries,
            )
        else:
            mutate_result = None
            compile_check = None
        summaries.append(
            {
                "seed_id": case.seed_id,
                "case_dir": case.case_dir.name,
                "generator": case.generator,
                "rng_seed": rng_seed,
                "seed_path": case.seed_path.name,
                "seed_meta_path": case.seed_meta_path.name,
                "criteria_path": case.criteria_path.name,
                "mutant_path": case.mutant_path.name if relation_requires_mutant else None,
                "mutation_meta_path": case.mutation_meta_path.name if relation_requires_mutant else None,
                "relation_requires_mutant": relation_requires_mutant,
                "compile_check": compile_check,
                "mutate_result": mutate_result,
            }
        )

    manifest = {
        "mr": config.mr,
        "seed_source": config.seed_source,
        "case_count": len(cases),
        "cases": summaries,
    }
    (output_dir / "manifest.json").write_text(
        json.dumps(manifest, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
    return manifest


def _parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Generate MR mutants from seed sources.")
    parser.add_argument("--seed-source", choices=("csmith", "llm_files", "llm_online", "creal"), required=True)
    parser.add_argument("--mr", choices=("MR1", "MR2", "MR3", "MR4"), required=True)
    parser.add_argument("--output-dir", required=True)
    parser.add_argument("--mr-ast-tool")
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
    parser.add_argument("--llm-command", default="", help="LLM command template for llm_online (space-separated, supports {prompt_file} and {output_file} placeholders)")
    parser.add_argument("--llm-feature-focus", default="", help="Feature focus topic dimension for LLM prompt")
    parser.add_argument("--llm-criteria", default="keep", help="Criteria variable name for LLM prompt")
    parser.add_argument("--llm-dependency-focus", default="", help="Dependency focus for LLM prompt")
    parser.add_argument("--llm-max-retries", type=int, default=3, help="Max retries per LLM seed")
    parser.add_argument("--llm-required-topics", default="", help="Comma-separated required topic dimensions")
    parser.add_argument("--llm-min-topics", type=int, default=2, help="Minimum topic coverage for feature check")
    parser.add_argument("--no-run-check", action="store_true", help="Skip runtime availability check for LLM seeds")
    parser.add_argument("--max-retries", type=int, default=0, help="Max retries for MR2/MR3 mutation+compile (0=MR-specific defaults: MR2=20, MR3=30)")
    return parser.parse_args()


def _build_seed_source(config: GenerateMutantsConfig):
    if config.mr == "MR1":
        if config.seed_source != "creal":
            raise SystemExit("MR1 requires --seed-source creal")
        return CrealMr1SeedSource(
            count=config.count,
            python_bin=config.creal_python,
            script_path=config.creal_script,
            syn_prob=config.syn_prob,
            csmith_home=config.csmith_home or None,
            csmith_options=config.csmith_options or None,
        )
    if config.seed_source == "csmith":
        return CSmithSeedSource(
            count=config.count,
            binary=config.csmith_binary,
            extra_args=tuple(shlex.split(config.csmith_args)),
        )
    if config.seed_source == "creal":
        raise SystemExit("seed-source creal is only supported for MR1")
    if config.seed_source == "llm_online":
        if not config.llm_command:
            raise SystemExit("--llm-command is required for llm_online seed source")
        command_template = tuple(shlex.split(config.llm_command))
        required_topics: list[str] | None = None
        if config.llm_required_topics:
            required_topics = [
                t.strip() for t in config.llm_required_topics.split(",") if t.strip()
            ]
        return LlmOnlineSeedSource(
            runner=SubprocessCommandRunner(),
            config=LlmOnlineConfig(
                mr=config.mr,
                count=config.count,
                feature_focus=config.llm_feature_focus,
                criteria=config.llm_criteria,
                dependency_focus=config.llm_dependency_focus,
                command_template=command_template,
                max_retries=config.llm_max_retries,
                required_topics=required_topics,
                min_topics=config.llm_min_topics,
                clang_binary=config.clang_binary,
                compile_include_dir=config.csmith_include_dir,
                run_check=not config.no_run_check,
            ),
        )
    if config.seed_dir is None:
        raise SystemExit("--seed-dir is required for llm_files")
    return LLMFileSeedSource(seed_dir=Path(config.seed_dir))


def _default_max_retries(mr: str) -> int:
    """Return the default max retries for a given MR."""
    if mr == "MR2":
        return 20
    if mr == "MR3":
        return 30
    return 1


def _try_mr23_with_retries(
    *,
    case: SeedCase,
    config: GenerateMutantsConfig,
    runner: SubprocessCommandRunner,
    compile_validator: CompileValidator,
    backend: ToolingBackend,
    rng_seed_base: int,
    max_retries: int,
) -> tuple[dict[str, object] | None, dict[str, object] | None]:
    """Attempt MR2/MR3 mutation + compile check with retry logic.

    Returns ``(mutate_result, compile_check)``.  If all retries are exhausted,
    ``compile_check`` will contain the last failure and a ``retries_exhausted``
    flag will be set in the mutation meta.
    """
    mutate_result: dict[str, object] | None = None
    compile_check: dict[str, object] | None = None
    failure_history: list[dict[str, object]] = []

    for retry in range(max_retries):
        rng_seed = rng_seed_base + retry

        request = MutationRequest(
            mr=config.mr,
            seed_path=case.seed_path,
            criteria_path=case.criteria_path,
            rng_seed=rng_seed,
            output_dir=case.case_dir,
        )
        result = runner.run(backend.build_mutate_command(request))
        if result.exit_code != 0:
            failure_history.append({
                "retry": retry,
                "phase": "mutate",
                "exit_code": result.exit_code,
                "stderr": result.stderr.strip()[:500],
            })
            continue

        mutate_result = json.loads(result.stdout)
        compile_check = _run_compile_gate(
            validator=compile_validator,
            clang_binary=config.clang_binary,
            include_dir=config.csmith_include_dir,
            mutant_path=case.mutant_path,
        )

        if compile_check["compile_ok"]:
            # --- runtime behavior check ---
            run_check = _run_mutant_runtime_check(
                runner=runner,
                clang_binary=config.clang_binary,
                include_dir=config.csmith_include_dir,
                mutant_path=case.mutant_path,
                work_dir=case.case_dir,
            )
            if run_check["run_ok"]:
                # --- behavior equivalence check (prerequisite) ---
                behavior_check = _check_behavior_equivalence(
                    runner=runner,
                    clang_binary=config.clang_binary,
                    include_dir=config.csmith_include_dir,
                    seed_path=case.seed_path,
                    mutant_path=case.mutant_path,
                    work_dir=case.case_dir,
                )
                if behavior_check["behavior_ok"]:
                    _write_compile_check(case.mutation_meta_path, compile_check)
                    _update_retry_meta(
                        case.mutation_meta_path,
                        retry_count=retry + 1,
                        retries_exhausted=False,
                        failure_history=failure_history,
                        validation_status="behavior_ok",
                        run_check=run_check,
                        behavior_check=behavior_check,
                    )
                    return mutate_result, compile_check

                failure_history.append({
                    "retry": retry,
                    "phase": "behavior_equivalence",
                    "exit_equal": behavior_check.get("exit_equal"),
                    "stdout_equal": behavior_check.get("stdout_equal"),
                })
                continue

            failure_history.append({
                "retry": retry,
                "phase": "run_check",
                "exit_code": run_check.get("exit_code"),
            })
            continue

        failure_history.append({
            "retry": retry,
            "phase": "compile_gate",
            "exit_code": compile_check["exit_code"],
        })

    # All retries exhausted
    if compile_check is not None:
        _write_compile_check(case.mutation_meta_path, compile_check)
    _record_failure(
        case_dir=case.case_dir,
        seed_id=case.seed_id,
        mr=config.mr,
        max_retries=max_retries,
        failure_history=failure_history,
        last_compile_check=compile_check,
    )
    return mutate_result, compile_check


def _record_failure(
    *,
    case_dir: Path,
    seed_id: str,
    mr: str,
    max_retries: int,
    failure_history: list[dict[str, object]],
    last_compile_check: dict[str, object] | None,
) -> None:
    """Record failure information when all retries are exhausted."""
    meta_path = case_dir / "mutation_meta.json"
    history_strings = tuple(
        json.dumps(h, sort_keys=True) for h in failure_history
    )
    payload: dict[str, object] = {
        "mr": mr,
        "seed_id": seed_id,
        "rng_seed": 0,
        "selected_pattern": None,
        "selected_site": None,
        "inserted_symbols": [],
        "attempt_count": max_retries,
        "validation_status": "failed_compile",
        "failure_reason": "all_retries_exhausted",
        "failure_history": list(history_strings),
        "retries_exhausted": True,
        "retry_count": max_retries,
        "compile_check": last_compile_check,
    }
    meta_path.write_text(
        json.dumps(payload, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )


def _update_retry_meta(
    mutation_meta_path: Path,
    *,
    retry_count: int,
    retries_exhausted: bool,
    failure_history: list[dict[str, object]],
    validation_status: str = "compile_ok",
    run_check: dict[str, object] | None = None,
    behavior_check: dict[str, object] | None = None,
) -> None:
    """Update mutation meta with retry and validation information."""
    if not mutation_meta_path.exists():
        return
    payload = json.loads(mutation_meta_path.read_text(encoding="utf-8"))
    payload["retry_count"] = retry_count
    payload["retries_exhausted"] = retries_exhausted
    payload["failure_history"] = failure_history
    if not retries_exhausted:
        payload["validation_status"] = validation_status
    if run_check is not None:
        payload["run_check"] = run_check
    if behavior_check is not None:
        payload["behavior_check"] = behavior_check
    mutation_meta_path.write_text(
        json.dumps(payload, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )


def _prepare_case(case: SeedCase, mr: str) -> None:
    source = case.seed_path.read_text(encoding="utf-8")
    mutant_exists = case.mutant_path.exists()
    if mutant_exists:
        mutant_text = case.mutant_path.read_text(encoding="utf-8")
        ranked = rank_variables(source, mutant_text=mutant_text, count=2 if mr == "MR4" else 1)
        if ranked:
            variables = tuple(ranked)
            write_criteria_file(case.criteria_path, seed_id=case.seed_id, variables=variables)
            case.write_seed_meta()
            return
    if mr == "MR4":
        variables = choose_criterion_variables(source, 2)
    else:
        variables = (choose_criterion_variables(source, 1)[0],)
    write_criteria_file(case.criteria_path, seed_id=case.seed_id, variables=variables)
    case.write_seed_meta()


def _run_compile_gate(
    *,
    validator: CompileValidator,
    clang_binary: str,
    include_dir: str,
    mutant_path: Path,
) -> dict[str, object]:
    command = [
        clang_binary,
        "-std=c11",
        "-fsyntax-only",
        "-I",
        include_dir,
        str(mutant_path),
    ]
    outcome = validator.validate(command)
    return {
        "compiler": clang_binary,
        "include_dir": include_dir,
        "compile_ok": outcome.compile_ok,
        "exit_code": outcome.command_result.exit_code,
    }


def _run_mutant_runtime_check(
    *,
    runner: SubprocessCommandRunner,
    clang_binary: str,
    include_dir: str,
    mutant_path: Path,
    work_dir: Path,
) -> dict[str, object]:
    """Compile mutant to executable and run it, checking exit code is 0."""
    exe_path = work_dir / "mutant_run"
    compile_cmd: list[str] = [clang_binary, "-std=c11"]
    if include_dir:
        compile_cmd.extend(["-I", include_dir])
    compile_cmd.extend(["-o", str(exe_path), str(mutant_path)])

    compile_result = runner.run(compile_cmd)
    if compile_result.exit_code != 0:
        return {
            "run_ok": False,
            "phase": "compile_for_run",
            "exit_code": compile_result.exit_code,
            "stderr": compile_result.stderr.strip()[:500],
        }

    run_result = runner.run([str(exe_path)])
    return {
        "run_ok": run_result.exit_code == 0,
        "phase": "execute",
        "exit_code": run_result.exit_code,
        "stdout": run_result.stdout.strip()[:500] if run_result.exit_code != 0 else "",
        "stderr": run_result.stderr.strip()[:500] if run_result.exit_code != 0 else "",
    }


def _check_behavior_equivalence(
    *,
    runner: SubprocessCommandRunner,
    clang_binary: str,
    include_dir: str,
    seed_path: Path,
    mutant_path: Path,
    work_dir: Path,
) -> dict[str, object]:
    """Compile and run both seed and mutant, check they produce equivalent output.

    This serves as the MR1 observation-value consistency prerequisite check
    and the MR2/MR3 runtime compliance check.
    """
    # Compile seed
    seed_exe = work_dir / "seed_run"
    seed_compile = runner.run([
        clang_binary, "-std=c11",
        "-I", include_dir,
        "-o", str(seed_exe),
        str(seed_path),
    ])
    if seed_compile.exit_code != 0:
        return {
            "behavior_ok": False,
            "phase": "seed_compile",
            "seed_exit_code": seed_compile.exit_code,
            "seed_stderr": seed_compile.stderr.strip()[:500],
        }

    # Run seed
    seed_run = runner.run([str(seed_exe)])

    # Compile mutant
    mutant_exe = work_dir / "mutant_behavior_run"
    mutant_compile = runner.run([
        clang_binary, "-std=c11",
        "-I", include_dir,
        "-o", str(mutant_exe),
        str(mutant_path),
    ])
    if mutant_compile.exit_code != 0:
        return {
            "behavior_ok": False,
            "phase": "mutant_compile",
            "seed_exit_code": seed_run.exit_code,
            "mutant_compile_exit_code": mutant_compile.exit_code,
            "mutant_stderr": mutant_compile.stderr.strip()[:500],
        }

    # Run mutant
    mutant_run = runner.run([str(mutant_exe)])

    exit_equal = seed_run.exit_code == mutant_run.exit_code
    stdout_equal = seed_run.stdout == mutant_run.stdout

    return {
        "behavior_ok": exit_equal and stdout_equal,
        "phase": "compare",
        "seed_exit_code": seed_run.exit_code,
        "mutant_exit_code": mutant_run.exit_code,
        "exit_equal": exit_equal,
        "stdout_equal": stdout_equal,
        "seed_stdout": seed_run.stdout.strip()[:500],
        "mutant_stdout": mutant_run.stdout.strip()[:500],
    }


def _materialize_mr1_result(case: SeedCase, rng_seed: int) -> dict[str, object]:
    payload = {
        "mr": "MR1",
        "seed_id": case.seed_id,
        "rng_seed": rng_seed,
        "selected_pattern": "creal_seed_syn",
        "selected_site": None,
        "inserted_symbols": [],
        "attempt_count": 1,
        "validation_status": "compile_ok",
        "failure_reason": None,
        "failure_history": [],
    }
    case.mutation_meta_path.write_text(
        json.dumps(payload, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
    return {
        "mr": "MR1",
        "selected_pattern": "creal_seed_syn",
        "selected_site": None,
        "inserted_symbols": [],
        "mutant_path": str(case.mutant_path),
        "mutation_meta_path": str(case.mutation_meta_path),
        "seed_id": case.seed_id,
    }


def _write_compile_check(mutation_meta_path: Path, compile_check: dict[str, object]) -> None:
    payload = json.loads(mutation_meta_path.read_text(encoding="utf-8"))
    payload["compile_check"] = compile_check
    mutation_meta_path.write_text(
        json.dumps(payload, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )


def _update_mr1_behavior(mutation_meta_path: Path, behavior_check: dict[str, object]) -> None:
    """Record MR1 behavior equivalence check in mutation meta."""
    if not mutation_meta_path.exists():
        return
    payload = json.loads(mutation_meta_path.read_text(encoding="utf-8"))
    payload["behavior_check"] = behavior_check
    payload["validation_status"] = "behavior_ok" if behavior_check["behavior_ok"] else "behavior_mismatch"
    mutation_meta_path.write_text(
        json.dumps(payload, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )


if __name__ == "__main__":
    raise SystemExit(main())
