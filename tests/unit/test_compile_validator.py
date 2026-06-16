from common.runner import CommandRunner, WslCommandRunner
from common.validation import CommandResult
from validators.compile_validator import CompileOutcome, CompileValidator


class StubRunner(CommandRunner):
    def __init__(self, result: CommandResult) -> None:
        self._result = result
        self.commands: list[list[str]] = []

    def run(self, command: list[str]) -> CommandResult:
        self.commands.append(command)
        return self._result


def test_compile_validator_treats_zero_exit_code_as_success() -> None:
    runner = StubRunner(CommandResult(exit_code=0, stdout="", stderr=""))
    validator = CompileValidator(runner)

    outcome = validator.validate(["clang", "-fsyntax-only", "seed.c"])

    assert outcome == CompileOutcome(
        compile_ok=True,
        command_result=CommandResult(exit_code=0, stdout="", stderr=""),
    )
    assert runner.commands == [["clang", "-fsyntax-only", "seed.c"]]


def test_compile_validator_treats_non_zero_exit_code_as_failure() -> None:
    runner = StubRunner(CommandResult(exit_code=1, stdout="", stderr="fatal error"))
    validator = CompileValidator(runner)

    outcome = validator.validate(["clang", "-fsyntax-only", "seed.c"])

    assert outcome == CompileOutcome(
        compile_ok=False,
        command_result=CommandResult(exit_code=1, stdout="", stderr="fatal error"),
    )


def test_wsl_command_runner_wraps_argv_for_bash() -> None:
    runner = WslCommandRunner()

    wrapped = runner.wrap(["/usr/lib/llvm-14/bin/clang", "-c", "/mnt/d/work dir/seed.c"])

    assert wrapped == [
        "wsl",
        "bash",
        "-lc",
        "/usr/lib/llvm-14/bin/clang -c '/mnt/d/work dir/seed.c'",
    ]
