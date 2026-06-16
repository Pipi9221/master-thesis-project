from __future__ import annotations

from common.runner import CommandRunner

from .base import SliceOutcome, SliceRequest


class FramaAdapter:
    def __init__(
        self,
        runner: CommandRunner,
        *,
        binary: str = "frama-c",
        extra_args: tuple[str, ...] = (),
        post_input_args: tuple[str, ...] = (),
    ) -> None:
        self._runner = runner
        self._binary = binary
        self._extra_args = extra_args
        self._post_input_args = post_input_args

    def build_command(self, request: SliceRequest) -> list[str]:
        return [
            self._binary,
            *self._extra_args,
            str(request.input_path),
            *self._post_input_args,
            "-slice-value",
            ",".join(request.variables),
            "-then-on",
            "Slicing export",
            "-print",
            "-ocode",
            str(request.output_path),
        ]

    def slice(self, request: SliceRequest) -> SliceOutcome:
        command = self.build_command(request)
        result = self._runner.run(command)
        if result.exit_code != 0:
            return SliceOutcome(
                tool=request.tool,
                input_path=request.input_path,
                output_path=request.output_path,
                command=tuple(command),
                exit_code=result.exit_code,
                stdout=result.stdout,
                stderr=result.stderr,
                slice_ok=False,
                failure_reason="tool_error",
            )

        if not request.output_path.exists():
            return SliceOutcome(
                tool=request.tool,
                input_path=request.input_path,
                output_path=request.output_path,
                command=tuple(command),
                exit_code=result.exit_code,
                stdout=result.stdout,
                stderr=result.stderr,
                slice_ok=False,
                failure_reason="missing_output",
            )

        sliced_text = request.output_path.read_text(encoding="utf-8")
        failure_reason = None
        slice_ok = True
        if _looks_like_empty_slice(sliced_text):
            failure_reason = "empty_slice"
            slice_ok = False

        return SliceOutcome(
            tool=request.tool,
            input_path=request.input_path,
            output_path=request.output_path,
            command=tuple(command),
            exit_code=result.exit_code,
            stdout=result.stdout,
            stderr=result.stderr,
            slice_ok=slice_ok,
            failure_reason=failure_reason,
        )


def _looks_like_empty_slice(sliced_text: str) -> bool:
    nonempty_lines = []
    for raw_line in sliced_text.splitlines():
        line = raw_line.strip()
        if not line or line.startswith("/*") or line.startswith("*") or line.startswith("*/"):
            continue
        nonempty_lines.append(line)

    normalized = " ".join(nonempty_lines)
    return normalized in {
        "int main(void) { }",
        "int main() { }",
    }
