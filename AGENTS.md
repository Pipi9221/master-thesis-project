# Project Instructions

## Positioning

This project is a thesis prototype for metamorphic testing of C program slicing
tools (Frama-C and DG/llvm-slicer). The pipeline supports MR1, MR2, MR3, and
MR4 across both tools. It is not a generic mutation framework and it is not the
place to re-implement the full historical `Slicing` pipeline.

Phase 1 (MR1-MR4 oracles + seed sources + bug database) is complete. Phase 2
focuses on batch experiments and thesis writing.

## Authority Order

Use these project files in this order when they conflict:

1. `docs/specs/mr2-mr3-ast-mutator.md`
2. `AGENTS.md`
3. `docs/methodology/`

## Locked Phase-1 Decisions

- Scope is limited to `MR2` and `MR3`.
- `MR1` stays with Creal.
- `MR4` remains a later slicing-protocol task.
- The AST backend is `Clang LibTooling`.
- The first phase assumes variable-based slicing criteria and prioritizes
  integer-scalar criterion-aware payloads.

## Implementation Guardrails

- Final mutation logic must be AST-driven. Do not treat the legacy regex-based
  injection scripts under `Slicing/creal/coverage/` as production logic.
- Every accepted mutant must pass compilation validation.
- Every accepted mutant must pass behavior-equivalence validation against its
  seed.
- Randomized pattern or site selection is allowed only when it is replayable
  from metadata.
- Record both success and failure outcomes with explicit failure reasons.
- Prefer adding new scope only after the formal spec is updated.

## Repository Conventions

- `tooling/` is reserved for the `Clang LibTooling` executable and AST rewrite
  code.
- `src/` is reserved for orchestration, metadata, pattern selection, and
  validation helpers around the tooling layer.
- `experiment/` and `artifacts/` contain reproducible research assets rather
  than hand-maintained source code.
