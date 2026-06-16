from __future__ import annotations

from pathlib import Path

from common.criteria import CriteriaSpec
from common.metadata import MutationMeta, SelectedSite, ValidationStatus
from oracles.dg_evidence import build_dg_evidence
from slicers.base import SliceOutcome


def test_build_dg_evidence_collects_artifacts_and_symbol_hits(tmp_path: Path) -> None:
    seed_slice_path = tmp_path / "seed_sliced.ll"
    mutant_slice_path = tmp_path / "mutant_sliced.ll"
    seed_debug_path = tmp_path / "seed-debug.ll"
    mutant_debug_path = tmp_path / "mutant-debug.ll"
    seed_bc_path = tmp_path / "seed.bc"
    mutant_bc_path = tmp_path / "mutant.bc"
    seed_sliced_bc_path = tmp_path / "seed.sliced.bc"
    mutant_sliced_bc_path = tmp_path / "mutant.sliced.bc"

    seed_slice_path.write_text(
        "define i32 @main() {\n"
        "  %1 = load i32, i32* @g_keep\n"
        "  ret i32 0\n"
        "}\n",
        encoding="utf-8",
    )
    mutant_slice_path.write_text(
        "define i32 @main() {\n"
        "  %1 = load i32, i32* @g_keep\n"
        "  %2 = add i32 %1, mr2_tmp_19\n"
        "  ret i32 0\n"
        "}\n",
        encoding="utf-8",
    )
    seed_debug_path.write_text(
        "; SLICING CRITERION\n"
        "%1 = load i32, i32* @g_keep\n",
        encoding="utf-8",
    )
    mutant_debug_path.write_text(
        "; SLICING CRITERION\n"
        "%1 = load i32, i32* @g_keep\n"
        "%2 = add i32 %1, mr2_tmp_19\n",
        encoding="utf-8",
    )
    seed_bc_path.write_bytes(b"BC")
    mutant_bc_path.write_bytes(b"BC")
    seed_sliced_bc_path.write_bytes(b"BC")
    mutant_sliced_bc_path.write_bytes(b"BC")

    criteria = CriteriaSpec(
        criterion_kind="value",
        variables=("g_keep",),
        seed_id="case-1",
        program_point="main:return",
    )
    meta = MutationMeta(
        mr="MR2",
        seed_id="case-1",
        rng_seed=19,
        selected_pattern="local_assignment_chain",
        selected_site=SelectedSite(function_name="main", node_kind="CompoundStmt", line=3),
        inserted_symbols=("mr2_tmp_19",),
        attempt_count=1,
        validation_status=ValidationStatus.NOT_RUN,
        failure_reason=None,
    )
    seed_slice = SliceOutcome(
        tool="dg",
        input_path=tmp_path / "seed.c",
        output_path=seed_slice_path,
        command=("llvm-slicer", "-c", ":g_keep", "seed.bc"),
        auxiliary_commands={
            "compile": ["clang-14", "-g"],
            "disassemble": ["llvm-dis-14", "seed.sliced.bc"],
        },
        artifacts={
            "bitcode": str(seed_bc_path),
            "sliced_bitcode": str(seed_sliced_bc_path),
            "annotated_ir": str(seed_debug_path),
        },
        exit_code=0,
        stdout="",
        stderr=(
            "SC: Matched ':g_keep' to:\n"
            "Matched line 4 with variable g_keep to:\n"
            "[llvm-slicer] Sliced away 3 from 12 nodes in DG\n"
        ),
        slice_ok=True,
        failure_reason=None,
    )
    mutant_slice = SliceOutcome(
        tool="dg",
        input_path=tmp_path / "mutant.c",
        output_path=mutant_slice_path,
        command=("llvm-slicer", "-c", ":g_keep", "mutant.bc"),
        auxiliary_commands={
            "compile": ["clang-14", "-g"],
            "disassemble": ["llvm-dis-14", "mutant.sliced.bc"],
        },
        artifacts={
            "bitcode": str(mutant_bc_path),
            "sliced_bitcode": str(mutant_sliced_bc_path),
            "annotated_ir": str(mutant_debug_path),
        },
        exit_code=0,
        stdout="",
        stderr=(
            "SC: Matched ':g_keep' to:\n"
            "Matched line 5 with variable g_keep to:\n"
            "[llvm-slicer] Sliced away 4 from 14 nodes in DG\n"
        ),
        slice_ok=True,
        failure_reason=None,
    )

    evidence = build_dg_evidence(
        criteria=criteria,
        meta=meta,
        seed_slice=seed_slice,
        mutant_slice=mutant_slice,
        retained_symbols=("mr2_tmp_19",),
    )

    assert evidence["kind"] == "dg_structured_evidence_v1"
    assert evidence["criterion_variables"] == ["g_keep"]
    assert evidence["program_point"] == "main:return"
    assert evidence["mutant"]["criterion"] == ":g_keep"
    assert evidence["mutant"]["retained_inserted_symbols"] == ["mr2_tmp_19"]
    assert evidence["mutant"]["stderr_summary"]["sliced_away"] == {
        "removed_nodes": 4,
        "total_nodes": 14,
    }
    assert evidence["mutant"]["artifact_hits"]["slice_ir"]["mr2_tmp_19"]["count"] == 1
    assert evidence["mutant"]["artifact_hits"]["annotated_ir"]["mr2_tmp_19"]["count"] == 1
