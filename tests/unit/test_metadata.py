from pathlib import Path

from common.metadata import (
    MutationMeta,
    SelectedSite,
    ValidationStatus,
    load_mutation_meta,
    write_mutation_meta,
)


def test_mutation_meta_roundtrip_preserves_replay_fields(tmp_path: Path) -> None:
    meta = MutationMeta(
        mr="MR2",
        seed_id="case_01",
        rng_seed=17,
        selected_pattern="local_assignment_chain",
        selected_site=SelectedSite(
            function_name="main",
            node_kind="CompoundStmt",
            line=14,
            column=5,
            source_offset=128,
        ),
        inserted_symbols=("mr2_tmp_abcd", "mr2_sink_wxyz"),
        attempt_count=2,
        validation_status=ValidationStatus.SUCCESS,
        failure_reason=None,
        failure_history=("compile_failed",),
    )
    meta_path = tmp_path / "mutation_meta.json"

    write_mutation_meta(meta_path, meta)

    assert load_mutation_meta(meta_path) == meta


def test_mutation_meta_roundtrip_supports_not_run_status(tmp_path: Path) -> None:
    meta = MutationMeta(
        mr="MR3",
        seed_id="case_02",
        rng_seed=29,
        selected_pattern="if_zero_wrapper",
        selected_site=SelectedSite(
            function_name="main",
            node_kind="BinaryOperator",
            line=7,
            column=5,
            source_offset=52,
        ),
        inserted_symbols=("mr3_tmp_29",),
        attempt_count=1,
        validation_status=ValidationStatus.NOT_RUN,
        failure_reason=None,
        failure_history=(),
    )
    meta_path = tmp_path / "mutation_meta.json"

    write_mutation_meta(meta_path, meta)

    assert load_mutation_meta(meta_path) == meta
