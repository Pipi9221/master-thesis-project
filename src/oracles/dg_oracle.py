from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path

from common.criteria import load_criteria_spec
from common.metadata import MutationMeta, load_mutation_meta
from common.runner import CommandRunner
from common.tool_paths import resolve_dg_clang, resolve_dg_lli, resolve_dg_llvm_link
from common.validation import CommandResult
from slicers.base import SliceRequest

from .base import OracleRequest, OracleResult, OracleStatus
from .dg_evidence import build_dg_evidence
from .judges import JudgeDecision, judge_retained_symbols, judge_set_equivalence, judge_value_equivalence
from .llm_judge import SubprocessLlmJudge
from .observation import (
    DG_OBSERVER_FUNCTION,
    build_value_comparisons,
    extract_observed_values,
    instrument_program_for_dg_observation,
)
from .set_extractors import extract_dg_instruction_set


@dataclass(frozen=True, slots=True)
class ProgramObservation:
    label: str
    instrumented_path: Path
    executable_path: Path
    compile_result: CommandResult
    run_result: CommandResult
    values: dict[str, str]

    def to_dict(self) -> dict[str, object]:
        return {
            "label": self.label,
            "instrumented_path": str(self.instrumented_path),
            "executable_path": str(self.executable_path),
            "compile_ok": self.compile_result.exit_code == 0,
            "compile_exit_code": self.compile_result.exit_code,
            "compile_stdout": self.compile_result.stdout,
            "compile_stderr": self.compile_result.stderr,
            "run_ok": self.run_result.exit_code >= 0,
            "run_exit_code": self.run_result.exit_code,
            "run_stdout": self.run_result.stdout,
            "run_stderr": self.run_result.stderr,
            "values": dict(self.values),
        }


class DGOracle:
    def __init__(
        self,
        *,
        adapter,
        runner: CommandRunner,
        compiler_binary: str | None = None,
        compiler_extra_args: tuple[str, ...] = ("-O0", "-Wall", "-Wextra"),
        include_dirs: tuple[str, ...] = (),
        link_args: tuple[str, ...] = (),
        lli_binary: str | None = None,
        llvm_link_binary: str | None = None,
        llm_judge: SubprocessLlmJudge | None = None,
    ) -> None:
        self._adapter = adapter
        self._runner = runner
        self._compiler_binary = compiler_binary if compiler_binary is not None else resolve_dg_clang()
        self._compiler_extra_args = compiler_extra_args
        self._include_dirs = include_dirs
        self._link_args = link_args
        self._lli_binary = lli_binary if lli_binary is not None else resolve_dg_lli()
        self._llvm_link_binary = llvm_link_binary if llvm_link_binary is not None else resolve_dg_llvm_link()
        self._llm_judge = llm_judge

    def run(self, request: OracleRequest) -> OracleResult:
        if request.mr == "MR1":
            return self._run_mr1(request)
        if request.mr in {"MR2", "MR3"}:
            return self._run_mr23(request)
        if request.mr == "MR4":
            return self._run_mr4(request)
        raise ValueError(f"unsupported MR for DG oracle: {request.mr}")

    def _run_mr1(self, request: OracleRequest) -> OracleResult:
        if request.mutant_path is None or request.mutation_meta_path is None:
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="missing_mutant_inputs",
                    judge_id="dg.mr1.ir_equivalence",
                    retained_symbols=(),
                    seed_slice=None,
                    mutant_slice=None,
                    summary="MR1 requires both mutant.c and mutation_meta.json.",
                ),
            )

        criteria = load_criteria_spec(request.criteria_path)
        meta = load_mutation_meta(request.mutation_meta_path)
        request.output_dir.mkdir(parents=True, exist_ok=True)

        # Slice seed and mutant directly at the IR level — no observer
        # instrumentation, no runtime execution.  DG slices LLVM IR, not C.
        seed_slice = self._adapter.slice(
            SliceRequest(
                tool="dg",
                input_path=request.seed_path,
                output_path=request.output_dir / "seed_sliced.ll",
                variables=criteria.variables,
                program_point=criteria.program_point,
            )
        )
        mutant_slice = self._adapter.slice(
            SliceRequest(
                tool="dg",
                input_path=request.mutant_path,
                output_path=request.output_dir / "mutant_sliced.ll",
                variables=criteria.variables,
                program_point=criteria.program_point,
            )
        )

        evidence = build_dg_evidence(
            criteria=criteria,
            meta=meta,
            seed_slice=seed_slice,
            mutant_slice=mutant_slice,
            retained_symbols=(),
        )

        if not seed_slice.slice_ok:
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="seed_slice_failed",
                    judge_id="dg.mr1.ir_equivalence",
                    retained_symbols=(),
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    evidence=evidence,
                    summary="Seed slicing failed.",
                ),
            )
        if not mutant_slice.slice_ok:
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="mutant_slice_failed",
                    judge_id="dg.mr1.ir_equivalence",
                    retained_symbols=(),
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    evidence=evidence,
                    summary="Mutant slicing failed.",
                ),
            )

        # Deterministic prefilter: check that criterion symbols are retained in
        # both slices.  If both retain the criterion variable, that is a
        # tentative PASS; otherwise VIOLATION.
        retained_decision = judge_retained_symbols(meta, mutant_slice, tool="dg", mr="MR1")
        evidence["retained_symbols_auxiliary"] = list(retained_decision.retained_symbols)

        criterion_retained_in_seed = _symbol_retained_in_slice(
            criteria.variables, seed_slice
        )
        criterion_retained_in_mutant = _symbol_retained_in_slice(
            criteria.variables, mutant_slice
        )
        deterministic_pf = JudgeDecision(
            status=OracleStatus.PASS
            if (criterion_retained_in_seed and criterion_retained_in_mutant)
            else OracleStatus.VIOLATION,
            reason="criterion_retained"
            if (criterion_retained_in_seed and criterion_retained_in_mutant)
            else "criterion_lost_in_slice",
            judge_id="dg.mr1.ir_equivalence",
            summary=(
                "Criterion variable retained in both slices"
                if (criterion_retained_in_seed and criterion_retained_in_mutant)
                else "Criterion variable missing from one or both slices"
            ),
            retained_symbols=retained_decision.retained_symbols,
        )

        if self._llm_judge is None:
            evidence["llm_judge"] = {"mode": "off"}
            decision = deterministic_pf
        elif deterministic_pf.status != OracleStatus.PASS:
            evidence["llm_judge"] = {
                "mode": "skipped",
                "reason": "deterministic_prefilter_decisive",
                "deterministic_status": deterministic_pf.status.value,
            }
            decision = deterministic_pf
        else:
            llm_result = self._llm_judge.judge_dg(
                request=request,
                criteria=criteria,
                meta=meta,
                evidence=evidence,
                deterministic_decision=deterministic_pf,
            )
            evidence["llm_judge"] = llm_result.to_dict()
            decision = llm_result.decision

        return self._finish(
            request,
            OracleResult(
                request=request,
                status=decision.status,
                violation=decision.violation,
                reason=decision.reason,
                judge_id=decision.judge_id,
                retained_symbols=retained_decision.retained_symbols,
                seed_slice=seed_slice,
                mutant_slice=mutant_slice,
                value_comparisons=None,
                observations=None,
                evidence=evidence,
                summary=decision.summary,
            ),
        )

    def _run_mr23(self, request: OracleRequest) -> OracleResult:
        if request.mutant_path is None or request.mutation_meta_path is None:
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="missing_mutant_inputs",
                    judge_id=f"dg.{request.mr.lower()}.retained_symbols",
                    retained_symbols=(),
                    seed_slice=None,
                    mutant_slice=None,
                    summary=f"{request.mr} requires both mutant.c and mutation_meta.json.",
                ),
            )

        criteria = load_criteria_spec(request.criteria_path)
        meta = load_mutation_meta(request.mutation_meta_path)
        request.output_dir.mkdir(parents=True, exist_ok=True)
        seed_slice = self._adapter.slice(
            SliceRequest(
                tool="dg",
                input_path=request.seed_path,
                output_path=request.output_dir / "seed_sliced.ll",
                variables=criteria.variables,
                program_point=criteria.program_point,
            )
        )
        mutant_slice = self._adapter.slice(
            SliceRequest(
                tool="dg",
                input_path=request.mutant_path,
                output_path=request.output_dir / "mutant_sliced.ll",
                variables=criteria.variables,
                program_point=criteria.program_point,
            )
        )
        evidence = build_dg_evidence(
            criteria=criteria,
            meta=meta,
            seed_slice=seed_slice,
            mutant_slice=mutant_slice,
            retained_symbols=(),
        )

        if not seed_slice.slice_ok:
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="seed_slice_failed",
                    judge_id=f"dg.{request.mr.lower()}.retained_symbols",
                    retained_symbols=(),
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    evidence=evidence,
                    summary="Seed slicing failed before retained-symbol judgment.",
                ),
            )
        if not mutant_slice.slice_ok:
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="mutant_slice_failed",
                    judge_id=f"dg.{request.mr.lower()}.retained_symbols",
                    retained_symbols=(),
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    evidence=evidence,
                    summary="Mutant slicing failed before retained-symbol judgment.",
                ),
            )

        decision = judge_retained_symbols(meta, mutant_slice, tool="dg", mr=request.mr)
        evidence = build_dg_evidence(
            criteria=criteria,
            meta=meta,
            seed_slice=seed_slice,
            mutant_slice=mutant_slice,
            retained_symbols=decision.retained_symbols,
        )
        if self._llm_judge is None:
            evidence["llm_judge"] = {"mode": "off"}
        elif decision.status != OracleStatus.PASS:
            evidence["llm_judge"] = {
                "mode": "skipped",
                "reason": "deterministic_prefilter_decisive",
                "deterministic_status": decision.status.value,
            }
        else:
            llm_result = self._llm_judge.judge_dg(
                request=request,
                criteria=criteria,
                meta=meta,
                evidence=evidence,
                deterministic_decision=decision,
            )
            evidence["llm_judge"] = llm_result.to_dict()
            decision = llm_result.decision
        return self._finish(
            request,
            OracleResult(
                request=request,
                status=decision.status,
                violation=decision.violation,
                reason=decision.reason,
                judge_id=decision.judge_id,
                retained_symbols=decision.retained_symbols,
                seed_slice=seed_slice,
                mutant_slice=mutant_slice,
                evidence=evidence,
                summary=decision.summary,
            ),
        )

    def _run_mr4(self, request: OracleRequest) -> OracleResult:
        criteria = load_criteria_spec(request.criteria_path)
        if len(criteria.variables) < 2:
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="insufficient_variables",
                    judge_id="dg.mr4.set_equivalence",
                    retained_symbols=(),
                    seed_slice=None,
                    mutant_slice=None,
                    summary="MR4 requires at least two criterion variables.",
                ),
            )

        request.output_dir.mkdir(parents=True, exist_ok=True)
        program_results = [
            self._run_mr4_for_program(
                label="seed",
                source_path=request.seed_path,
                variables=criteria.variables,
                program_point=criteria.program_point,
                output_dir=request.output_dir,
            )
        ]
        if request.mutant_path is not None:
            program_results.append(
                self._run_mr4_for_program(
                    label="mutant",
                    source_path=request.mutant_path,
                    variables=criteria.variables,
                    program_point=criteria.program_point,
                    output_dir=request.output_dir,
                )
            )

        first_error = next(
            (item for item in program_results if item["decision"].status == OracleStatus.ERROR),
            None,
        )
        if first_error is not None:
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason=first_error["decision"].reason,
                    judge_id=first_error["decision"].judge_id,
                    retained_symbols=(),
                    seed_slice=first_error["multi_outcome"] if first_error["label"] == "seed" else None,
                    mutant_slice=first_error["multi_outcome"] if first_error["label"] == "mutant" else None,
                    evidence={
                        "kind": "dg_mr4_evidence_v1",
                        "programs": {item["label"]: item["evidence"] for item in program_results},
                    },
                    summary=first_error["decision"].summary,
                ),
            )

        evidence = {
            "kind": "dg_mr4_evidence_v1",
            "programs": {item["label"]: item["evidence"] for item in program_results},
        }

        first_violation = next((item for item in program_results if item["decision"].violation), None)
        if first_violation is not None:
            if self._llm_judge is not None:
                evidence["llm_judge"] = {
                    "mode": "skipped",
                    "reason": "deterministic_prefilter_decisive",
                    "deterministic_status": "VIOLATION",
                }
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.VIOLATION,
                    violation=True,
                    reason=first_violation["decision"].reason,
                    judge_id=first_violation["decision"].judge_id,
                    retained_symbols=(),
                    seed_slice=next(item["multi_outcome"] for item in program_results if item["label"] == "seed"),
                    mutant_slice=(
                        next(item["multi_outcome"] for item in program_results if item["label"] == "mutant")
                        if any(item["label"] == "mutant" for item in program_results)
                        else None
                    ),
                    evidence=evidence,
                    summary=first_violation["decision"].summary,
                ),
            )

        reason = "set_match"
        judge_id = "dg.mr4.set_equivalence"
        summary = "Union(single-variable slices) matches multi-variable slice."

        if self._llm_judge is None:
            evidence["llm_judge"] = {"mode": "off"}
        else:
            det_decision = JudgeDecision(
                status=OracleStatus.PASS,
                reason=reason,
                judge_id=judge_id,
                summary=summary,
            )
            llm_result = self._llm_judge.judge_dg_mr4(
                request=request,
                evidence=evidence,
                deterministic_decision=det_decision,
            )
            evidence["llm_judge"] = llm_result.to_dict()
            reason = llm_result.decision.reason
            judge_id = llm_result.decision.judge_id
            summary = llm_result.decision.summary

        return self._finish(
            request,
            OracleResult(
                request=request,
                status=OracleStatus.PASS,
                violation=False,
                reason=reason,
                judge_id=judge_id,
                retained_symbols=(),
                seed_slice=next(item["multi_outcome"] for item in program_results if item["label"] == "seed"),
                mutant_slice=(
                    next(item["multi_outcome"] for item in program_results if item["label"] == "mutant")
                    if any(item["label"] == "mutant" for item in program_results)
                    else None
                ),
                evidence=evidence,
                summary=summary,
            ),
        )

    def _run_mr4_for_program(
        self,
        *,
        label: str,
        source_path: Path,
        variables: tuple[str, ...],
        program_point: str | None,
        output_dir: Path,
    ) -> dict[str, object]:
        single_outcomes = {}
        single_sets = {}
        for variable in variables:
            outcome = self._adapter.slice(
                SliceRequest(
                    tool="dg",
                    input_path=source_path,
                    output_path=output_dir / f"{label}_{variable}_sliced.ll",
                    variables=(variable,),
                    program_point=program_point,
                )
            )
            single_outcomes[variable] = outcome
            if outcome.slice_ok:
                single_sets[variable] = extract_dg_instruction_set(outcome.output_path)

        multi_outcome = self._adapter.slice(
            SliceRequest(
                tool="dg",
                input_path=source_path,
                output_path=output_dir / f"{label}_multi_sliced.ll",
                variables=variables,
                program_point=program_point,
            )
        )
        if not all(outcome.slice_ok for outcome in single_outcomes.values()) or not multi_outcome.slice_ok:
            return {
                "label": label,
                "decision": JudgeDecision(
                    status=OracleStatus.ERROR,
                    reason="slice_failed",
                    judge_id="dg.mr4.set_equivalence",
                    summary=f"Slicing failed for MR4 {label}.",
                ),
                "multi_outcome": multi_outcome,
                "evidence": {
                    "single_slices": {
                        variable: outcome.to_dict() for variable, outcome in single_outcomes.items()
                    },
                    "multi_slice": multi_outcome.to_dict(),
                },
            }

        single_union = set().union(*single_sets.values())
        multi_set = extract_dg_instruction_set(multi_outcome.output_path)
        decision = judge_set_equivalence(
            single_union=single_union,
            multi_set=multi_set,
            tool="dg",
            label=label,
        )
        return {
            "label": label,
            "decision": decision,
            "multi_outcome": multi_outcome,
            "evidence": {
                "single_slices": {
                    variable: outcome.to_dict() for variable, outcome in single_outcomes.items()
                },
                "single_set_sizes": {
                    variable: len(statement_set) for variable, statement_set in single_sets.items()
                },
                "single_union_size": len(single_union),
                "multi_slice": multi_outcome.to_dict(),
                "multi_set_size": len(multi_set),
                "diff": decision.details,
            },
        }

    def _observe_native_program(
        self,
        *,
        label: str,
        source_path: Path,
        output_dir: Path,
        variables: tuple[str, ...],
    ) -> ProgramObservation:
        executable_path = output_dir / label
        compile_command = self._build_compile_command(
            source_path=source_path,
            executable_path=executable_path,
        )
        compile_result = self._runner.run(compile_command, timeout=120)
        if compile_result.exit_code != 0:
            return ProgramObservation(
                label=label,
                instrumented_path=source_path,
                executable_path=executable_path,
                compile_result=compile_result,
                run_result=CommandResult(exit_code=-1, stdout="", stderr="compile_failed"),
                values={},
            )
        run_result = self._runner.run([str(executable_path)], timeout=30)
        return ProgramObservation(
            label=label,
            instrumented_path=source_path,
            executable_path=executable_path,
            compile_result=compile_result,
            run_result=run_result,
            values=extract_observed_values(run_result.stdout, variables=variables),
        )

    def _observe_sliced_program(
        self,
        *,
        label: str,
        source_path: Path,
        slice_outcome,
        variables: tuple[str, ...],
    ) -> ProgramObservation:
        sliced_bitcode = None if slice_outcome.artifacts is None else slice_outcome.artifacts.get("sliced_bitcode")
        if sliced_bitcode is None:
            return ProgramObservation(
                label=label,
                instrumented_path=source_path,
                executable_path=Path("<missing-sliced-bitcode>"),
                compile_result=CommandResult(exit_code=-1, stdout="", stderr="missing_sliced_bitcode"),
                run_result=CommandResult(exit_code=-1, stdout="", stderr="missing_sliced_bitcode"),
                values={},
            )
        sliced_bitcode_path = Path(sliced_bitcode)
        if not sliced_bitcode_path.exists():
            return ProgramObservation(
                label=label,
                instrumented_path=source_path,
                executable_path=sliced_bitcode_path,
                compile_result=CommandResult(exit_code=-1, stdout="", stderr="missing_sliced_bitcode"),
                run_result=CommandResult(exit_code=-1, stdout="", stderr="missing_sliced_bitcode"),
                values={},
            )
        helper_source_path = sliced_bitcode_path.with_name(f"{label}_observer_helper.c")
        helper_bitcode_path = sliced_bitcode_path.with_name(f"{label}_observer_helper.bc")
        linked_bitcode_path = sliced_bitcode_path.with_name(f"{label}_runnable.bc")
        helper_source_path.write_text(
            (
                "#include <stdio.h>\n"
                f"void {DG_OBSERVER_FUNCTION}(const char *name, long double value) {{\n"
                '    printf("%s: %.17Lg\\n", name, value);\n'
                "}\n"
            ),
            encoding="utf-8",
        )
        helper_compile_command = [
            self._compiler_binary,
            "-O0",
            "-emit-llvm",
            "-c",
            str(helper_source_path),
            "-o",
            str(helper_bitcode_path),
        ]
        helper_compile_result = self._runner.run(helper_compile_command, timeout=60)
        if helper_compile_result.exit_code != 0:
            return ProgramObservation(
                label=label,
                instrumented_path=source_path,
                executable_path=linked_bitcode_path,
                compile_result=helper_compile_result,
                run_result=CommandResult(exit_code=-1, stdout="", stderr="helper_compile_failed"),
                values={},
            )
        link_command = [
            self._llvm_link_binary,
            str(sliced_bitcode_path),
            str(helper_bitcode_path),
            "-o",
            str(linked_bitcode_path),
        ]
        link_result = self._runner.run(link_command, timeout=60)
        if link_result.exit_code != 0:
            return ProgramObservation(
                label=label,
                instrumented_path=source_path,
                executable_path=linked_bitcode_path,
                compile_result=link_result,
                run_result=CommandResult(exit_code=-1, stdout="", stderr="llvm_link_failed"),
                values={},
            )
        run_command = [self._lli_binary, str(linked_bitcode_path)]
        run_result = self._runner.run(run_command, timeout=30)
        return ProgramObservation(
            label=label,
            instrumented_path=source_path,
            executable_path=linked_bitcode_path,
            compile_result=link_result,
            run_result=run_result,
            values=extract_observed_values(run_result.stdout, variables=variables),
        )

    def _build_compile_command(self, *, source_path: Path, executable_path: Path) -> list[str]:
        command = [self._compiler_binary, *self._compiler_extra_args]
        for include_dir in self._include_dirs:
            command.extend(["-I", include_dir])
        command.extend(["-o", str(executable_path), str(source_path), *self._link_args])
        return command

    def _finish(self, request: OracleRequest, result: OracleResult) -> OracleResult:
        request.output_dir.mkdir(parents=True, exist_ok=True)
        (request.output_dir / "oracle_result.json").write_text(
            json.dumps(result.to_dict(), indent=2, sort_keys=True) + "\n",
            encoding="utf-8",
        )
        return result


def _first_failed_observation(
    observations: dict[str, ProgramObservation],
) -> str | None:
    for label, observation in observations.items():
        if observation.compile_result.exit_code != 0 or observation.run_result.exit_code < 0:
            return label
    return None


def _symbol_retained_in_slice(
    symbols: tuple[str, ...],
    slice_outcome,
) -> bool:
    """Check whether any of *symbols* appear in the sliced IR text."""
    if not slice_outcome.output_path.exists():
        return False
    text = slice_outcome.output_path.read_text(encoding="utf-8", errors="ignore")
    for symbol in symbols:
        if symbol in text:
            return True
    return False
