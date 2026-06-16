"""Unit tests for seeds.llm_online (LlmOnlineSeedSource)."""

from __future__ import annotations

import json
from pathlib import Path

import pytest

from common.validation import CommandResult
from seeds.llm_online import (
    LlmOnlineConfig,
    LlmOnlineSeedSource,
    _build_llm_command,
    _substitute_token,
)
from seeds.models import SeedCase


# ---------------------------------------------------------------------------
# Fake CommandRunner
# ---------------------------------------------------------------------------

# A valid C program that passes all checks (compile, run, feature)
_GOOD_C = """\
#include <stdio.h>
int main(void) {
    volatile int x = 1;
    int *p = &x;
    switch (*p) {
        case 1: printf("%d\\n", *p); break;
        default: break;
    }
    return *p;
}
"""

# A program that compiles but has minimal features (only return)
_MINIMAL_C = "int main(void) { return 0; }\n"

# A program that will fail syntax check
_BROKEN_C = "this is not valid C at all!!!"


class FakeRunner:
    """A CommandRunner that simulates LLM call + compile + run."""

    def __init__(
        self,
        *,
        llm_output: str = _GOOD_C,
        llm_exit_code: int = 0,
        compile_ok: bool = True,
        run_ok: bool = True,
        fail_after: int | None = None,
    ) -> None:
        self._llm_output = llm_output
        self._llm_exit_code = llm_exit_code
        self._compile_ok = compile_ok
        self._run_ok = run_ok
        self._call_count = 0
        self._fail_after = fail_after

    def run(self, command: list[str]) -> CommandResult:
        self._call_count += 1

        # Detect which phase we're in based on command content
        cmd_str = " ".join(command)

        # LLM call: command contains the output file path
        if "prompt.txt" in cmd_str or "llm_output" in cmd_str or (
            "llm_cli" in cmd_str or "fake_llm" in cmd_str
        ):
            # Check fail_after
            if self._fail_after is not None and self._call_count > self._fail_after:
                return CommandResult(exit_code=1, stdout="", stderr="simulated failure")

            # Write output file if the command is an LLM call
            if "--output-file" in command:
                idx = command.index("--output-file")
                if idx + 1 < len(command):
                    output_path = Path(command[idx + 1])
                    output_path.parent.mkdir(parents=True, exist_ok=True)
                    output_path.write_text(self._llm_output, encoding="utf-8")
            return CommandResult(
                exit_code=self._llm_exit_code, stdout="ok", stderr=""
            )

        # Compile check: clang -fsyntax-only
        if "-fsyntax-only" in cmd_str:
            if self._compile_ok:
                return CommandResult(exit_code=0, stdout="", stderr="")
            return CommandResult(exit_code=1, stdout="", stderr="error: invalid code")

        # Run check: compile + execute
        if "-o" in cmd_str and ".c" in cmd_str:
            if self._compile_ok:
                return CommandResult(exit_code=0, stdout="", stderr="")
            return CommandResult(exit_code=1, stdout="", stderr="compile error")

        # Execute the binary
        if "a.out" in cmd_str:
            if self._run_ok:
                return CommandResult(exit_code=0, stdout="output\n", stderr="")
            return CommandResult(exit_code=1, stdout="", stderr="runtime error")

        return CommandResult(exit_code=0, stdout="", stderr="")


class FakeRunnerWritesOutput:
    """A runner that handles the LLM call by writing output to the
    ``{output_file}`` path."""

    def __init__(self, *, output: str = _GOOD_C, exit_code: int = 0) -> None:
        self._output = output
        self._exit_code = exit_code

    def run(self, command: list[str]) -> CommandResult:
        cmd_str = " ".join(command)

        # LLM call — detect by looking for the output file pattern
        if "--output-file" in command:
            idx = command.index("--output-file")
            output_path = Path(command[idx + 1])
            output_path.parent.mkdir(parents=True, exist_ok=True)
            output_path.write_text(self._output, encoding="utf-8")
            return CommandResult(exit_code=self._exit_code, stdout="ok", stderr="")

        # Compile check
        if "-fsyntax-only" in cmd_str:
            return CommandResult(exit_code=0, stdout="", stderr="")

        # Compile for run check
        if "-o" in cmd_str and ".c" in cmd_str:
            # Fake compile: write an empty "binary"
            o_idx = command.index("-o")
            exe_path = Path(command[o_idx + 1])
            exe_path.write_text("#!/bin/sh\nexit 0\n", encoding="utf-8")
            return CommandResult(exit_code=0, stdout="", stderr="")

        # Run the binary
        if "a.out" in cmd_str:
            return CommandResult(exit_code=0, stdout="1\n", stderr="")

        return CommandResult(exit_code=0, stdout="", stderr="")


# ---------------------------------------------------------------------------
# _substitute_token / _build_llm_command
# ---------------------------------------------------------------------------


class TestSubstituteToken:
    def test_prompt_file_substitution(self) -> None:
        result = _substitute_token(
            "{prompt_file}", prompt_file=Path("/tmp/prompt.txt"), output_file=Path("/tmp/out.c")
        )
        assert result == "/tmp/prompt.txt"

    def test_output_file_substitution(self) -> None:
        result = _substitute_token(
            "--output {output_file}", prompt_file=Path("/p.txt"), output_file=Path("/out.c")
        )
        assert result == "--output /out.c"

    def test_no_substitution_needed(self) -> None:
        result = _substitute_token("python3", prompt_file=Path("/p"), output_file=Path("/o"))
        assert result == "python3"


class TestBuildLlmCommand:
    def test_builds_full_command(self) -> None:
        template = ("python3", "-m", "llm_cli", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}")
        cmd = _build_llm_command(
            template,
            prompt_file=Path("/tmp/p.txt"),
            output_file=Path("/tmp/out.c"),
        )
        assert cmd[0] == "python3"
        assert cmd[4] == "/tmp/p.txt"
        assert cmd[6] == "/tmp/out.c"


# ---------------------------------------------------------------------------
# LlmOnlineConfig
# ---------------------------------------------------------------------------


class TestLlmOnlineConfig:
    def test_default_values(self) -> None:
        cfg = LlmOnlineConfig(mr="MR2")
        assert cfg.mr == "MR2"
        assert cfg.count == 1
        assert cfg.max_retries == 3
        assert cfg.min_topics == 2
        assert cfg.run_check is True

    def test_custom_values(self) -> None:
        cfg = LlmOnlineConfig(
            mr="MR3",
            count=5,
            max_retries=10,
            min_topics=3,
            run_check=False,
        )
        assert cfg.count == 5
        assert cfg.max_retries == 10
        assert cfg.min_topics == 3
        assert cfg.run_check is False


# ---------------------------------------------------------------------------
# LlmOnlineSeedSource.materialize_cases
# ---------------------------------------------------------------------------


class TestMaterializeCases:
    def test_single_seed_success(self, tmp_path: Path) -> None:
        """Happy path: LLM generates a valid program that passes all checks."""
        runner = FakeRunnerWritesOutput(output=_GOOD_C)
        cfg = LlmOnlineConfig(
            mr="MR2",
            count=1,
            command_template=("python3", "-m", "llm_cli", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
            min_topics=2,
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        assert len(cases) == 1
        case = cases[0]
        assert case.seed_id == "llm_online_0001"
        assert case.generator == "llm_online"
        assert case.source_meta["mr"] == "MR2"
        assert case.source_meta["compile_ok"] is True
        assert case.source_meta["run_ok"] is True
        assert case.source_meta["review_status"] == "pending"
        assert case.source_meta["retry_count"] >= 1
        # Prompt hash should be present
        assert "prompt_hash" in case.source_meta

    def test_multiple_seeds(self, tmp_path: Path) -> None:
        """Generate multiple seeds."""
        runner = FakeRunnerWritesOutput(output=_GOOD_C)
        cfg = LlmOnlineConfig(
            mr="MR3",
            count=3,
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
            min_topics=2,
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        assert len(cases) == 3
        assert cases[0].seed_id == "llm_online_0001"
        assert cases[1].seed_id == "llm_online_0002"
        assert cases[2].seed_id == "llm_online_0003"

    def test_seed_meta_json_written(self, tmp_path: Path) -> None:
        """Verify seed_meta.json is written with complete metadata."""
        runner = FakeRunnerWritesOutput(output=_GOOD_C)
        cfg = LlmOnlineConfig(
            mr="MR2",
            count=1,
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        meta_path = cases[0].case_dir / "seed_meta.json"
        assert meta_path.exists()
        meta = json.loads(meta_path.read_text(encoding="utf-8"))
        assert meta["seed_id"] == "llm_online_0001"
        assert meta["generator"] == "llm_online"
        assert meta["source_meta"]["review_status"] == "pending"
        assert "feature_check" in meta["source_meta"]

    def test_seed_c_written(self, tmp_path: Path) -> None:
        """Verify seed.c is written with the generated source."""
        runner = FakeRunnerWritesOutput(output=_GOOD_C)
        cfg = LlmOnlineConfig(
            mr="MR1",
            count=1,
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        seed_c = cases[0].case_dir / "seed.c"
        assert seed_c.exists()
        content = seed_c.read_text(encoding="utf-8")
        assert "volatile" in content

    def test_no_command_template_fails_all(self, tmp_path: Path) -> None:
        """If no command template is provided, all seeds fail."""
        runner = FakeRunnerWritesOutput(output=_GOOD_C)
        cfg = LlmOnlineConfig(mr="MR2", count=1, command_template=())
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        assert len(cases) == 0
        # Failure meta should still be written
        meta_path = tmp_path / "seeds" / "llm_online_0001" / "seed_meta.json"
        assert meta_path.exists()
        meta = json.loads(meta_path.read_text(encoding="utf-8"))
        assert meta["source_meta"]["review_status"] == "failed"

    def test_llm_call_failure_retries(self, tmp_path: Path) -> None:
        """LLM call fails first time, succeeds on retry."""
        call_count = 0

        class RetryRunner:
            def run(self, command: list[str]) -> CommandResult:
                nonlocal call_count
                call_count += 1
                cmd_str = " ".join(command)

                # LLM call
                if "--output-file" in command:
                    idx = command.index("--output-file")
                    output_path = Path(command[idx + 1])
                    output_path.parent.mkdir(parents=True, exist_ok=True)

                    if call_count <= 1:
                        # First LLM call fails
                        return CommandResult(exit_code=1, stdout="", stderr="error")
                    # Second LLM call succeeds
                    output_path.write_text(_GOOD_C, encoding="utf-8")
                    return CommandResult(exit_code=0, stdout="ok", stderr="")

                if "-fsyntax-only" in cmd_str:
                    return CommandResult(exit_code=0, stdout="", stderr="")

                if "-o" in cmd_str and ".c" in cmd_str:
                    o_idx = command.index("-o")
                    Path(command[o_idx + 1]).write_text("#!/bin/sh\nexit 0\n", encoding="utf-8")
                    return CommandResult(exit_code=0, stdout="", stderr="")

                if "a.out" in cmd_str:
                    return CommandResult(exit_code=0, stdout="", stderr="")

                return CommandResult(exit_code=0, stdout="", stderr="")

        runner = RetryRunner()
        cfg = LlmOnlineConfig(
            mr="MR2",
            count=1,
            max_retries=3,
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        assert len(cases) == 1
        assert cases[0].source_meta["retry_count"] == 2

    def test_all_retries_exhausted(self, tmp_path: Path) -> None:
        """All retries fail → no SeedCase returned, failure meta written."""
        runner = FakeRunnerWritesOutput(output=_BROKEN_C)
        cfg = LlmOnlineConfig(
            mr="MR2",
            count=1,
            max_retries=2,
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
            # Broken C will fail compile check, so feature check won't even be reached
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        assert len(cases) == 0
        meta_path = tmp_path / "seeds" / "llm_online_0001" / "seed_meta.json"
        assert meta_path.exists()

    def test_feature_check_low_min_topics(self, tmp_path: Path) -> None:
        """Minimal C program passes with min_topics=1."""
        runner = FakeRunnerWritesOutput(output=_MINIMAL_C)
        cfg = LlmOnlineConfig(
            mr="MR1",
            count=1,
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
            min_topics=1,
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        assert len(cases) == 1
        assert cases[0].source_meta["feature_check"]["min_topics_satisfied"] is True

    def test_run_check_disabled(self, tmp_path: Path) -> None:
        """When run_check=False, only compile + feature checks run."""
        runner = FakeRunnerWritesOutput(output=_GOOD_C)
        cfg = LlmOnlineConfig(
            mr="MR2",
            count=1,
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
            run_check=False,
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        assert len(cases) == 1
        assert cases[0].source_meta["run_ok"] is True  # default when skipped

    def test_required_topics_enforced(self, tmp_path: Path) -> None:
        """When required_topics is set, those must be present."""
        runner = FakeRunnerWritesOutput(output=_MINIMAL_C)
        cfg = LlmOnlineConfig(
            mr="MR1",
            count=1,
            max_retries=1,
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
            required_topics=["criterion_export", "control_flow"],
            min_topics=1,
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        # _MINIMAL_C only has criterion_export, not control_flow → should fail
        assert len(cases) == 0

    def test_prompt_file_written(self, tmp_path: Path) -> None:
        """Verify prompt.txt is written in the case directory."""
        runner = FakeRunnerWritesOutput(output=_GOOD_C)
        cfg = LlmOnlineConfig(
            mr="MR2",
            count=1,
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        prompt_path = cases[0].case_dir / "prompt.txt"
        assert prompt_path.exists()
        content = prompt_path.read_text(encoding="utf-8")
        # Should contain MR2-specific constraint
        assert "冗余赋值" in content or "MR2" in content or "criterion" in content.lower()

    def test_feature_focus_in_prompt(self, tmp_path: Path) -> None:
        """Custom feature_focus should appear in the prompt."""
        runner = FakeRunnerWritesOutput(output=_GOOD_C)
        cfg = LlmOnlineConfig(
            mr="MR2",
            count=1,
            feature_focus="pointer_array_data",
            command_template=("fake_llm", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"),
        )
        source = LlmOnlineSeedSource(runner=runner, config=cfg)
        cases = source.materialize_cases(tmp_path / "seeds")

        prompt_path = cases[0].case_dir / "prompt.txt"
        content = prompt_path.read_text(encoding="utf-8")
        assert "指针" in content or "pointer" in content.lower() or "pointer_array_data" in content
