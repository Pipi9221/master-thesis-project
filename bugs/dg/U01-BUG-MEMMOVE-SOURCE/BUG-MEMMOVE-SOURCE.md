# BUG: memmove Source Dependency Lost Under Slicing

## Conclusion

Confirmed true bug.

- Original program: PASS
- Sliced program: FAIL
- Stability: reproduced in 3 precision scenarios and 7 implemented-feature rows

## Affected Precision Cases

- `precision_03_cond_memmove.c`
- `precision_05_shortcircuit_memmove.c`
- `precision_09_callback_memmove.c`

Failing criteria pattern:
- `__assert_fail`
- `<line>:probe_ok`
- `__assert_fail,<line>:probe_ok`
- (`ret` does not trigger this failure)

## Minimal Reproducer

- `comfirm-issue/cases/precision/min_memmove_deadcode.c`

## Reproduction Command

```bash
cd $DG_REPO/cases/precision
clang-14 -O0 -c -emit-llvm -g min_memmove_deadcode.c -o min_memmove_deadcode.bc
llvm-slicer -c __assert_fail min_memmove_deadcode.bc -o min_memmove_deadcode.sliced
lli-14 min_memmove_deadcode.sliced
```

Expected sliced failure:
- `Assertion 'probe_ok' failed`

## IR Evidence (Representative: precision_03_cond_memmove)

- Original IR keeps both `llvm.memcpy` and `llvm.memmove`
- Sliced IR keeps `llvm.memmove` but drops `llvm.memcpy`

This creates reads from not-properly-initialized source bytes after slicing.

## Implemented-Feature Deepening (2026-03-09)

A dedicated matrix on currently implemented libc models was run:

- `reports/precision/implemented_feature_matrix.tsv`
- failing rows (stable rerun, all under `-c __assert_fail`):
  - `memmove_chain_from_memcpy`
  - `memmove_overlap_direct_control`
  - `memmove_distinct_stack`
  - `memmove_distinct_globals`
  - `memmove_fill_helper`
  - `memmove_wrapper`
  - `memmove_heap`
- controls pass:
  - `memmove_distinct_stack_nobuiltin`
  - `memmove_wrapper_nobuiltin`
  - `memcpy_then_memcmp_control`
  - `strcpy_then_strlen_control`
  - `strncpy_then_strchr_control`

Additional path split observation:

- **Intrinsic path fails** (`llvm.memmove`): sliced keeps `llvm.memmove` but may
  drop prior source-initializing writes/copies.
- **Libcall path passes** (`-fno-builtin-memmove`, external `@memmove`):
  sliced keeps both source initialization and `@memmove`.

Coverage note:

- The same failure pattern reproduces on stack/global/heap buffers and through
  helper-function/wrapper call paths, indicating the issue is not tied to one
  narrow CFG shape.

This points to an issue inside the implemented intrinsic handling path rather
than a generic "all memmove calls" failure.

Root-cause hint (inference from code + IR):

- `lib/llvm/ReadWriteGraph/Calls.cpp`, `createIntrinsicCall()` currently models
  `memmove/memcpy/memset` by adding destination `Def` only; source `Use`
  dependency for `memmove` is not explicitly added in this path.
