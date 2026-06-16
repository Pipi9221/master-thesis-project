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
    SeedCase,
    resolve_default_creal_script,
    resolve_default_csmith_home,
)
from seeds.criteria import choose_criterion_variables, write_criteria_file
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
        elif config.mr in {"MR2", "MR3"}:
            request = MutationRequest(
                mr=config.mr,
                seed_path=case.seed_path,
                criteria_path=case.criteria_path,
                rng_seed=rng_seed,
                output_dir=case.case_dir,
            )
            result = runner.run(backend.build_mutate_command(request))
            if result.exit_code != 0:
                raise SystemExit(
                    f"mutate failed for {case.seed_id}: {result.stderr.strip()}"
                )
            mutate_result = json.loads(result.stdout)
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
    parser.add_argument("--seed-source", choices=("csmith", "llm_files", "creal"), required=True)
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
    if config.seed_dir is None:
        raise SystemExit("--seed-dir is required for llm_files")
    return LLMFileSeedSource(seed_dir=Path(config.seed_dir))


def _prepare_case(case: SeedCase, mr: str) -> None:
    source = case.seed_path.read_text(encoding="utf-8")
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


def _materialize_mr1_result(case: SeedCase, rng_seed: int) -> dict[str, object]:
    payload = {
        "mr": "MR1",
        "seed_id": case.seed_id,
        "rng_seed": rng_seed,
        "selected_pattern": "creal_seed_syn",
        "selected_site": None,
        "inserted_symbols": [],
        "attempt_count": 1,
        "validation_status": "not_run",
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


if __name__ == "__main__":
    raise SystemExit(main())
