from __future__ import annotations

import json
import shlex
from dataclasses import dataclass
from pathlib import Path

from common.criteria import CriteriaSpec
from common.metadata import MutationMeta
from common.runner import CommandRunner

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
        prompt = _build_dg_prompt(request.mr)
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
    return {
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


def _build_dg_prompt(mr: str) -> str:
    if mr == "MR2":
        expectation = "Inserted irrelevant executable noise should not survive in the DG slice."
    elif mr == "MR3":
        expectation = "Inserted dead-code payload should not survive in the DG slice."
    else:
        expectation = "Judge the DG slicing result against the requested metamorphic relation."
    return (
        "You are judging a DG slicing result.\n"
        f"Metamorphic relation: {mr}\n"
        f"Expectation: {expectation}\n"
        "Read the bundle JSON and decide whether the result is PASS, VIOLATION, or ERROR.\n"
        "Treat malformed or insufficient evidence as ERROR.\n"
        "Return only JSON with this schema:\n"
        '{"status":"PASS|VIOLATION|ERROR","reason":"snake_case","summary":"short explanation","confidence":0.0}\n'
    )


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


def render_llm_command_preview(command_template: str) -> tuple[str, ...]:
    return tuple(shlex.split(command_template))
