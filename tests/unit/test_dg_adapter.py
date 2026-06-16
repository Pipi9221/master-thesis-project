from __future__ import annotations

from pathlib import Path

from common.validation import CommandResult
from slicers.base import SliceRequest
from slicers.dg import DGAdapter


class RecordingRunner:
    def __init__(self, *, debug_artifact: bool = False) -> None:
        self.commands: list[list[str]] = []
        self._debug_artifact = debug_artifact

    def run(self, command: list[str]) -> CommandResult:
        self.commands.append(command)
        binary = command[0]
        if binary == "clang-14":
            output_path = Path(command[command.index("-o") + 1])
            output_path.write_bytes(b"BC")
            return CommandResult(exit_code=0, stdout="", stderr="")

        if binary == "llvm-slicer":
            output_path = Path(command[command.index("-o") + 1])
            output_path.write_bytes(b"BC")
            if self._debug_artifact:
                bitcode_path = Path(command[-3])
                debug_path = bitcode_path.with_name(f"{bitcode_path.stem}-debug.ll")
                debug_path.write_text("; annotated slice\n", encoding="utf-8")
            return CommandResult(exit_code=0, stdout="", stderr="sliced")

        if binary == "llvm-dis-14":
            output_path = Path(command[command.index("-o") + 1])
            output_path.write_text(
                "; ModuleID = 'mutant.sliced.bc'\n"
                "define i32 @main() {\n"
                "  ret i32 0\n"
                "}\n",
                encoding="utf-8",
            )
            return CommandResult(exit_code=0, stdout="", stderr="")

        raise AssertionError(f"unexpected command: {command}")


class FailingRunner:
    def __init__(self, result: CommandResult) -> None:
        self._result = result
        self.commands: list[list[str]] = []

    def run(self, command: list[str]) -> CommandResult:
        self.commands.append(command)
        return self._result


def test_dg_adapter_builds_real_command_sequence_for_main_return_criterion(
    tmp_path: Path,
) -> None:
    source_path = tmp_path / "seed.c"
    source_path.write_text(
        "int main(void) {\n"
        "    int x = 3;\n"
        "    int y = x + 1;\n"
        "    return y;\n"
        "}\n",
        encoding="utf-8",
    )
    runner = RecordingRunner(debug_artifact=True)
    adapter = DGAdapter(
        runner=runner,
        binary="llvm-slicer",
        clang_binary="clang-14",
        llvm_dis_binary="llvm-dis-14",
    )
    request = SliceRequest(
        tool="dg",
        input_path=source_path,
        output_path=tmp_path / "seed_sliced.ll",
        variables=("y",),
        program_point="main:return",
    )

    outcome = adapter.slice(request)

    bitcode_path = tmp_path / "seed.bc"
    sliced_bitcode_path = tmp_path / "seed.sliced.bc"
    assert runner.commands == [
        [
            "clang-14",
            "-g",
            "-O0",
            "-emit-llvm",
            "-c",
            str(source_path),
            "-o",
            str(bitcode_path),
        ],
        [
            "llvm-slicer",
            "-annotate",
            "slice",
            "-c",
            "4:y",
            str(bitcode_path),
            "-o",
            str(sliced_bitcode_path),
        ],
        [
            "llvm-dis-14",
            str(sliced_bitcode_path),
            "-o",
            str(request.output_path),
        ],
    ]
    assert outcome.slice_ok is True
    assert outcome.failure_reason is None
    assert request.output_path.exists()


def test_dg_adapter_uses_global_variable_criterion_without_line(tmp_path: Path) -> None:
    source_path = tmp_path / "seed.c"
    source_path.write_text(
        "int g_keep = 0;\n"
        "int main(void) {\n"
        "    g_keep = 1;\n"
        "    return g_keep;\n"
        "}\n",
        encoding="utf-8",
    )
    runner = RecordingRunner()
    adapter = DGAdapter(
        runner=runner,
        binary="llvm-slicer",
        clang_binary="clang-14",
        llvm_dis_binary="llvm-dis-14",
    )
    request = SliceRequest(
        tool="dg",
        input_path=source_path,
        output_path=tmp_path / "seed_sliced.ll",
        variables=("g_keep",),
    )

    outcome = adapter.slice(request)

    assert runner.commands[1][4] == ":g_keep"
    assert outcome.slice_ok is True


def test_dg_adapter_includes_configured_include_directories(tmp_path: Path) -> None:
    source_path = tmp_path / "seed.c"
    source_path.write_text(
        '#include "csmith.h"\n'
        "int g_keep = 0;\n"
        "int main(void) {\n"
        "    g_keep = 1;\n"
        "    return g_keep;\n"
        "}\n",
        encoding="utf-8",
    )
    runner = RecordingRunner()
    adapter = DGAdapter(
        runner=runner,
        binary="llvm-slicer",
        clang_binary="clang-14",
        llvm_dis_binary="llvm-dis-14",
        include_dirs=("/usr/include/csmith",),
    )
    request = SliceRequest(
        tool="dg",
        input_path=source_path,
        output_path=tmp_path / "seed_sliced.ll",
        variables=("g_keep",),
    )

    outcome = adapter.slice(request)

    assert runner.commands[0] == [
        "clang-14",
        "-g",
        "-O0",
        "-I",
        "/usr/include/csmith",
        "-emit-llvm",
        "-c",
        str(source_path),
        "-o",
        str(tmp_path / "seed.bc"),
    ]
    assert outcome.slice_ok is True


def test_dg_adapter_marks_compile_failure_before_slicing(tmp_path: Path) -> None:
    source_path = tmp_path / "mutant.c"
    source_path.write_text(
        "int g_keep = 0;\n"
        "int main(void) {\n"
        "    g_keep = 1;\n"
        "    return g_keep;\n"
        "}\n",
        encoding="utf-8",
    )
    runner = FailingRunner(CommandResult(exit_code=1, stdout="", stderr="compile failed"))
    adapter = DGAdapter(
        runner=runner,
        binary="llvm-slicer",
        clang_binary="clang-14",
        llvm_dis_binary="llvm-dis-14",
    )
    request = SliceRequest(
        tool="dg",
        input_path=source_path,
        output_path=tmp_path / "mutant_sliced.ll",
        variables=("g_keep",),
    )

    outcome = adapter.slice(request)

    assert runner.commands == [
        [
            "clang-14",
            "-g",
            "-O0",
            "-emit-llvm",
            "-c",
            str(request.input_path),
            "-o",
            str(tmp_path / "mutant.bc"),
        ]
    ]
    assert outcome.slice_ok is False
    assert outcome.failure_reason == "compile_failed"
