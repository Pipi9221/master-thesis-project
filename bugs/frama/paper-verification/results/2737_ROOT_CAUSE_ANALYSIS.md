# Issue 2737 (`g_203`) Root Cause Analysis

## Current methodology result
- Target variable: `g_203`
- Source value: `18446744073709551563` (`-53` as `int16_t`)
- Sliced value: `18446744073709551557` (`-59` as `int16_t`)
- Status: mismatch

Recorded in:
- `submitted-issue-sources/methodology-compare-2026-03-27/results/summary.tsv`
- `submitted-issue-sources/methodology-compare-2026-03-27/logs/2737_source.run.log`
- `submitted-issue-sources/methodology-compare-2026-03-27/logs/2737_sliced.run.log`

## Minimal code evidence
- Original file `source.c` declares and initializes:
  - `const uint64_t l_4351[3] = {18446744073709551610UL, ...};`
- The same source path uses `l_4351[1]` in the computation that reaches final `g_203`.
- Sliced file `source_slice_g203_only.c` keeps the use, but exports:
  - `uint64_t const l_4351[3];`
- The sliced file still reads `l_4351[1]` later on the retained path to `g_203`.

Compiler evidence (`methodology-compare-2026-03-27/logs/2737_sliced.gcc.log`):
- `/generated/2737_sliced.c:127:140`: warning that `l_4351` is used uninitialized.
- `/generated/2737_sliced.c:99:18`: note showing declaration `uint64_t const l_4351[3];`

Manual confirmation:
- `source_slice_g203_only_fixed.c` restores the initializer for `l_4351`.
- That repaired slice prints `g_203: -53`, matching the methodology source value.

## Root cause in Frama-C pipeline

This is the same export-coherence defect family as issue 2739:

1. The local variable itself remains visible in the slice, so its declaration is kept.
2. The declaration-time initializer is not kept consistently.
3. Export therefore emits a preserved local array with no initializer.
4. Later retained statements still read `l_4351[1]`.
5. Result: the generated slice performs an uninitialized read and changes the observed value of `g_203`.

So the strongest diagnosis is not a generic "dependency looks suspicious" claim. The concrete failure is:

- declaration preserved
- initializer dropped
- use preserved
- UB introduced in the sliced program

## Relevant Frama-C locations
- Statement visibility:
  - `/home/cyuan/projects/Slicing/frama-c-30.0-Zinc/src/plugins/slicing/slicingTransform.ml:103`
- Local-variable visibility:
  - `/home/cyuan/projects/Slicing/frama-c-30.0-Zinc/src/plugins/slicing/slicingTransform.ml:383`
- Local filtering (keep locals):
  - `/home/cyuan/projects/Slicing/frama-c-30.0-Zinc/src/kernel_services/ast_transformations/filter.ml:519`
- Invisible `Local_init` rewritten as undefined local:
  - `/home/cyuan/projects/Slicing/frama-c-30.0-Zinc/src/kernel_services/ast_transformations/filter.ml:562`
  - `/home/cyuan/projects/Slicing/frama-c-30.0-Zinc/src/kernel_services/ast_transformations/filter.ml:570`
- Distinct mark keys:
  - local var mark: `/home/cyuan/projects/Slicing/frama-c-30.0-Zinc/src/plugins/slicing/fct_slice.ml:1390`
  - stmt mark: `/home/cyuan/projects/Slicing/frama-c-30.0-Zinc/src/plugins/slicing/fct_slice.ml:1403`

## Classification
- Primary: slicing/export mark incoherence for local initializers.
- Observable failure: semantic mismatch caused by an uninitialized read from a preserved-but-uninitialized local const array.
- Confidence: high.
