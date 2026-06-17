from __future__ import annotations

import json
import shlex
from dataclasses import dataclass
from pathlib import Path

from common.criteria import CriteriaSpec
from common.metadata import MutationMeta
from common.runner import CommandRunner

from seeds.llm_prompts import build_judge_prompt

from .base import OracleRequest, OracleStatus
from .judges import JudgeDecision


@dataclass(frozen=True, slots=True)
class LlmJudgeConfig:
    mode: str
    command_template: tuple[str, ...]
    prompt_version: str = "v1"


@dataclass(frozen=True, slots=True)
class LlmJudgeResult:
    mode: str
    decision: JudgeDecision
    command: tuple[str, ...] | None
    bundle_path: Path
    prompt_path: Path
    stdout: str
    stderr: str
    parsed_output: dict[str, object] | None

    def to_dict(self) -> dict[str, object]:
        return {
            "mode": self.mode,
            "judge_id": self.decision.judge_id,
            "status": self.decision.status.value,
            "reason": self.decision.reason,
            "summary": self.decision.summary,
            "details": self.decision.details,
            "command": None if self.command is None else list(self.command),
            "bundle_path": str(self.bundle_path),
            "prompt_path": str(self.prompt_path),
            "stdout": self.stdout,
            "stderr": self.stderr,
            "parsed_output": self.parsed_output,
        }


class SubprocessLlmJudge:
    def __init__(self, *, runner: CommandRunner, config: LlmJudgeConfig) -> None:
        self._runner = runner
        self._config = config

    def judge_dg(
        self,
        *,
        request: OracleRequest,
        criteria: CriteriaSpec,
        meta: MutationMeta,
        evidence: dict[str, object],
        deterministic_decision: JudgeDecision,
    ) -> LlmJudgeResult:
        output_dir = request.output_dir / "llm_judge"
        output_dir.mkdir(parents=True, exist_ok=True)
        bundle_path = output_dir / "bundle.json"
        prompt_path = output_dir / "prompt.txt"
        bundle = _build_dg_bundle(
            request=request,
            criteria=criteria,
            meta=meta,
            evidence=evidence,
            deterministic_decision=deterministic_decision,
            prompt_version=self._config.prompt_version,
        )
        prompt = build_judge_prompt(request.mr)
        bundle_path.write_text(
            json.dumps(bundle, indent=2, sort_keys=True) + "\n",
            encoding="utf-8",
        )
        prompt_path.write_text(prompt, encoding="utf-8")

        if not self._config.command_template:
            return LlmJudgeResult(
                mode=self._config.mode,
                decision=JudgeDecision(
                    status=OracleStatus.ERROR,
                    reason="missing_llm_judge_command",
                    judge_id=f"dg.{request.mr.lower()}.llm_judge",
                    summary="LLM judge mode was enabled, but no command template was configured.",
                ),
                command=None,
                bundle_path=bundle_path,
                prompt_path=prompt_path,
                stdout="",
                stderr="missing command template",
                parsed_output=None,
            )

        command = tuple(
            _substitute_token(
                token,
                bundle_path=bundle_path,
                prompt_path=prompt_path,
                output_dir=output_dir,
            )
            for token in self._config.command_template
        )
        result = self._runner.run(list(command))
        if result.exit_code != 0:
            return LlmJudgeResult(
                mode=self._config.mode,
                decision=JudgeDecision(
                    status=OracleStatus.ERROR,
                    reason="llm_judge_failed",
                    judge_id=f"dg.{request.mr.lower()}.llm_judge",
                    summary="LLM judge command failed.",
                    details={"exit_code": result.exit_code},
                ),
                command=command,
                bundle_path=bundle_path,
                prompt_path=prompt_path,
                stdout=result.stdout,
                stderr=result.stderr,
                parsed_output=None,
            )

        try:
            payload = json.loads(result.stdout)
        except json.JSONDecodeError as exc:
            return LlmJudgeResult(
                mode=self._config.mode,
                decision=JudgeDecision(
                    status=OracleStatus.ERROR,
                    reason="invalid_llm_judge_output",
                    judge_id=f"dg.{request.mr.lower()}.llm_judge",
                    summary=f"LLM judge returned invalid JSON: {exc}",
                ),
                command=command,
                bundle_path=bundle_path,
                prompt_path=prompt_path,
                stdout=result.stdout,
                stderr=result.stderr,
                parsed_output=None,
            )

        decision = _decision_from_payload(
            mr=request.mr,
            payload=payload,
        )
        return LlmJudgeResult(
            mode=self._config.mode,
            decision=decision,
            command=command,
            bundle_path=bundle_path,
            prompt_path=prompt_path,
            stdout=result.stdout,
            stderr=result.stderr,
            parsed_output=payload,
        )

    def judge_dg_mr4(
        self,
        *,
        request: OracleRequest,
        evidence: dict[str, object],
        deterministic_decision: JudgeDecision,
    ) -> LlmJudgeResult:
        output_dir = request.output_dir / "llm_judge"
        output_dir.mkdir(parents=True, exist_ok=True)
        bundle_path = output_dir / "bundle.json"
        prompt_path = output_dir / "prompt.txt"
        bundle = _build_dg_mr4_bundle(
            request=request,
            evidence=evidence,
            deterministic_decision=deterministic_decision,
            prompt_version=self._config.prompt_version,
        )
        prompt = build_judge_prompt(request.mr)
        bundle_path.write_text(
            json.dumps(bundle, indent=2, sort_keys=True) + "\n",
            encoding="utf-8",
        )
        prompt_path.write_text(prompt, encoding="utf-8")

        if not self._config.command_template:
            return LlmJudgeResult(
                mode=self._config.mode,
                decision=JudgeDecision(
                    status=OracleStatus.ERROR,
                    reason="missing_llm_judge_command",
                    judge_id=f"dg.{request.mr.lower()}.llm_judge",
                    summary="LLM judge mode was enabled, but no command template was configured.",
                ),
                command=None,
                bundle_path=bundle_path,
                prompt_path=prompt_path,
                stdout="",
                stderr="missing command template",
                parsed_output=None,
            )

        command = tuple(
            _substitute_token(
                token,
                bundle_path=bundle_path,
                prompt_path=prompt_path,
                output_dir=output_dir,
            )
            for token in self._config.command_template
        )
        result = self._runner.run(list(command))
        if result.exit_code != 0:
            return LlmJudgeResult(
                mode=self._config.mode,
                decision=JudgeDecision(
                    status=OracleStatus.ERROR,
                    reason="llm_judge_failed",
                    judge_id=f"dg.{request.mr.lower()}.llm_judge",
                    summary="LLM judge command failed.",
                    details={"exit_code": result.exit_code},
                ),
                command=command,
                bundle_path=bundle_path,
                prompt_path=prompt_path,
                stdout=result.stdout,
                stderr=result.stderr,
                parsed_output=None,
            )

        try:
            payload = json.loads(result.stdout)
        except json.JSONDecodeError as exc:
            return LlmJudgeResult(
                mode=self._config.mode,
                decision=JudgeDecision(
                    status=OracleStatus.ERROR,
                    reason="invalid_llm_judge_output",
                    judge_id=f"dg.{request.mr.lower()}.llm_judge",
                    summary=f"LLM judge returned invalid JSON: {exc}",
                ),
                command=command,
                bundle_path=bundle_path,
                prompt_path=prompt_path,
                stdout=result.stdout,
                stderr=result.stderr,
                parsed_output=None,
            )

        decision = _decision_from_payload(
            mr=request.mr,
            payload=payload,
        )
        return LlmJudgeResult(
            mode=self._config.mode,
            decision=decision,
            command=command,
            bundle_path=bundle_path,
            prompt_path=prompt_path,
            stdout=result.stdout,
            stderr=result.stderr,
            parsed_output=payload,
        )


def _build_dg_bundle(
    *,
    request: OracleRequest,
    criteria: CriteriaSpec,
    meta: MutationMeta,
    evidence: dict[str, object],
    deterministic_decision: JudgeDecision,
    prompt_version: str,
) -> dict[str, object]:
    tracked_symbols = tuple(dict.fromkeys((*criteria.variables, *meta.inserted_symbols)))
    bundle: dict[str, object] = {
        "kind": "dg_llm_judge_bundle_v1",
        "prompt_version": prompt_version,
        "tool": "dg",
        "mr": request.mr,
        "seed_path": str(request.seed_path),
        "mutant_path": None if request.mutant_path is None else str(request.mutant_path),
        "criteria": {
            "criterion_kind": criteria.criterion_kind,
            "variables": list(criteria.variables),
            "seed_id": criteria.seed_id,
            "program_point": criteria.program_point,
        },
        "mutation_meta": meta.to_dict(),
        "deterministic_prefilter": {
            "status": deterministic_decision.status.value,
            "reason": deterministic_decision.reason,
            "summary": deterministic_decision.summary,
            "retained_symbols": list(deterministic_decision.retained_symbols),
        },
        "evidence": evidence,
        "source_snippets": {
            "seed": _extract_symbol_snippets(request.seed_path, tracked_symbols),
            "mutant": (
                None
                if request.mutant_path is None
                else _extract_symbol_snippets(request.mutant_path, tracked_symbols)
            ),
        },
    }
    # For MR1, include the first lines of sliced IR so the LLM can compare
    # data-dependency chains between seed and mutant slices.
    if request.mr == "MR1":
        bundle["slice_ir_excerpts"] = {
            "seed": _extract_sliced_ir_head(evidence, "seed"),
            "mutant": _extract_sliced_ir_head(evidence, "mutant"),
        }
    return bundle


def _build_dg_mr4_bundle(
    *,
    request: OracleRequest,
    evidence: dict[str, object],
    deterministic_decision: JudgeDecision,
    prompt_version: str,
) -> dict[str, object]:
    criteria_path = request.criteria_path
    criteria: dict[str, object] = {}
    if criteria_path is not None and criteria_path.exists():
        criteria_raw = json.loads(criteria_path.read_text(encoding="utf-8"))
        criteria = {
            "criterion_kind": criteria_raw.get("criterion_kind", "value"),
            "variables": criteria_raw.get("variables", []),
            "seed_id": criteria_raw.get("seed_id", ""),
            "program_point": criteria_raw.get("program_point"),
        }
    # Compact: keep only set sizes and diffs, drop verbose SliceOutcome dicts
    programs: dict[str, object] = {}
    raw_programs = evidence.get("programs", {})
    for label, prog in raw_programs.items():
        if not isinstance(prog, dict):
            programs[label] = prog
            continue
        compact: dict[str, object] = {
            "single_set_sizes": prog.get("single_set_sizes", {}),
            "single_union_size": prog.get("single_union_size", 0),
            "multi_set_size": prog.get("multi_set_size", 0),
        }
        diff = prog.get("diff")
        if isinstance(diff, dict):
            missing = diff.get("missing_from_multi")
            extra = diff.get("extra_in_multi")
            if missing:
                compact["missing_from_multi_count"] = len(missing)
                compact["missing_from_multi_sample"] = missing[:5]
            if extra:
                compact["extra_in_multi_count"] = len(extra)
                compact["extra_in_multi_sample"] = extra[:5]
        programs[label] = compact
    return {
        "kind": "dg_llm_judge_bundle_v1",
        "prompt_version": prompt_version,
        "tool": "dg",
        "mr": request.mr,
        "seed_path": str(request.seed_path),
        "mutant_path": None if request.mutant_path is None else str(request.mutant_path),
        "criteria": criteria,
        "deterministic_prefilter": {
            "status": deterministic_decision.status.value,
            "reason": deterministic_decision.reason,
            "summary": deterministic_decision.summary,
        },
        "evidence": {
            "kind": "dg_mr4_evidence_v1",
            "programs": programs,
        },
    }


def _substitute_token(
    token: str,
    *,
    bundle_path: Path,
    prompt_path: Path,
    output_dir: Path,
) -> str:
    return (
        token.replace("{bundle_json}", str(bundle_path))
        .replace("{prompt_file}", str(prompt_path))
        .replace("{output_dir}", str(output_dir))
    )


def _decision_from_payload(*, mr: str, payload: dict[str, object]) -> JudgeDecision:
    raw_status = str(payload.get("status", "")).upper()
    if raw_status not in {"PASS", "VIOLATION", "ERROR"}:
        return JudgeDecision(
            status=OracleStatus.ERROR,
            reason="invalid_llm_judge_status",
            judge_id=f"dg.{mr.lower()}.llm_judge",
            summary="LLM judge returned an unsupported status.",
            details={"payload": payload},
        )
    summary = None if payload.get("summary") is None else str(payload.get("summary"))
    reason = str(payload.get("reason", "")).strip() or "llm_judge_no_reason"
    confidence = payload.get("confidence")
    details = {"payload": payload}
    if confidence is not None:
        details["confidence"] = confidence
    return JudgeDecision(
        status=OracleStatus(raw_status),
        reason=reason,
        judge_id=f"dg.{mr.lower()}.llm_judge",
        summary=summary,
        details=details,
    )


def _extract_symbol_snippets(path: Path, symbols: tuple[str, ...]) -> dict[str, list[str]]:
    if not path.exists():
        return {}
    lines = path.read_text(encoding="utf-8", errors="ignore").splitlines()
    snippets: dict[str, list[str]] = {}
    for symbol in symbols:
        matched = []
        for index, line in enumerate(lines, start=1):
            if symbol not in line:
                continue
            matched.append(f"{index}: {line.strip()}")
            if len(matched) >= 4:
                break
        if matched:
            snippets[symbol] = matched
    return snippets


def _extract_sliced_ir_head(
    evidence: dict[str, object],
    label: str,
    *,
    max_lines: int = 40,
) -> list[str] | None:
    """Extract the first *max_lines* non-empty lines from a sliced IR output."""
    prog = evidence.get(label)
    if not isinstance(prog, dict):
        return None
    output_path = prog.get("output_path")
    if not output_path:
        return None
    path = Path(output_path)
    if not path.exists():
        return None
    lines: list[str] = []
    for raw in path.read_text(encoding="utf-8", errors="ignore").splitlines():
        stripped = raw.strip()
        if stripped:
            lines.append(stripped)
            if len(lines) >= max_lines:
                break
    return lines


def render_llm_command_preview(command_template: str) -> tuple[str, ...]:
    return tuple(shlex.split(command_template))
