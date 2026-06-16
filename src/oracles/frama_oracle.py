from __future__ import annotations

import json
from pathlib import Path

from common.criteria import load_criteria_spec
from common.metadata import load_mutation_meta
from slicers.base import SliceRequest

from .base import OracleRequest, OracleResult, OracleStatus
from .frama import FramaValueOracle
from .judges import JudgeDecision, judge_retained_symbols, judge_set_equivalence
from .set_extractors import extract_frama_statement_set


class FramaOracle:
    def __init__(
        self,
        *,
        adapter,
        runner,
        compiler_binary: str = "gcc",
        compiler_extra_args: tuple[str, ...] = ("-Wall", "-Wextra"),
        include_dirs: tuple[str, ...] = (),
        link_args: tuple[str, ...] = ("-lm",),
    ) -> None:
        self._adapter = adapter
        self._runner = runner
        self._compiler_binary = compiler_binary
        self._compiler_extra_args = compiler_extra_args
        self._include_dirs = include_dirs
        self._link_args = link_args

    def run(self, request: OracleRequest) -> OracleResult:
        if request.mr == "MR1":
            return FramaValueOracle(
                adapter=self._adapter,
                runner=self._runner,
                compiler_binary=self._compiler_binary,
                compiler_extra_args=self._compiler_extra_args,
                include_dirs=self._include_dirs,
                link_args=self._link_args,
            ).run(request)
        if request.mr in {"MR2", "MR3"}:
            return self._run_mr23(request)
        if request.mr == "MR4":
            return self._run_mr4(request)
        raise ValueError(f"unsupported MR for Frama oracle: {request.mr}")

    def _run_mr23(self, request: OracleRequest) -> OracleResult:
        if request.mutant_path is None or request.mutation_meta_path is None:
            return self._finish(
                request,
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="missing_mutant_inputs",
                    judge_id=f"frama.{request.mr.lower()}.retained_symbols",
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
                tool="frama",
                input_path=request.seed_path,
                output_path=request.output_dir / "seed_sliced.c",
                variables=criteria.variables,
                program_point=criteria.program_point,
            )
        )
        mutant_slice = self._adapter.slice(
            SliceRequest(
                tool="frama",
                input_path=request.mutant_path,
                output_path=request.output_dir / "mutant_sliced.c",
                variables=criteria.variables,
                program_point=criteria.program_point,
            )
        )
        evidence = self._build_mr23_evidence(
            criteria=criteria,
            seed_slice=seed_slice,
            mutant_slice=mutant_slice,
            inserted_symbols=meta.inserted_symbols,
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
                    judge_id=f"frama.{request.mr.lower()}.retained_symbols",
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
                    judge_id=f"frama.{request.mr.lower()}.retained_symbols",
                    retained_symbols=(),
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    evidence=evidence,
                    summary="Mutant slicing failed before retained-symbol judgment.",
                ),
            )

        decision = judge_retained_symbols(meta, mutant_slice, tool="frama", mr=request.mr)
        evidence = self._build_mr23_evidence(
            criteria=criteria,
            seed_slice=seed_slice,
            mutant_slice=mutant_slice,
            inserted_symbols=meta.inserted_symbols,
            retained_symbols=decision.retained_symbols,
        )
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
                    judge_id="frama.mr4.set_equivalence",
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
                output_dir=request.output_dir,
            )
        ]
        if request.mutant_path is not None:
            program_results.append(
                self._run_mr4_for_program(
                    label="mutant",
                    source_path=request.mutant_path,
                    variables=criteria.variables,
                    output_dir=request.output_dir,
                )
            )

        first_error = next((item for item in program_results if item["decision"].status == OracleStatus.ERROR), None)
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
                        "kind": "frama_mr4_evidence_v1",
                        "programs": {item["label"]: item["evidence"] for item in program_results},
                    },
                    summary=first_error["decision"].summary,
                ),
            )

        first_violation = next((item for item in program_results if item["decision"].violation), None)
        if first_violation is not None:
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
                    evidence={
                        "kind": "frama_mr4_evidence_v1",
                        "programs": {item["label"]: item["evidence"] for item in program_results},
                    },
                    summary=first_violation["decision"].summary,
                ),
            )

        return self._finish(
            request,
            OracleResult(
                request=request,
                status=OracleStatus.PASS,
                violation=False,
                reason="set_match",
                judge_id="frama.mr4.set_equivalence",
                retained_symbols=(),
                seed_slice=next(item["multi_outcome"] for item in program_results if item["label"] == "seed"),
                mutant_slice=(
                    next(item["multi_outcome"] for item in program_results if item["label"] == "mutant")
                    if any(item["label"] == "mutant" for item in program_results)
                    else None
                ),
                evidence={
                    "kind": "frama_mr4_evidence_v1",
                    "programs": {item["label"]: item["evidence"] for item in program_results},
                },
                summary="Union(single-variable slices) matches multi-variable slice.",
            ),
        )

    def _run_mr4_for_program(
        self,
        *,
        label: str,
        source_path: Path,
        variables: tuple[str, ...],
        output_dir: Path,
    ) -> dict[str, object]:
        single_outcomes = {}
        single_sets = {}
        for variable in variables:
            outcome = self._adapter.slice(
                SliceRequest(
                    tool="frama",
                    input_path=source_path,
                    output_path=output_dir / f"{label}_{variable}_sliced.c",
                    variables=(variable,),
                )
            )
            single_outcomes[variable] = outcome
            if outcome.slice_ok:
                single_sets[variable] = extract_frama_statement_set(outcome.output_path)

        multi_outcome = self._adapter.slice(
            SliceRequest(
                tool="frama",
                input_path=source_path,
                output_path=output_dir / f"{label}_multi_sliced.c",
                variables=variables,
            )
        )
        if not all(outcome.slice_ok for outcome in single_outcomes.values()) or not multi_outcome.slice_ok:
            return {
                "label": label,
                "decision": JudgeDecision(
                    status=OracleStatus.ERROR,
                    reason="slice_failed",
                    judge_id="frama.mr4.set_equivalence",
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
        multi_set = extract_frama_statement_set(multi_outcome.output_path)
        decision = judge_set_equivalence(
            single_union=single_union,
            multi_set=multi_set,
            tool="frama",
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

    def _build_mr23_evidence(
        self,
        *,
        criteria,
        seed_slice,
        mutant_slice,
        inserted_symbols: tuple[str, ...],
        retained_symbols: tuple[str, ...],
    ) -> dict[str, object]:
        return {
            "kind": "frama_mr23_evidence_v1",
            "criterion_variables": list(criteria.variables),
            "program_point": criteria.program_point,
            "inserted_symbols": list(inserted_symbols),
            "retained_symbols": list(retained_symbols),
            "seed": self._collect_frama_slice_evidence(seed_slice, (*criteria.variables, *inserted_symbols)),
            "mutant": self._collect_frama_slice_evidence(mutant_slice, (*criteria.variables, *inserted_symbols)),
        }

    def _collect_frama_slice_evidence(self, slice_outcome, tracked_symbols: tuple[str, ...]) -> dict[str, object] | None:
        if slice_outcome is None:
            return None
        artifact_text = slice_outcome.read_artifact_text()
        return {
            "slice_ok": slice_outcome.slice_ok,
            "failure_reason": slice_outcome.failure_reason,
            "command": list(slice_outcome.command),
            "output_path": str(slice_outcome.output_path),
            "hits": {
                symbol: {
                    "count": artifact_text.count(symbol),
                }
                for symbol in tracked_symbols
                if symbol and symbol in artifact_text
            },
            "line_count": len(artifact_text.splitlines()),
        }

    def _finish(self, request: OracleRequest, result: OracleResult) -> OracleResult:
        request.output_dir.mkdir(parents=True, exist_ok=True)
        (request.output_dir / "oracle_result.json").write_text(
            json.dumps(result.to_dict(), indent=2, sort_keys=True) + "\n",
            encoding="utf-8",
        )
        return result
