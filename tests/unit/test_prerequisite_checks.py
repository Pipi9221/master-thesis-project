"""Unit tests for prerequisite checks and retry logic in generate_mutants."""

from __future__ import annotations

import json
from pathlib import Path

import pytest

from common.validation import CommandResult
from pipeline.generate_mutants import (
    _default_max_retries,
    _record_failure,
    _update_retry_meta,
    _run_mutant_runtime_check,
    _check_behavior_equivalence,
    _update_mr1_behavior,
)


# ---------------------------------------------------------------------------
# _default_max_retries
# ---------------------------------------------------------------------------


class TestDefaultMaxRetries:
    def test_mr2_default(self) -> None:
        assert _default_max_retries("MR2") == 20

    def test_mr3_default(self) -> None:
        assert _default_max_retries("MR3") == 30

    def test_mr1_default(self) -> None:
        assert _default_max_retries("MR1") == 1

    def test_mr4_default(self) -> None:
        assert _default_max_retries("MR4") == 1

    def test_unknown_mr_default(self) -> None:
        assert _default_max_retries("MR99") == 1


# ---------------------------------------------------------------------------
# _record_failure
# ---------------------------------------------------------------------------


class TestRecordFailure:
    def test_writes_failure_meta(self, tmp_path: Path) -> None:
        case_dir = tmp_path / "case_001"
        case_dir.mkdir()

        _record_failure(
            case_dir=case_dir,
            seed_id="csmith_0001",
            mr="MR2",
            max_retries=3,
            failure_history=[
                {"retry": 0, "phase": "compile_gate", "exit_code": 1},
                {"retry": 1, "phase": "compile_gate", "exit_code": 1},
                {"retry": 2, "phase": "compile_gate", "exit_code": 1},
            ],
            last_compile_check={"compile_ok": False, "exit_code": 1},
        )

        meta_path = case_dir / "mutation_meta.json"
        assert meta_path.exists()
        meta = json.loads(meta_path.read_text(encoding="utf-8"))
        assert meta["retries_exhausted"] is True
        assert meta["retry_count"] == 3
        assert meta["failure_reason"] == "all_retries_exhausted"
        assert len(meta["failure_history"]) == 3
        assert meta["validation_status"] == "failed_compile"

    def test_failure_meta_without_compile_check(self, tmp_path: Path) -> None:
        case_dir = tmp_path / "case_002"
        case_dir.mkdir()

        _record_failure(
            case_dir=case_dir,
            seed_id="llm_online_0001",
            mr="MR3",
            max_retries=5,
            failure_history=[{"retry": 0, "phase": "mutate", "exit_code": 1}],
            last_compile_check=None,
        )

        meta = json.loads((case_dir / "mutation_meta.json").read_text(encoding="utf-8"))
        assert meta["compile_check"] is None
        assert meta["retries_exhausted"] is True


# ---------------------------------------------------------------------------
# _update_retry_meta
# ---------------------------------------------------------------------------


class TestUpdateRetryMeta:
    def test_updates_existing_meta(self, tmp_path: Path) -> None:
        meta_path = tmp_path / "mutation_meta.json"
        initial = {
            "mr": "MR2",
            "seed_id": "test",
            "rng_seed": 17,
            "selected_pattern": "noise_inject",
            "inserted_symbols": ["_noise_var"],
        }
        meta_path.write_text(json.dumps(initial, indent=2) + "\n", encoding="utf-8")

        _update_retry_meta(
            meta_path,
            retry_count=3,
            retries_exhausted=False,
            failure_history=[{"retry": 0, "phase": "compile_gate", "exit_code": 1}],
        )

        updated = json.loads(meta_path.read_text(encoding="utf-8"))
        assert updated["retry_count"] == 3
        assert updated["retries_exhausted"] is False
        assert updated["validation_status"] == "compile_ok"
        assert len(updated["failure_history"]) == 1

    def test_noop_when_meta_missing(self, tmp_path: Path) -> None:
        meta_path = tmp_path / "nonexistent.json"
        # Should not raise
        _update_retry_meta(
            meta_path,
            retry_count=1,
            retries_exhausted=True,
            failure_history=[],
        )

    def test_marks_failed_when_exhausted(self, tmp_path: Path) -> None:
        meta_path = tmp_path / "mutation_meta.json"
        initial = {"mr": "MR3", "seed_id": "x"}
        meta_path.write_text(json.dumps(initial) + "\n", encoding="utf-8")

        _update_retry_meta(
            meta_path,
            retry_count=10,
            retries_exhausted=True,
            failure_history=[],
        )

        updated = json.loads(meta_path.read_text(encoding="utf-8"))
        assert updated["retries_exhausted"] is True
        # When exhausted, validation_status should NOT be set to compile_ok
        assert updated.get("validation_status") != "compile_ok"

    def test_records_run_check(self, tmp_path: Path) -> None:
        meta_path = tmp_path / "mutation_meta.json"
        initial = {"mr": "MR2", "seed_id": "test"}
        meta_path.write_text(json.dumps(initial) + "\n", encoding="utf-8")

        _update_retry_meta(
            meta_path,
            retry_count=1,
            retries_exhausted=False,
            failure_history=[],
            validation_status="run_ok",
            run_check={"run_ok": True, "phase": "execute", "exit_code": 0},
        )

        updated = json.loads(meta_path.read_text(encoding="utf-8"))
        assert updated["validation_status"] == "run_ok"
        assert updated["run_check"]["run_ok"] is True

    def test_records_behavior_check(self, tmp_path: Path) -> None:
        meta_path = tmp_path / "mutation_meta.json"
        initial = {"mr": "MR2", "seed_id": "test"}
        meta_path.write_text(json.dumps(initial) + "\n", encoding="utf-8")

        behavior = {"behavior_ok": True, "phase": "compare", "seed_exit_code": 0, "mutant_exit_code": 0}
        _update_retry_meta(
            meta_path,
            retry_count=1,
            retries_exhausted=False,
            failure_history=[],
            validation_status="behavior_ok",
            behavior_check=behavior,
        )

        updated = json.loads(meta_path.read_text(encoding="utf-8"))
        assert updated["validation_status"] == "behavior_ok"
        assert updated["behavior_check"]["behavior_ok"] is True


# ---------------------------------------------------------------------------
# _run_mutant_runtime_check
# ---------------------------------------------------------------------------


class FakeRunner:
    """Simple fake runner for testing runtime checks."""

    def __init__(self, *, compile_ok: bool = True, run_exit_code: int = 0) -> None:
        self._compile_ok = compile_ok
        self._run_exit_code = run_exit_code
        self.commands: list[list[str]] = []

    def run(self, command: list[str]) -> CommandResult:
        self.commands.append(command)
        # Detect compile vs run by checking for the "-o" flag token
        is_compile = "-o" in command
        if is_compile:
            if self._compile_ok:
                return CommandResult(exit_code=0, stdout="", stderr="")
            return CommandResult(exit_code=1, stdout="", stderr="compile error")
        # Run command
        return CommandResult(exit_code=self._run_exit_code, stdout="output", stderr="")


class TestRunMutantRuntimeCheck:
    def test_compile_and_run_succeeds(self, tmp_path: Path) -> None:
        runner = FakeRunner(compile_ok=True, run_exit_code=0)
        result = _run_mutant_runtime_check(
            runner=runner,
            clang_binary="clang",
            include_dir="/usr/include",
            mutant_path=tmp_path / "mutant.c",
            work_dir=tmp_path,
        )
        assert result["run_ok"] is True
        assert result["exit_code"] == 0

    def test_compile_fails(self, tmp_path: Path) -> None:
        runner = FakeRunner(compile_ok=False, run_exit_code=0)
        result = _run_mutant_runtime_check(
            runner=runner,
            clang_binary="clang",
            include_dir="/usr/include",
            mutant_path=tmp_path / "mutant.c",
            work_dir=tmp_path,
        )
        assert result["run_ok"] is False
        assert result["phase"] == "compile_for_run"

    def test_run_crashes(self, tmp_path: Path) -> None:
        runner = FakeRunner(compile_ok=True, run_exit_code=1)
        result = _run_mutant_runtime_check(
            runner=runner,
            clang_binary="clang",
            include_dir="/usr/include",
            mutant_path=tmp_path / "mutant.c",
            work_dir=tmp_path,
        )
        assert result["run_ok"] is False
        assert result["exit_code"] == 1


# ---------------------------------------------------------------------------
# _check_behavior_equivalence
# ---------------------------------------------------------------------------


class BehaviorEquivalenceRunner:
    """Fake runner that simulates compile+run for both seed and mutant."""

    def __init__(
        self,
        *,
        seed_compile_ok: bool = True,
        mutant_compile_ok: bool = True,
        seed_exit: int = 0,
        mutant_exit: int = 0,
        seed_stdout: str = "42\n",
        mutant_stdout: str = "42\n",
    ) -> None:
        self._seed_compile_ok = seed_compile_ok
        self._mutant_compile_ok = mutant_compile_ok
        self._seed_exit = seed_exit
        self._mutant_exit = mutant_exit
        self._seed_stdout = seed_stdout
        self._mutant_stdout = mutant_stdout
        self._call_count = 0

    def run(self, command: list[str]) -> CommandResult:
        self._call_count += 1

        # Compile commands
        if "-o" in command:
            if "seed_run" in str(command):
                if not self._seed_compile_ok:
                    return CommandResult(exit_code=1, stdout="", stderr="seed compile error")
            elif "mutant_behavior_run" in str(command):
                if not self._mutant_compile_ok:
                    return CommandResult(exit_code=1, stdout="", stderr="mutant compile error")
            return CommandResult(exit_code=0, stdout="", stderr="")

        # Run commands
        cmd_str = str(command)
        if "seed_run" in cmd_str:
            return CommandResult(exit_code=self._seed_exit, stdout=self._seed_stdout, stderr="")
        if "mutant_behavior_run" in cmd_str:
            return CommandResult(exit_code=self._mutant_exit, stdout=self._mutant_stdout, stderr="")

        return CommandResult(exit_code=0, stdout="", stderr="")


class TestCheckBehaviorEquivalence:
    def test_equivalent_behaviors_pass(self, tmp_path: Path) -> None:
        runner = BehaviorEquivalenceRunner()
        result = _check_behavior_equivalence(
            runner=runner,
            clang_binary="clang",
            include_dir="/usr/include",
            seed_path=tmp_path / "seed.c",
            mutant_path=tmp_path / "mutant.c",
            work_dir=tmp_path,
        )
        assert result["behavior_ok"] is True
        assert result["phase"] == "compare"
        assert result["exit_equal"] is True
        assert result["stdout_equal"] is True

    def test_different_exit_codes_fail(self, tmp_path: Path) -> None:
        runner = BehaviorEquivalenceRunner(seed_exit=0, mutant_exit=1)
        result = _check_behavior_equivalence(
            runner=runner,
            clang_binary="clang",
            include_dir="/usr/include",
            seed_path=tmp_path / "seed.c",
            mutant_path=tmp_path / "mutant.c",
            work_dir=tmp_path,
        )
        assert result["behavior_ok"] is False
        assert result["exit_equal"] is False

    def test_different_stdout_fails(self, tmp_path: Path) -> None:
        runner = BehaviorEquivalenceRunner(
            seed_stdout="hello\n", mutant_stdout="world\n"
        )
        result = _check_behavior_equivalence(
            runner=runner,
            clang_binary="clang",
            include_dir="/usr/include",
            seed_path=tmp_path / "seed.c",
            mutant_path=tmp_path / "mutant.c",
            work_dir=tmp_path,
        )
        assert result["behavior_ok"] is False
        assert result["stdout_equal"] is False

    def test_seed_compile_failure(self, tmp_path: Path) -> None:
        runner = BehaviorEquivalenceRunner(seed_compile_ok=False)
        result = _check_behavior_equivalence(
            runner=runner,
            clang_binary="clang",
            include_dir="/usr/include",
            seed_path=tmp_path / "seed.c",
            mutant_path=tmp_path / "mutant.c",
            work_dir=tmp_path,
        )
        assert result["behavior_ok"] is False
        assert result["phase"] == "seed_compile"

    def test_mutant_compile_failure(self, tmp_path: Path) -> None:
        runner = BehaviorEquivalenceRunner(mutant_compile_ok=False)
        result = _check_behavior_equivalence(
            runner=runner,
            clang_binary="clang",
            include_dir="/usr/include",
            seed_path=tmp_path / "seed.c",
            mutant_path=tmp_path / "mutant.c",
            work_dir=tmp_path,
        )
        assert result["behavior_ok"] is False
        assert result["phase"] == "mutant_compile"


# ---------------------------------------------------------------------------
# _update_mr1_behavior
# ---------------------------------------------------------------------------


class TestUpdateMr1Behavior:
    def test_updates_meta_with_behavior_ok(self, tmp_path: Path) -> None:
        meta_path = tmp_path / "mutation_meta.json"
        initial = {
            "mr": "MR1",
            "seed_id": "test",
            "validation_status": "compile_ok",
        }
        meta_path.write_text(json.dumps(initial, indent=2) + "\n", encoding="utf-8")

        behavior = {
            "behavior_ok": True,
            "phase": "compare",
            "seed_exit_code": 0,
            "mutant_exit_code": 0,
            "exit_equal": True,
            "stdout_equal": True,
        }
        _update_mr1_behavior(meta_path, behavior)

        updated = json.loads(meta_path.read_text(encoding="utf-8"))
        assert updated["validation_status"] == "behavior_ok"
        assert updated["behavior_check"]["behavior_ok"] is True

    def test_updates_meta_with_mismatch(self, tmp_path: Path) -> None:
        meta_path = tmp_path / "mutation_meta.json"
        initial = {"mr": "MR1", "seed_id": "test"}
        meta_path.write_text(json.dumps(initial) + "\n", encoding="utf-8")

        behavior = {
            "behavior_ok": False,
            "phase": "compare",
            "seed_exit_code": 0,
            "mutant_exit_code": 1,
            "exit_equal": False,
            "stdout_equal": False,
        }
        _update_mr1_behavior(meta_path, behavior)

        updated = json.loads(meta_path.read_text(encoding="utf-8"))
        assert updated["validation_status"] == "behavior_mismatch"

    def test_noop_when_meta_missing(self, tmp_path: Path) -> None:
        meta_path = tmp_path / "nonexistent.json"
        _update_mr1_behavior(meta_path, {"behavior_ok": True})
        # Should not raise


# ---------------------------------------------------------------------------
# Config-level defaults
# ---------------------------------------------------------------------------


class TestGenerateMutantsConfigRetry:
    def test_config_has_max_retries(self) -> None:
        from pipeline.generate_mutants import GenerateMutantsConfig

        cfg = GenerateMutantsConfig(
            seed_source="csmith",
            mr="MR2",
            output_dir=Path("/tmp/test"),
            max_retries=10,
        )
        assert cfg.max_retries == 10

    def test_config_default_max_retries_is_zero(self) -> None:
        from pipeline.generate_mutants import GenerateMutantsConfig

        cfg = GenerateMutantsConfig(
            seed_source="csmith",
            mr="MR2",
            output_dir=Path("/tmp/test"),
        )
        assert cfg.max_retries == 0
