from common.validation import CommandResult, ValidationReport
from validators.behavior import BehaviorValidator


def test_behavior_validator_marks_matching_exit_and_stdout_as_equivalent() -> None:
    validator = BehaviorValidator(stdout_enabled=True)

    report = validator.compare(
        seed_result=CommandResult(exit_code=0, stdout="ok\n", stderr=""),
        mutant_result=CommandResult(exit_code=0, stdout="ok\n", stderr=""),
    )

    assert report == ValidationReport(
        compile_ok=True,
        exit_equal=True,
        stdout_equal=True,
        behavior_equivalent=True,
    )


def test_behavior_validator_can_ignore_stdout_difference_when_disabled() -> None:
    validator = BehaviorValidator(stdout_enabled=False)

    report = validator.compare(
        seed_result=CommandResult(exit_code=0, stdout="seed\n", stderr=""),
        mutant_result=CommandResult(exit_code=0, stdout="mutant\n", stderr=""),
    )

    assert report == ValidationReport(
        compile_ok=True,
        exit_equal=True,
        stdout_equal=True,
        behavior_equivalent=True,
    )
