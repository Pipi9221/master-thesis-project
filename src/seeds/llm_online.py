"""LLM online seed source – generates C seed programs via an external LLM command.

Follows the same subprocess-call pattern as ``SubprocessLlmJudge``: the user
provides a *command template* whose tokens may contain placeholders that are
substituted at runtime with concrete file paths.
"""

from __future__ import annotations

import logging
import tempfile
from dataclasses import dataclass, field
from pathlib import Path

from common.runner import CommandRunner
from common.validation import CommandResult
from validators.compile_validator import CompileValidator

from .base import SeedSource
from .llm_feature_checker import FeatureCheckResult, check_semantic_features
from .llm_prompts import build_prompt, compute_prompt_hash, render_prompt_file
from .models import SeedCase

logger = logging.getLogger(__name__)


# ---------------------------------------------------------------------------
# Config
# ---------------------------------------------------------------------------


@dataclass(frozen=True, slots=True)
class LlmOnlineConfig:
    """Configuration for :class:`LlmOnlineSeedSource`."""

    mr: str  # target metamorphic relation (MR1–MR4)
    count: int = 1  # number of seeds to generate
    feature_focus: str = ""  # topic dimension focus for the prompt
    criteria: str = "keep"  # observation variable name
    dependency_focus: str = ""  # dependency focus for the prompt
    command_template: tuple[str, ...] = ()  # LLM call command template
    max_retries: int = 3  # max retries per individual seed
    required_topics: list[str] | None = None  # required topic dimensions
    min_topics: int = 2  # minimum topic coverage
    clang_binary: str = "clang"  # compiler for compile / run checks
    compile_include_dir: str = ""  # extra include directory for compile checks
    run_check: bool = True  # whether to perform runtime availability check


# ---------------------------------------------------------------------------
# Internal helpers
# ---------------------------------------------------------------------------


def _substitute_token(
    token: str,
    *,
    prompt_file: Path,
    output_file: Path,
) -> str:
    """Replace ``{prompt_file}`` and ``{output_file}`` placeholders."""
    return (
        token.replace("{prompt_file}", str(prompt_file))
        .replace("{output_file}", str(output_file))
    )


def _build_llm_command(
    command_template: tuple[str, ...],
    *,
    prompt_file: Path,
    output_file: Path,
) -> list[str]:
    """Build the concrete LLM command from a template."""
    return [
        _substitute_token(
            t, prompt_file=prompt_file, output_file=output_file
        )
        for t in command_template
    ]


def _compile_syntax_check(
    source_path: Path,
    *,
    runner: CommandRunner,
    clang_binary: str,
    include_dir: str,
) -> CommandResult:
    """Run ``clang -fsyntax-only`` on the given source file."""
    cmd: list[str] = [clang_binary, "-fsyntax-only"]
    if include_dir:
        cmd.extend(["-I", include_dir])
    cmd.append(str(source_path))
    return runner.run(cmd)


def _run_availability_check(
    source_path: Path,
    *,
    runner: CommandRunner,
    clang_binary: str,
    include_dir: str,
    work_dir: Path,
) -> tuple[bool, int]:
    """Compile the source to an executable and run it.

    Returns ``(success, exit_code)`` where *success* is ``True`` when the
    program compiles *and* exits with code 0.
    """
    exe_path = work_dir / "a.out"
    compile_cmd: list[str] = [clang_binary]
    if include_dir:
        compile_cmd.extend(["-I", include_dir])
    compile_cmd.extend(["-o", str(exe_path), str(source_path)])

    compile_result = runner.run(compile_cmd)
    if compile_result.exit_code != 0:
        return False, compile_result.exit_code

    run_result = runner.run([str(exe_path)])
    return run_result.exit_code == 0, run_result.exit_code


# ---------------------------------------------------------------------------
# LlmOnlineSeedSource
# ---------------------------------------------------------------------------


class LlmOnlineSeedSource(SeedSource):
    """Generate C seed programs by calling an external LLM command.

    The generation pipeline for each seed is:

    1. Build prompt → write to temp file
    2. Call LLM command → candidate source written by LLM
    3. Compile syntax check (``clang -fsyntax-only``)
    4. Run availability check (compile + execute, exit code 0)
    5. Semantic feature check (topic coverage)
    6. If any check fails, retry up to *max_retries* times
    """

    def __init__(
        self,
        *,
        runner: CommandRunner,
        config: LlmOnlineConfig,
    ) -> None:
        self._runner = runner
        self._config = config

    # -- public interface ----------------------------------------------------

    def materialize_cases(self, output_dir: Path) -> list[SeedCase]:
        cases: list[SeedCase] = []

        for seed_index in range(self._config.count):
            seed_id = f"llm_online_{seed_index + 1:04d}"
            case_dir = output_dir / seed_id
            case_dir.mkdir(parents=True, exist_ok=True)

            if self._config.mr == "MR4":
                from .llm_prompts import build_mr4_prompt
                prompt_text = build_mr4_prompt(
                    feature_focus=self._config.feature_focus,
                    dependency_focus=self._config.dependency_focus,
                )
            else:
                prompt_text = build_prompt(
                    mr=self._config.mr,
                    feature_focus=self._config.feature_focus,
                    criteria=self._config.criteria,
                    dependency_focus=self._config.dependency_focus,
                )
            prompt_hash = compute_prompt_hash(prompt_text)

            seed_case: SeedCase | None = None

            for retry in range(self._config.max_retries):
                candidate_source, llm_result = self._call_llm(
                    case_dir=case_dir,
                    prompt_text=prompt_text,
                    seed_id=seed_id,
                )

                if candidate_source is None:
                    logger.warning(
                        "[%s] LLM call failed (retry %d/%d)",
                        seed_id,
                        retry + 1,
                        self._config.max_retries,
                    )
                    continue

                # --- compile check ---
                compile_ok, compile_result = self._compile_check(candidate_source)
                if not compile_ok:
                    logger.warning(
                        "[%s] Compile check failed (retry %d/%d)",
                        seed_id,
                        retry + 1,
                        self._config.max_retries,
                    )
                    continue

                # --- run check ---
                run_ok = True
                exit_code: int = 0
                if self._config.run_check:
                    run_ok, exit_code = self._run_check(
                        candidate_source, case_dir
                    )
                    if not run_ok:
                        logger.warning(
                            "[%s] Run check failed (exit %d, retry %d/%d)",
                            seed_id,
                            exit_code,
                            retry + 1,
                            self._config.max_retries,
                        )
                        continue

                # --- feature check ---
                feature_result = self._feature_check(candidate_source)
                if not feature_result.min_topics_satisfied:
                    logger.warning(
                        "[%s] Feature check failed (retry %d/%d)",
                        seed_id,
                        retry + 1,
                        self._config.max_retries,
                    )
                    continue

                # --- SUCCESS ---
                seed_case = SeedCase(
                    seed_id=seed_id,
                    generator="llm_online",
                    case_dir=case_dir,
                    source_name="generated.c",
                    source_meta={
                        "mr": self._config.mr,
                        "feature_focus": self._config.feature_focus,
                        "prompt_hash": prompt_hash,
                        "compile_ok": True,
                        "run_ok": run_ok,
                        "exit_code": exit_code,
                        "feature_check": feature_result.to_dict(),
                        "review_status": "pending",
                        "retry_count": retry + 1,
                    },
                )
                # Copy the candidate to seed.c
                seed_path = case_dir / "seed.c"
                seed_path.write_text(
                    candidate_source, encoding="utf-8"
                )
                seed_case.write_seed_meta()
                cases.append(seed_case)
                break

            if seed_case is None:
                # All retries exhausted – record failure
                _write_failure_meta(
                    case_dir=case_dir,
                    seed_id=seed_id,
                    mr=self._config.mr,
                    prompt_hash=prompt_hash,
                    max_retries=self._config.max_retries,
                )
                logger.error(
                    "[%s] All %d retries exhausted",
                    seed_id,
                    self._config.max_retries,
                )

        return cases

    # -- internal methods ----------------------------------------------------

    def _call_llm(
        self,
        *,
        case_dir: Path,
        prompt_text: str,
        seed_id: str,
    ) -> tuple[str | None, CommandResult | None]:
        """Write prompt to file, invoke LLM command, read output.

        Returns ``(source_code, command_result)``.  *source_code* is ``None``
        when the LLM command fails or the output file is empty.
        """
        prompt_file = case_dir / "prompt.txt"
        output_file = case_dir / "llm_output.c"

        render_prompt_file(prompt_text, prompt_file)

        if not self._config.command_template:
            logger.error("[%s] No LLM command template configured", seed_id)
            return None, None

        command = _build_llm_command(
            self._config.command_template,
            prompt_file=prompt_file,
            output_file=output_file,
        )
        result = self._runner.run(command)

        if result.exit_code != 0:
            return None, result

        if not output_file.exists():
            logger.warning("[%s] LLM output file not created", seed_id)
            return None, result

        source_code = output_file.read_text(encoding="utf-8", errors="ignore")
        if not source_code.strip():
            return None, result

        return source_code, result

    def _compile_check(
        self, source_path_or_code: Path | str
    ) -> tuple[bool, CommandResult]:
        """Run ``clang -fsyntax-only`` on the candidate source.

        Accepts either a ``Path`` to an existing file or raw source code
        (which is written to a temporary file first).
        """
        if isinstance(source_path_or_code, Path):
            source_path = source_path_or_code
        else:
            tmp = tempfile.NamedTemporaryFile(
                suffix=".c", mode="w", delete=False, encoding="utf-8"
            )
            try:
                tmp.write(source_path_or_code)
                tmp.close()
                source_path = Path(tmp.name)
            except Exception:
                tmp.close()
                raise

        result = _compile_syntax_check(
            source_path,
            runner=self._runner,
            clang_binary=self._config.clang_binary,
            include_dir=self._config.compile_include_dir,
        )
        return result.exit_code == 0, result

    def _run_check(
        self, source_path_or_code: Path | str, work_dir: Path
    ) -> tuple[bool, int]:
        """Compile and execute the candidate, checking exit code is 0."""
        if isinstance(source_path_or_code, Path):
            source_path = source_path_or_code
        else:
            tmp = work_dir / "_run_check_tmp.c"
            tmp.write_text(source_path_or_code, encoding="utf-8")
            source_path = tmp

        return _run_availability_check(
            source_path,
            runner=self._runner,
            clang_binary=self._config.clang_binary,
            include_dir=self._config.compile_include_dir,
            work_dir=work_dir,
        )

    def _feature_check(self, source_code: str) -> FeatureCheckResult:
        """Run semantic feature checking on candidate source."""
        return check_semantic_features(
            source_code,
            required_topics=self._config.required_topics,
            min_topics=self._config.min_topics,
        )


# ---------------------------------------------------------------------------
# Failure meta helper
# ---------------------------------------------------------------------------


def _write_failure_meta(
    *,
    case_dir: Path,
    seed_id: str,
    mr: str,
    prompt_hash: str,
    max_retries: int,
) -> None:
    """Write a minimal ``seed_meta.json`` for a failed seed."""
    import json

    payload = {
        "seed_id": seed_id,
        "generator": "llm_online",
        "source_name": None,
        "source_meta": {
            "mr": mr,
            "prompt_hash": prompt_hash,
            "compile_ok": False,
            "run_ok": False,
            "feature_check": None,
            "review_status": "failed",
            "retry_count": max_retries,
        },
    }
    meta_path = case_dir / "seed_meta.json"
    meta_path.write_text(
        json.dumps(payload, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )


# ---------------------------------------------------------------------------
# MR1 dual-output seed source
# ---------------------------------------------------------------------------

_MR1_VARIANT_DELIMITER = "// ===VARIANT==="


class LlmMr1OnlineSeedSource(SeedSource):
    """LLM seed source for MR1 that generates both seed.c and mutant.c in a
    single LLM call.

    The LLM is asked to output two semantically-equivalent C programs separated
    by ``// ===VARIANT===``.  The first becomes ``seed.c``, the second becomes
    ``mutant.c``.
    """

    def __init__(
        self,
        *,
        runner: CommandRunner,
        config: LlmOnlineConfig,
    ) -> None:
        self._runner = runner
        self._config = config

    def materialize_cases(self, output_dir: Path) -> list[SeedCase]:
        from .llm_prompts import build_mr1_dual_prompt, compute_prompt_hash, render_prompt_file

        cases: list[SeedCase] = []

        for seed_index in range(self._config.count):
            seed_id = f"llm_online_{seed_index + 1:04d}"
            case_dir = output_dir / seed_id
            case_dir.mkdir(parents=True, exist_ok=True)

            prompt_text = build_mr1_dual_prompt(
                feature_focus=self._config.feature_focus,
                criteria=self._config.criteria,
                dependency_focus=self._config.dependency_focus,
            )
            prompt_hash = compute_prompt_hash(prompt_text)

            seed_case: SeedCase | None = None

            for retry in range(self._config.max_retries):
                seed_code, mutant_code = self._call_llm_mr1(
                    case_dir=case_dir,
                    prompt_text=prompt_text,
                    seed_id=seed_id,
                )

                if seed_code is None or mutant_code is None:
                    logger.warning(
                        "[%s] LLM call failed (retry %d/%d)",
                        seed_id,
                        retry + 1,
                        self._config.max_retries,
                    )
                    continue

                # --- compile check on both ---
                seed_ok, _ = self._compile_check(seed_code)
                if not seed_ok:
                    logger.warning(
                        "[%s] Seed compile check failed (retry %d/%d)",
                        seed_id,
                        retry + 1,
                        self._config.max_retries,
                    )
                    continue
                mutant_ok, _ = self._compile_check(mutant_code)
                if not mutant_ok:
                    logger.warning(
                        "[%s] Mutant compile check failed (retry %d/%d)",
                        seed_id,
                        retry + 1,
                        self._config.max_retries,
                    )
                    continue

                # --- SUCCESS ---
                seed_path = case_dir / "seed.c"
                mutant_path = case_dir / "mutant.c"
                seed_path.write_text(seed_code, encoding="utf-8")
                mutant_path.write_text(mutant_code, encoding="utf-8")

                seed_case = SeedCase(
                    seed_id=seed_id,
                    generator="llm_online",
                    case_dir=case_dir,
                    source_name="generated.c",
                    source_meta={
                        "mr": self._config.mr,
                        "feature_focus": self._config.feature_focus,
                        "prompt_hash": prompt_hash,
                        "compile_ok": True,
                        "run_ok": True,
                        "exit_code": 0,
                        "feature_check": None,
                        "review_status": "pending",
                        "retry_count": retry + 1,
                    },
                )
                seed_case.write_seed_meta()
                cases.append(seed_case)
                break

            if seed_case is None:
                _write_failure_meta(
                    case_dir=case_dir,
                    seed_id=seed_id,
                    mr=self._config.mr,
                    prompt_hash=prompt_hash,
                    max_retries=self._config.max_retries,
                )
                logger.error(
                    "[%s] All %d retries exhausted",
                    seed_id,
                    self._config.max_retries,
                )

        return cases

    def _call_llm_mr1(
        self,
        *,
        case_dir: Path,
        prompt_text: str,
        seed_id: str,
    ) -> tuple[str | None, str | None]:
        """Call LLM and split output into seed and mutant code."""
        from .llm_prompts import render_prompt_file

        prompt_file = case_dir / "prompt.txt"
        output_file = case_dir / "llm_output.c"

        render_prompt_file(prompt_text, prompt_file)

        if not self._config.command_template:
            logger.error("[%s] No LLM command template configured", seed_id)
            return None, None

        command = _build_llm_command(
            self._config.command_template,
            prompt_file=prompt_file,
            output_file=output_file,
        )
        result = self._runner.run(command)

        if result.exit_code != 0:
            return None, None

        if not output_file.exists():
            logger.warning("[%s] LLM output file not created", seed_id)
            return None, None

        raw_output = output_file.read_text(encoding="utf-8", errors="ignore")
        if not raw_output.strip():
            return None, None

        parts = raw_output.split(_MR1_VARIANT_DELIMITER, 1)
        if len(parts) != 2:
            logger.warning(
                "[%s] LLM output missing variant delimiter, got %d parts",
                seed_id,
                len(parts),
            )
            return None, None

        seed_code = _extract_c_code_block(parts[0])
        mutant_code = _extract_c_code_block(parts[1])

        if not seed_code or not mutant_code:
            logger.warning("[%s] Empty seed or mutant after extraction", seed_id)
            return None, None

        return seed_code, mutant_code

    def _compile_check(
        self, source_code: str
    ) -> tuple[bool, CommandResult]:
        """Run ``clang -fsyntax-only`` on the given source code."""
        import tempfile

        tmp = tempfile.NamedTemporaryFile(
            suffix=".c", mode="w", delete=False, encoding="utf-8"
        )
        try:
            tmp.write(source_code)
            tmp.close()
            source_path = Path(tmp.name)
        except Exception:
            tmp.close()
            raise

        result = _compile_syntax_check(
            source_path,
            runner=self._runner,
            clang_binary=self._config.clang_binary,
            include_dir=self._config.compile_include_dir,
        )
        return result.exit_code == 0, result


def _extract_c_code_block(text: str) -> str:
    """Extract C code from text, stripping markdown fences and leading/trailing
    whitespace.  Returns the cleaned code or empty string."""
    import re

    # Try to extract from markdown code fence
    code_block = re.search(r"```(?:c|C)?\s*\n?(.*?)```", text, re.DOTALL)
    if code_block:
        return code_block.group(1).strip()
    return text.strip()
