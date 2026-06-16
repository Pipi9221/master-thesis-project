# Dead-Code Precision Hunt Summary

## Scope

- Cases: 10 targeted precision cases in `comfirm-issue/cases/precision/precision_*.c`
- Criteria matrix per case: 4 (`__assert_fail`, `ret`, `line:var`, `combo`)
- Total runs: 40
- Control check: `issues/001-pointer-analysis/cases/pointer_alias.c` stays PASS/PASS

## Result Snapshot

- Candidate rows (`orig PASS` + `sliced FAIL`): 21
- Stable confirmed rows (2 reruns): 21
- Confirmed bug families: **2**

## Confirmed Bug Families

1. **memmove source dependency lost**
   - Affected cases: `03`, `05`, `09`
   - Report: `BUG-MEMMOVE-SOURCE.md`
2. **strncat side-effect call removed**
   - Affected cases: `04`, `06`, `08`, `10`
   - Report: `BUG-STRNCAT-SIDEEFFECT.md`

## Non-trigger Cases

- `precision_01_cond_volatile.c`
- `precision_02_cond_alias.c`
- `precision_07_phi_loop_memmove.c`

All 4 criteria in these cases remained PASS/PASS.

## Criteria Sensitivity

- `ret` criterion did not trigger failures in this batch.
- Failures concentrate in:
  - `__assert_fail`
  - `line:probe_ok`
  - `__assert_fail,line:probe_ok`

## Artifacts

- Matrix rows: `matrix_results.tsv`
- Candidate rows: `candidate_rows.tsv`
- Confirmed rows: `confirmed_rows.tsv`
- Debug logs: `/tmp/dg_precision_matrix`

## GitHub-Guided Extension

- Additional confirmed behavior bug: `BUG-NORETURN-UNREACHABLE.md`
- Source issue: `mchalupa/dg#418`
- Pattern: `noreturn` tail (`exit`) missliced into reachable `unreachable`

## Multi-Dimension Extension

- Confirmed new families from targeted exploration:
  - `BUG-SETJMP-LONGJMP-MISSLICE.md`
  - `BUG-CALLBACK-ESCAPE-SYMBOL-LOSS.md`
  - `BUG-CONSTRUCTOR-INIT-DROPPED.md`
  - `BUG-CMPXCHG-LOCAL-INIT-MISSLICE.md`
  - `BUG-INLINE-ASM-MEM-SIDEEFFECT.md` (overlap-risk bucket in strict count)
- Matrix artifact: `multidim_matrix.tsv`

## New Targeted Matrices (This Round)

- `vararg_matrix.tsv`:
  - `va_copy` variants fail under `-c __assert_fail` with sliced runtime crash (`-11`)
  - control case (`direct_no_copy`) remains PASS/PASS
  - marked overlap-risk for strict counting due old issue `#151` keyword hit
- `extra_dims_matrix.tsv`:
  - confirmed callback-escape behavior extends to `pthread_once`/`signal`
  - `atexit` row excluded as environment limitation (`lli` unsliced-bc also unresolved `atexit`)
- cmpxchg family confirmation:
  - local `_Atomic` init + `atomic_compare_exchange_strong` fails sliced assert path (stable 2/2)
  - global-static control variant remains PASS

## Hotspot-Guided Deepening

- `hotspot_matrix.tsv`:
  - re-confirms cmpxchg local-init failures (`cmpxchg_local_fail_expected`, `cmpxchg_local_atomic_init`)
  - extends string-concat family: `strcat_sideeffect_ptr` now also reproduces (`orig PASS`, `unsliced-bc PASS`, sliced FAIL)
  - controls remain PASS (`atomic_fetch_add_control`, `asm_goto_callbr_control`, `mempcpy/stpcpy/memccpy`)
- `model_arg_matrix.tsv` and `outparam_matrix.tsv`:
  - no new failures in tested `memcpy/memset/strncpy` arg-sideeffect and out-param APIs

## Additional Deepening (This Session)

- `libc_arg_matrix.tsv`:
  - 12 cases x 2 criteria, all PASS/PASS (no `orig PASS / sliced FAIL`)
- `purecall_discard_matrix.tsv`:
  - 10 cases x 2 criteria (discarded pure-call return values), all PASS/PASS
- `alloc_arg_matrix.tsv`:
  - 8 cases x 2 criteria (`malloc/calloc/realloc/free` arg side-effects), all PASS/PASS
- `mutator_discard_matrix.tsv`:
  - 10 cases x 2 criteria (memory-mutator calls with discarded effects), all PASS/PASS
- `switch_cfg_matrix.tsv`:
  - 8 complex switch/CFG cases x 2 criteria, all PASS/PASS
- `atomicrmw_ops_matrix.tsv`:
  - 7 atomicrmw/builtin atomic cases x 2 criteria, all PASS/PASS
- `criteria_combo_matrix.tsv`:
  - 6 cases x 4 criteria (`__assert_fail`/`ret`/`line:probe`/combo), all PASS/PASS
- `pta_mode_matrix.tsv`:
  - 6 controls x 3 PTA modes (`fi/fs/inv`), all PASS/PASS
- `libc_wide_matrix.tsv`:
  - confirmed failures: `bcopy`, `explicit_bzero`, `memfrob`
  - artifact reports:
    - `BUG-BCOPY-LEN-SIDEEFFECT.md`
    - `BUG-EXPLICIT-BZERO-DROPPED.md`
    - `BUG-MEMFROB-LEN-SIDEEFFECT.md`
- `libc_mutator2_matrix.tsv`:
  - new confirmed failures (all `orig PASS / unsliced PASS / sliced FAIL` under `-c __assert_fail`):
    - `qsort_basic_sort`
    - `swab_basic`
    - `stpcpy_discard_ret`
    - `stpncpy_discard_ret`
    - `wmemcpy_basic`
    - `wmemmove_basic`
    - `wmemset_basic`
    - `wcscpy_basic`
    - `wcsncpy_basic`
    - `wcscat_basic`
    - `wcsncat_basic`
  - controls remain PASS/PASS:
    - `control_mempcpy_discard_ret`
    - `control_strtok_r`
  - artifact reports:
    - `BUG-QSORT-CALL-DROPPED.md`
    - `BUG-SWAB-CALL-DROPPED.md`
    - `BUG-STPCPY-STPNCPY-DISCARD-RET.md`
    - `BUG-WCHAR-MUTATOR-DROPPED.md`
- `sysapi_outbuf_matrix.tsv`:
  - confirmed failures (all `orig PASS / unsliced PASS / sliced FAIL` under `-c __assert_fail`):
    - `getcwd_effect`
    - `gethostname_effect`
    - `realpath_effect`
    - `ctime_r_effect`
    - `localtime_r_effect`
  - controls remain PASS/PASS:
    - `control_getenv`
    - `control_strchr`
  - artifact report:
    - `BUG-SYSAPI-OUTBUF-DROPPED.md`
- `errno_sideeffect_matrix.tsv`:
  - confirmed failures (all `orig PASS / unsliced PASS / sliced FAIL` under `-c __assert_fail`):
    - `strtol_errno_erange`
    - `strtoll_errno_erange`
    - `strtod_errno_erange`
    - `wcstol_errno_erange`
    - `wcstoll_errno_erange`
    - `fopen_errno_enoent`
    - `open_errno_enoent`
  - controls remain PASS/PASS:
    - `control_strlen_no_errno`
    - `control_strtol_ret_used`
  - artifact report:
    - `BUG-ERRNO-SIDEEFFECT-DROPPED.md`
- `implemented_feature_matrix.tsv`:
  - target: already-implemented feature paths (`memmove/memcpy/str*` models)
  - failing rows (`orig PASS / unsliced PASS / sliced FAIL`, `-c __assert_fail`):
    - `memmove_chain_from_memcpy`
    - `memmove_overlap_direct_control`
    - `memmove_distinct_stack`
    - `memmove_distinct_globals`
    - `memmove_fill_helper`
    - `memmove_wrapper`
    - `memmove_heap`
  - controls remain PASS/PASS:
    - `memmove_distinct_stack_nobuiltin`
    - `memmove_wrapper_nobuiltin`
    - `memcpy_then_memcmp_control`
    - `strcpy_then_strlen_control`
    - `strncpy_then_strchr_control`
  - deepening note: intrinsic `llvm.memmove` path fails while external
    `@memmove` (`-fno-builtin-memmove`) control passes
  - artifact report (updated):
    - `BUG-MEMMOVE-SOURCE.md`
- `stateful_api_matrix.tsv`:
  - target: non-modeled stateful libc/POSIX behavior (process/env/stream state)
  - failing rows (`orig PASS / unsliced PASS / sliced FAIL`, `-c __assert_fail`):
    - `rand_state_discard`
    - `strtok_state_discard`
    - `fgetc_state_discard`
    - `rewind_state_effect`
    - `setenv_state_effect`
    - `read_state_discard`
    - `read_ret_used_still_fail`
  - controls remain PASS/PASS:
    - `rand_control_used`
    - `strtok_control_used`
  - artifact report:
    - `BUG-STATEFUL-API-SIDEEFFECT-DROPPED.md`
- manual IR probes:
  - `cases/precision/probe_extractvalue_array.ll`
  - `cases/precision/probe_extractvalue_array_idx0.ll`
  - observed PTA warnings (`UNHANDLED insertvalue`, aggregate-return warning), but no semantic regression under `-c __assert_fail`

Conclusion of this session: multiple new precision families added from mutator/API deepening (including `errno` side-effect drops); strict total updated in `UNREPORTED_SUMMARY.md`.
