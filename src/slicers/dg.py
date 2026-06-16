from __future__ import annotations

import re
from pathlib import Path

from common.runner import CommandRunner

from .base import SliceOutcome, SliceRequest


_IDENTIFIER_RE = re.compile(r"\b([A-Za-z_]\w*)\b")


class DGAdapter:
    def __init__(
        self,
        runner: CommandRunner,
        *,
        binary: str = "llvm-slicer",
        clang_binary: str = "clang-14",
        llvm_dis_binary: str = "llvm-dis-14",
        compile_args: tuple[str, ...] = ("-g", "-O0"),
        include_dirs: tuple[str, ...] = (),
        extra_args: tuple[str, ...] = ("-annotate", "slice"),
    ) -> None:
        self._runner = runner
        self._binary = binary
        self._clang_binary = clang_binary
        self._llvm_dis_binary = llvm_dis_binary
        self._compile_args = compile_args
        self._include_dirs = include_dirs
        self._extra_args = extra_args

    def build_compile_command(self, request: SliceRequest, bitcode_path: Path) -> list[str]:
        return [
            self._clang_binary,
            *self._compile_args,
            *self._build_include_args(),
            "-emit-llvm",
            "-c",
            str(request.input_path),
            "-o",
            str(bitcode_path),
        ]

    def _build_include_args(self) -> list[str]:
        include_args: list[str] = []
        for directory in self._include_dirs:
            include_args.extend(["-I", directory])
        return include_args

    def build_slice_command(
        self,
        bitcode_path: Path,
        sliced_bitcode_path: Path,
        criterion: str,
    ) -> list[str]:
        return [
            self._binary,
            *self._extra_args,
            "-c",
            criterion,
            str(bitcode_path),
            "-o",
            str(sliced_bitcode_path),
        ]

    def build_disassemble_command(self, sliced_bitcode_path: Path, output_path: Path) -> list[str]:
        return [
            self._llvm_dis_binary,
            str(sliced_bitcode_path),
            "-o",
            str(output_path),
        ]

    def slice(self, request: SliceRequest) -> SliceOutcome:
        request.output_path.parent.mkdir(parents=True, exist_ok=True)
        bitcode_path = request.output_path.with_name(f"{request.input_path.stem}.bc")
        sliced_bitcode_path = request.output_path.with_name(
            f"{request.input_path.stem}.sliced.bc"
        )
        annotated_ir_path = bitcode_path.with_name(f"{bitcode_path.stem}-debug.ll")
        criterion = self._resolve_criterion(request)

        compile_command = self.build_compile_command(request, bitcode_path)
        compile_result = self._runner.run(compile_command)
        if compile_result.exit_code != 0:
            return SliceOutcome(
                tool=request.tool,
                input_path=request.input_path,
                output_path=request.output_path,
                command=tuple(compile_command),
                exit_code=compile_result.exit_code,
                stdout=compile_result.stdout,
                stderr=compile_result.stderr,
                slice_ok=False,
                failure_reason="compile_failed",
                artifacts=self._build_artifacts(
                    bitcode_path=bitcode_path,
                    sliced_bitcode_path=sliced_bitcode_path,
                    annotated_ir_path=annotated_ir_path,
                ),
            )

        slice_command = self.build_slice_command(bitcode_path, sliced_bitcode_path, criterion)
        slice_result = self._runner.run(slice_command)
        if slice_result.exit_code != 0:
            return SliceOutcome(
                tool=request.tool,
                input_path=request.input_path,
                output_path=request.output_path,
                command=tuple(slice_command),
                exit_code=slice_result.exit_code,
                stdout=slice_result.stdout,
                stderr=slice_result.stderr,
                slice_ok=False,
                failure_reason="slice_failed",
                auxiliary_commands={"compile": compile_command},
                artifacts=self._build_artifacts(
                    bitcode_path=bitcode_path,
                    sliced_bitcode_path=sliced_bitcode_path,
                    annotated_ir_path=annotated_ir_path,
                ),
            )

        disassemble_command = self.build_disassemble_command(sliced_bitcode_path, request.output_path)
        disassemble_result = self._runner.run(disassemble_command)
        if disassemble_result.exit_code != 0:
            return SliceOutcome(
                tool=request.tool,
                input_path=request.input_path,
                output_path=request.output_path,
                command=tuple(disassemble_command),
                exit_code=disassemble_result.exit_code,
                stdout=disassemble_result.stdout,
                stderr=disassemble_result.stderr,
                slice_ok=False,
                failure_reason="disassemble_failed",
                auxiliary_commands={
                    "compile": compile_command,
                    "slice": slice_command,
                },
                artifacts=self._build_artifacts(
                    bitcode_path=bitcode_path,
                    sliced_bitcode_path=sliced_bitcode_path,
                    annotated_ir_path=annotated_ir_path,
                ),
            )

        if not request.output_path.exists():
            return SliceOutcome(
                tool=request.tool,
                input_path=request.input_path,
                output_path=request.output_path,
                command=tuple(disassemble_command),
                exit_code=disassemble_result.exit_code,
                stdout=disassemble_result.stdout,
                stderr=disassemble_result.stderr,
                slice_ok=False,
                failure_reason="missing_output",
                auxiliary_commands={
                    "compile": compile_command,
                    "slice": slice_command,
                },
                artifacts=self._build_artifacts(
                    bitcode_path=bitcode_path,
                    sliced_bitcode_path=sliced_bitcode_path,
                    annotated_ir_path=annotated_ir_path,
                ),
            )

        return SliceOutcome(
            tool=request.tool,
            input_path=request.input_path,
            output_path=request.output_path,
            command=tuple(slice_command),
            exit_code=slice_result.exit_code,
            stdout=slice_result.stdout,
            stderr=slice_result.stderr,
            slice_ok=True,
            failure_reason=None,
            auxiliary_commands={
                "compile": compile_command,
                "disassemble": disassemble_command,
            },
            artifacts=self._build_artifacts(
                bitcode_path=bitcode_path,
                sliced_bitcode_path=sliced_bitcode_path,
                annotated_ir_path=annotated_ir_path,
            ),
        )

    def _build_artifacts(
        self,
        *,
        bitcode_path: Path,
        sliced_bitcode_path: Path,
        annotated_ir_path: Path,
    ) -> dict[str, str]:
        artifacts = {
            "bitcode": str(bitcode_path),
            "sliced_bitcode": str(sliced_bitcode_path),
        }
        if annotated_ir_path.exists():
            artifacts["annotated_ir"] = str(annotated_ir_path)
        return artifacts

    def _resolve_criterion(self, request: SliceRequest) -> str:
        if request.criterion_override is not None:
            return request.criterion_override
        criteria = [self._resolve_single_variable(request, variable) for variable in request.variables]
        return ",".join(criteria)

    def _resolve_single_variable(self, request: SliceRequest, variable: str) -> str:
        source_lines = request.input_path.read_text(encoding="utf-8-sig").splitlines()
        if self._is_global_variable(source_lines, variable):
            return f":{variable}"

        line_number = self._resolve_line_number(source_lines, variable, request.program_point)
        return f"{line_number}:{variable}"

    def _is_global_variable(self, source_lines: list[str], variable: str) -> bool:
        marker = f"main("
        for line in source_lines:
            if marker in line:
                return False
            stripped = line.strip()
            if not stripped or stripped.startswith("#"):
                continue
            if line[:1].isspace():
                continue
            if "(" in stripped and ")" in stripped and stripped.endswith("{"):
                continue
            if re.search(rf"\b{re.escape(variable)}\b", stripped):
                return True
        return False

    def _resolve_line_number(
        self,
        source_lines: list[str],
        variable: str,
        program_point: str | None,
    ) -> int:
        if program_point is not None:
            direct_line = self._parse_direct_line_program_point(program_point)
            if direct_line is not None:
                return direct_line
            if program_point == "main:return":
                return self._find_main_return_line(source_lines, variable)

        fallback_line = self._find_last_use_line(source_lines, variable)
        if fallback_line is None:
            raise ValueError(f"unable to resolve dg criterion line for variable '{variable}'")
        return fallback_line

    def _parse_direct_line_program_point(self, program_point: str) -> int | None:
        if program_point.startswith("line:"):
            return int(program_point.split(":", 1)[1])
        return None

    def _find_main_return_line(self, source_lines: list[str], variable: str) -> int:
        in_main = False
        brace_depth = 0
        matched_return_line: int | None = None
        for index, line in enumerate(source_lines, start=1):
            if not in_main and re.search(r"\bmain\s*\(", line):
                in_main = True
            if not in_main:
                continue

            brace_depth += line.count("{")
            if "return" in line and re.search(rf"\b{re.escape(variable)}\b", line):
                matched_return_line = index
            brace_depth -= line.count("}")
            if in_main and brace_depth <= 0:
                break

        if matched_return_line is None:
            return self._find_last_use_line(source_lines, variable) or 1
        return matched_return_line

    def _find_last_use_line(self, source_lines: list[str], variable: str) -> int | None:
        pattern = re.compile(rf"\b{re.escape(variable)}\b")
        last_match: int | None = None
        for index, line in enumerate(source_lines, start=1):
            if not pattern.search(line):
                continue
            if self._line_is_plain_declaration(line, variable):
                continue
            last_match = index
        return last_match

    def _line_is_plain_declaration(self, line: str, variable: str) -> bool:
        stripped = line.strip().rstrip(";")
        if not stripped or "(" in stripped or "*" in stripped or "[" in stripped:
            return False
        tokens = _IDENTIFIER_RE.findall(stripped)
        if not tokens or tokens[-1] != variable:
            return False
        return "=" not in stripped
