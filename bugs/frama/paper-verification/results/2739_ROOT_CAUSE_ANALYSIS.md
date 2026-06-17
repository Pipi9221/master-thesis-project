# Issue 2739 Root Cause Analysis (Source-Level)

## Symptom
- Source program prints `g_34: -1628632859`.
- Sliced program crashes with `Segmentation fault (core dumped)` before stable target-value comparison.

## Minimal code evidence
- Source (`test.c`):
  - `int32_t * const l_2338 = &g_1320;`
  - `(**l_35) |= (*l_2338);`
- Sliced (`slice.c`):
  - `int32_t * const l_2338;`
  - `*(*l_35) |= *l_2338;`  // use without initialization

Compiler also reports:
- `warning: ‘l_2338’ is used uninitialized`

## Root cause in Frama-C pipeline

This is not a parser issue. It is a slicing/export consistency issue:

1. Slicing visibility uses **independent marks**:
   - Statement visibility: `inst_visible` -> `get_stmt_mark`
   - Local variable visibility: `loc_var_visible` -> `get_local_var_mark`
2. Export filter keeps locals if `loc_var_visible` is true.
3. If an initialization statement is invisible (`Local_init`), filter converts it to skip and marks the variable as undefined (`vdefined <- false`).
4. Result: declaration remains, initialization removed, later dereference still kept -> UB/crash.

## Relevant source locations
- Statement visibility:
  - `Slicing/frama-c-30.0-Zinc/src/plugins/slicing/slicingTransform.ml:103`
- Local-variable visibility:
  - `Slicing/frama-c-30.0-Zinc/src/plugins/slicing/slicingTransform.ml:383`
- Local filtering (keep locals):
  - `Slicing/frama-c-30.0-Zinc/src/kernel_services/ast_transformations/filter.ml:519`
- Invisible `Local_init` rewritten to uninitialized variable:
  - `Slicing/frama-c-30.0-Zinc/src/kernel_services/ast_transformations/filter.ml:562`
  - `Slicing/frama-c-30.0-Zinc/src/kernel_services/ast_transformations/filter.ml:570`
- Distinct mark keys:
  - local var mark: `Slicing/frama-c-30.0-Zinc/src/plugins/slicing/fct_slice.ml:1390`
  - stmt mark: `Slicing/frama-c-30.0-Zinc/src/plugins/slicing/fct_slice.ml:1403`

## Classification
- Primary: slicing dependency/mark-propagation defect (PDG/mark coherence).
- Secondary amplification: unsafe export-time degradation of invisible `Local_init`.

## Practical takeaway
- This bug is stronger than simple output mismatch: slicing output can become non-executable due to dropped initialization dependencies.
