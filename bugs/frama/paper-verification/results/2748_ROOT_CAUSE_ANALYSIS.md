# Issue 2748 (`g_167`) Root Cause Analysis

## Current local methodology result
- Target variable: `g_167`
- Original file in local methodology:
  - `submitted-issue-sources/methodology-compare-2026-03-27/generated/2748_source.c`
- Frama-C slice in local methodology:
  - `submitted-issue-sources/methodology-compare-2026-03-27/generated/2748_sliced.c`
- Observed values:
  - original: `15785518536639561645`
  - sliced: `15785518536639561699`
- Status: mismatch

Recorded in:
- `submitted-issue-sources/methodology-compare-2026-03-27/results/summary.tsv`
- `submitted-issue-sources/methodology-compare-2026-03-27/logs/2748_source.run.log`
- `submitted-issue-sources/methodology-compare-2026-03-27/logs/2748_sliced.run.log`

Important note:
- The draft `issue-2748/issue_description.md` currently reverses the source/sliced value labels relative to these local methodology logs.
- The root-cause analysis below follows the actual files and logs under `methodology-compare-2026-03-27/`.

## Minimal code evidence
- Original source keeps an initialized local pointer chain:
  - `const uint32_t *l_2833 = &g_1488[0][6];`
  - `const uint32_t **l_2832 = &l_2833;`
  - `const uint32_t ***l_2831 = &l_2832;`
  - `const uint32_t ****l_2830 = &l_2831;`
  - `const uint32_t *****l_2829 = &l_2830;`
  - `uint32_t * const **** const l_2835 = &l_2836;`
- Original source also initializes local scalar/pointer state later used in the retained slice path, including `l_2939` and `l_99`.

The sliced file keeps the later uses/comparisons, but drops the initializers:
- `uint32_t const ****l_2830;`
- `uint32_t const *****l_2829 = & l_2830;`
- `uint32_t * const **** const l_2835;`
- `uint8_t const l_2939;`
- `int64_t * const l_99;`

Those locals are still used later:
- `(void *)l_2834 == (void *)l_2835`
- `((int)l_2939 | (int)tmp_8)`
- `(l_98[6][0][0] == l_99)`

Compiler evidence from the sliced build (`methodology-compare-2026-03-27/logs/2748_sliced.gcc.log`):
- `/generated/2748_sliced.c:393:98`: `l_2835` is used uninitialized
- `/generated/2748_sliced.c:345:72`: `l_2939` is used uninitialized
- `/generated/2748_sliced.c:732:23`: `l_99` may be used uninitialized

The preserved use sites in `issue-2748/source_sliced_modified_printf.c` are:
- `l_2939` used in expression at line `345`
- `l_2835` used in pointer comparison at line `394`
- `l_99` used in comparison at line `732`

## What the repaired slice shows

`source_sliced_fixed.c` restores:
- backing globals `g_1488` and `g_1883`
- the local chain `l_2833 -> l_2832 -> l_2831 -> l_2830 -> l_2829`
- the initializer of `l_2835`
- the initializer `l_2939 = 0x2B`
- the initializer `l_99 = (void*)0`

Under the current local runs, that repaired slice matches the methodology original value for `g_167`.

This is important because it narrows the failure from a vague "large generated program mismatch" to a specific export defect: local initializers were removed while their later uses remained.

## Root cause in Frama-C pipeline

This case is best classified in the same family as issues 2739 and 2737:

1. Local declarations remain visible to export.
2. The corresponding `Local_init` statements are not retained consistently.
3. Export emits locals without the initializers that gave them valid values/aliases.
4. Later comparisons and value computations still use those locals.
5. The resulting slice executes with undefined local state, and `g_167` diverges.

So while the dropped `g_1488` / `g_1883` pointer chain is the most visible symptom, the deeper problem is broader:

- multiple local initializer chains are lost
- preserved later uses still depend on them
- the slice becomes semantically unstable because of introduced UB

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
- Primary: slicing/export mark incoherence for local initializer chains.
- Observable failure: semantic mismatch on `g_167` with direct compiler evidence of uninitialized locals.
- Confidence: medium-high.
- Submission note: normalize the source/sliced labels in `issue_description.md` before filing externally.
