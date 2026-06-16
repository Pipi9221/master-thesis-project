from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path

from common.criteria import load_criteria_spec
from common.metadata import MutationMeta
from common.runner import CommandRunner
from common.validation import CommandResult
from slicers.base import SliceRequest

from .base import OracleRequest, OracleResult, OracleStatus
from .judges import judge_retained_symbols, judge_value_equivalence
from .observation import (
    build_value_comparisons,
    extract_observed_values,
    instrument_program_for_observation,
)


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


class FramaValueOracle:
    def __init__(
        self,
        *,
        adapter,
        runner: CommandRunner,
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

    def run(self, request: OracleRequest, mutation_meta: MutationMeta | None = None) -> OracleResult:
        def finish(result: OracleResult) -> OracleResult:
            request.output_dir.mkdir(parents=True, exist_ok=True)
            (request.output_dir / "oracle_result.json").write_text(
                json.dumps(result.to_dict(), indent=2, sort_keys=True) + "\n",
                encoding="utf-8",
            )
            return result

        if request.mutant_path is None or request.mutation_meta_path is None:
            return finish(
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="missing_mutant_inputs",
                    judge_id="frama.mr1.value_equivalence",
                    retained_symbols=(),
                    seed_slice=None,
                    mutant_slice=None,
                    summary="MR1 requires both mutant.c and mutation_meta.json.",
                )
            )

        criteria = load_criteria_spec(request.criteria_path)
        meta = mutation_meta
        if meta is None:
            from common.metadata import load_mutation_meta

            meta = load_mutation_meta(request.mutation_meta_path)

        request.output_dir.mkdir(parents=True, exist_ok=True)
        seed_observed_source = request.output_dir / "seed_observed.c"
        mutant_observed_source = request.output_dir / "mutant_observed.c"
        instrument_program_for_observation(
            source_path=request.seed_path,
            output_path=seed_observed_source,
            variables=criteria.variables,
        )
        instrument_program_for_observation(
            source_path=request.mutant_path,
            output_path=mutant_observed_source,
            variables=criteria.variables,
        )

        seed_slice = self._adapter.slice(
            SliceRequest(
                tool=request.tool,
                input_path=seed_observed_source,
                output_path=request.output_dir / "seed_sliced.c",
                variables=criteria.variables,
                program_point=criteria.program_point,
            )
        )
        mutant_slice = self._adapter.slice(
            SliceRequest(
                tool=request.tool,
                input_path=mutant_observed_source,
                output_path=request.output_dir / "mutant_sliced.c",
                variables=criteria.variables,
                program_point=criteria.program_point,
            )
        )
        if not seed_slice.slice_ok:
            return finish(
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="seed_slice_failed",
                    judge_id="frama.mr1.value_equivalence",
                    retained_symbols=(),
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    summary="Seed slicing failed before MR1 value comparison.",
                )
            )
        if not mutant_slice.slice_ok:
            return finish(
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason="mutant_slice_failed",
                    judge_id="frama.mr1.value_equivalence",
                    retained_symbols=(),
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    summary="Mutant slicing failed before MR1 value comparison.",
                )
            )

        seed_observation = self._observe_program(
            label="seed_full",
            source_path=seed_observed_source,
            output_dir=request.output_dir,
            variables=criteria.variables,
            instrument=False,
        )
        mutant_observation = self._observe_program(
            label="mutant_full",
            source_path=mutant_observed_source,
            output_dir=request.output_dir,
            variables=criteria.variables,
            instrument=False,
        )
        seed_slice_observation = self._observe_program(
            label="seed_slice",
            source_path=seed_slice.output_path,
            output_dir=request.output_dir,
            variables=criteria.variables,
            instrument=False,
        )
        mutant_slice_observation = self._observe_program(
            label="mutant_slice",
            source_path=mutant_slice.output_path,
            output_dir=request.output_dir,
            variables=criteria.variables,
            instrument=False,
        )

        observations = {
            "seed_full": seed_observation.to_dict(),
            "mutant_full": mutant_observation.to_dict(),
            "seed_slice": seed_slice_observation.to_dict(),
            "mutant_slice": mutant_slice_observation.to_dict(),
        }
        failed_label = _first_failed_observation(
            {
                "seed_full": seed_observation,
                "mutant_full": mutant_observation,
                "seed_slice": seed_slice_observation,
                "mutant_slice": mutant_slice_observation,
            }
        )
        if failed_label is not None:
            return finish(
                OracleResult(
                    request=request,
                    status=OracleStatus.ERROR,
                    violation=False,
                    reason=f"{failed_label}_execution_failed",
                    judge_id="frama.mr1.value_equivalence",
                    retained_symbols=(),
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    observations=observations,
                    summary=f"Execution failed while collecting observations for {failed_label}.",
                )
            )

        value_comparisons = build_value_comparisons(
            variables=criteria.variables,
            original_values=seed_observation.values,
            mutant_values=mutant_observation.values,
            original_slice_values=seed_slice_observation.values,
            mutant_slice_values=mutant_slice_observation.values,
        )
        value_decision = judge_value_equivalence(
            value_comparisons,
            tool="frama",
            mr="MR1",
        )
        if value_decision.status == OracleStatus.ERROR:
            return finish(
                OracleResult(
                    request=request,
                    status=value_decision.status,
                    violation=False,
                    reason=value_decision.reason,
                    judge_id=value_decision.judge_id,
                    retained_symbols=(),
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    value_comparisons=value_comparisons,
                    observations=observations,
                    summary=value_decision.summary,
                )
            )
        if value_decision.violation:
            retained = judge_retained_symbols(
                meta,
                mutant_slice,
                tool="frama",
                mr="MR1",
            ).retained_symbols
            return finish(
                OracleResult(
                    request=request,
                    status=value_decision.status,
                    violation=True,
                    reason=value_decision.reason,
                    judge_id=value_decision.judge_id,
                    retained_symbols=retained,
                    seed_slice=seed_slice,
                    mutant_slice=mutant_slice,
                    value_comparisons=value_comparisons,
                    observations=observations,
                    summary=value_decision.summary,
                )
            )

        retained_decision = judge_retained_symbols(
            meta,
            mutant_slice,
            tool="frama",
            mr="MR1",
        )
        return finish(
            OracleResult(
                request=request,
                status=OracleStatus.PASS,
                violation=False,
                reason=value_decision.reason,
                judge_id=value_decision.judge_id,
                retained_symbols=retained_decision.retained_symbols,
                seed_slice=seed_slice,
                mutant_slice=mutant_slice,
                value_comparisons=value_comparisons,
                observations=observations,
                summary=value_decision.summary,
            )
        )

    def _observe_program(
        self,
        *,
        label: str,
        source_path: Path,
        output_dir: Path,
        variables: tuple[str, ...],
        instrument: bool = True,
    ) -> ProgramObservation:
        instrumented_path = output_dir / f"{label}_observed.c"
        executable_path = output_dir / label
        if instrument:
            instrument_program_for_observation(
                source_path=source_path,
                output_path=instrumented_path,
                variables=variables,
            )
        else:
            instrumented_path = source_path
        compile_command = self._build_compile_command(
            source_path=instrumented_path,
            executable_path=executable_path,
        )
        compile_result = self._runner.run(compile_command)
        if compile_result.exit_code != 0:
            return ProgramObservation(
                label=label,
                instrumented_path=instrumented_path,
                executable_path=executable_path,
                compile_result=compile_result,
                run_result=CommandResult(exit_code=-1, stdout="", stderr="compile_failed"),
                values={},
            )
        run_result = self._runner.run([str(executable_path)])
        return ProgramObservation(
            label=label,
            instrumented_path=instrumented_path,
            executable_path=executable_path,
            compile_result=compile_result,
            run_result=run_result,
            values=extract_observed_values(run_result.stdout, variables=variables),
        )

    def _build_compile_command(self, *, source_path: Path, executable_path: Path) -> list[str]:
        command = [self._compiler_binary, *self._compiler_extra_args]
        for include_dir in self._include_dirs:
            command.extend(["-I", include_dir])
        command.extend(["-o", str(executable_path), str(source_path), *self._link_args])
        return command


def _first_failed_observation(
    observations: dict[str, ProgramObservation],
) -> str | None:
    for label, observation in observations.items():
        if observation.compile_result.exit_code != 0 or observation.run_result.exit_code < 0:
            return label
    return None
