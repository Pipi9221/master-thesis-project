from pathlib import Path

from common.validation import CommandResult
from slicers.base import SliceRequest
from slicers.frama import FramaAdapter


class RecordingRunner:
    def __init__(self, result: CommandResult) -> None:
        self._result = result
        self.commands: list[list[str]] = []

    def run(self, command: list[str]) -> CommandResult:
        self.commands.append(command)
        return self._result


def test_frama_adapter_builds_slice_value_command(tmp_path: Path) -> None:
    runner = RecordingRunner(CommandResult(exit_code=0, stdout="", stderr=""))
    output_path = tmp_path / "seed_sliced.c"
    output_path.write_text(
        (
            "int g_keep;\n"
            "int helper(void) { return g_keep + 1; }\n"
            "int main(void) { g_keep = helper(); return g_keep; }\n"
        ),
        encoding="utf-8",
    )
    adapter = FramaAdapter(runner=runner)
    request = SliceRequest(
        tool="frama",
        input_path=tmp_path / "seed.c",
        output_path=output_path,
        variables=("g_keep", "g_other"),
    )

    outcome = adapter.slice(request)

    assert runner.commands == [
        [
            "frama-c",
            str(request.input_path),
            "-slice-value",
            "g_keep,g_other",
            "-then-on",
            "Slicing export",
            "-print",
            "-ocode",
            str(request.output_path),
        ]
    ]
    assert outcome.slice_ok is True


def test_frama_adapter_marks_nonzero_exit_as_tool_failure(tmp_path: Path) -> None:
    runner = RecordingRunner(CommandResult(exit_code=1, stdout="", stderr="bad run"))
    adapter = FramaAdapter(runner=runner)
    request = SliceRequest(
        tool="frama",
        input_path=tmp_path / "mutant.c",
        output_path=tmp_path / "mutant_sliced.c",
        variables=("g_keep",),
    )

    outcome = adapter.slice(request)

    assert outcome.slice_ok is False
    assert outcome.failure_reason == "tool_error"


def test_frama_adapter_marks_tiny_main_only_slice_as_empty(tmp_path: Path) -> None:
    runner = RecordingRunner(CommandResult(exit_code=0, stdout="", stderr=""))
    output_path = tmp_path / "mutant_sliced.c"
    output_path.write_text("int main(void) {\n}\n", encoding="utf-8")
    adapter = FramaAdapter(runner=runner)
    request = SliceRequest(
        tool="frama",
        input_path=tmp_path / "mutant.c",
        output_path=output_path,
        variables=("g_keep",),
    )

    outcome = adapter.slice(request)

    assert outcome.slice_ok is False
    assert outcome.failure_reason == "empty_slice"
