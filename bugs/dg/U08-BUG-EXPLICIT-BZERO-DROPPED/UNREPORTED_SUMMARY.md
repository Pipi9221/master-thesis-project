# Unreported Bug Summary

Rule: only count bug families that do **not** have direct overlap in already submitted GitHub artifacts (issues/PR/commit keyword match).

Date checked: 2026-03-09 (strict pass).

## Current Unreported Families (counted)

1. `BUG-MEMMOVE-SOURCE`
   - Report: `reports/precision/BUG-MEMMOVE-SOURCE.md`
2. `BUG-STRNCAT-SIDEEFFECT`
   - Report: `reports/precision/BUG-STRNCAT-SIDEEFFECT.md`
3. `BUG-SETJMP-LONGJMP-MISSLICE`
   - Report: `reports/precision/BUG-SETJMP-LONGJMP-MISSLICE.md`
4. `BUG-CALLBACK-ESCAPE-SYMBOL-LOSS`
   - Report: `reports/precision/BUG-CALLBACK-ESCAPE-SYMBOL-LOSS.md`
5. `BUG-CONSTRUCTOR-INIT-DROPPED`
   - Report: `reports/precision/BUG-CONSTRUCTOR-INIT-DROPPED.md`
6. `BUG-CMPXCHG-LOCAL-INIT-MISSLICE`
   - Report: `reports/precision/BUG-CMPXCHG-LOCAL-INIT-MISSLICE.md`
7. `BUG-BCOPY-LEN-SIDEEFFECT`
   - Report: `reports/precision/BUG-BCOPY-LEN-SIDEEFFECT.md`
8. `BUG-EXPLICIT-BZERO-DROPPED`
   - Report: `reports/precision/BUG-EXPLICIT-BZERO-DROPPED.md`
9. `BUG-MEMFROB-LEN-SIDEEFFECT`
   - Report: `reports/precision/BUG-MEMFROB-LEN-SIDEEFFECT.md`
10. `BUG-QSORT-CALL-DROPPED`
   - Report: `reports/precision/BUG-QSORT-CALL-DROPPED.md`
11. `BUG-SWAB-CALL-DROPPED`
   - Report: `reports/precision/BUG-SWAB-CALL-DROPPED.md`
12. `BUG-STPCPY-STPNCPY-DISCARD-RET`
   - Report: `reports/precision/BUG-STPCPY-STPNCPY-DISCARD-RET.md`
13. `BUG-WCHAR-MUTATOR-DROPPED`
   - Report: `reports/precision/BUG-WCHAR-MUTATOR-DROPPED.md`
14. `BUG-SYSAPI-OUTBUF-DROPPED`
   - Report: `reports/precision/BUG-SYSAPI-OUTBUF-DROPPED.md`
15. `BUG-ERRNO-SIDEEFFECT-DROPPED`
   - Report: `reports/precision/BUG-ERRNO-SIDEEFFECT-DROPPED.md`
16. `BUG-STATEFUL-API-SIDEEFFECT-DROPPED`
   - Report: `reports/precision/BUG-STATEFUL-API-SIDEEFFECT-DROPPED.md`

Total (unreported): **16**

Latest deepening update:

- `libc_wide_matrix.tsv`: confirmed `explicit_bzero` and `memfrob` drops
- `libc_mutator2_matrix.tsv`: confirmed `qsort/swab/stpcpy-stpncpy/wchar` families
- `sysapi_outbuf_matrix.tsv`: confirmed output-buffer API drops (`getcwd/gethostname/realpath/ctime_r/localtime_r`)
- `errno_sideeffect_matrix.tsv`: confirmed `errno`-semantic drops (`strtol/strtoll/strtod/wcstol/wcstoll/fopen/open`)
- `implemented_feature_matrix.tsv`: deepening on implemented model paths; reproduces
  `memmove` family failures across stack/global/heap and wrapper/helper paths
  (including intrinsic-vs-libcall split controls), no additional new family
  added to strict count
- `stateful_api_matrix.tsv`: confirmed non-modeled stateful API regression
  (`srand/rand`, `strtok`, `rewind/fgetc`, `setenv/getenv` path mismatch);
  added as a new strict family

## Needs Manual Triage (possible overlap)

- `BUG-INDIRECT-GOTO-CRASH`
  - Report: `reports/fatal/BUG-INDIRECT-GOTO-CRASH.md`
  - Reason: keyword search for `indirectbr` hits old issue `#183 (C++ IR)`; although symptom differs, marked conservative as overlap-risk and excluded from strict count.
- `BUG-INLINE-ASM-MEM-SIDEEFFECT`
  - Report: `reports/precision/BUG-INLINE-ASM-MEM-SIDEEFFECT.md`
  - Reason: issue search hits `#442` (`inline assembly` context). Symptom is different, but marked overlap-risk conservatively.
- `BUG-VA-COPY-MISSLICE` (newly observed in this round)
  - Report: `reports/precision/BUG-VA-COPY-MISSLICE.md`
  - Evidence: `reports/precision/vararg_matrix.tsv` + `/tmp/dg_vararg_matrix/logs/*`
  - Reason: issue search hits closed issue `#151` (`Handle va_copy intrinsic in DefUse analysis`), treated as overlap-risk until deeper regression triage.

## Strict Search Snapshot

- `memmove`:
  - issues hit: `#354` (not direct bug match)
  - PR hit: none
  - commit hit: `6df6253a` (feature implementation text, not bug report)
- `strncat` / `strcat`:
  - issues/PR/commit hits: none
- `bcopy`:
  - issue search hit count: 0 (`repo:mchalupa/dg bcopy`)
- `explicit_bzero`:
  - issue search hit count: 0 (`repo:mchalupa/dg explicit_bzero`)
- `memfrob`:
  - no keyword hit in local snapshot (`upstream_issues_snapshot.json`)
- `setjmp` / `longjmp`:
  - issues/PR/commit hits: none
- `cmpxchg` / `atomic_compare_exchange`:
  - no direct matching slicing-correctness issue in title/body search
  - note: `atomicrmw` has old closed issue `#287` (different instruction/symptom)
- callback APIs (`qsort`, `bsearch`, `lfind`, `lsearch`, `pthread_create`, `signal`):
  - no direct issue hits for those API names
  - note: `#352` exists for `atexit` support, treated as related but narrower
- `swab`:
  - issue search hit count: 0 (`repo:mchalupa/dg swab`)
- `stpcpy` / `stpncpy`:
  - issue search hit count: 0 (`repo:mchalupa/dg stpcpy`, `repo:mchalupa/dg stpncpy`)
- wchar mutators (`wcscpy`, `wmemcpy`, `wmemmove`, `wmemset`):
  - issue search hit count: 0 (keyword queries, 2026-03-08)
- sys APIs (`getcwd`, `gethostname`, `realpath`, `ctime_r`, `localtime_r`):
  - no keyword hit in local snapshot (`upstream_issues_snapshot.json`)
- `errno` APIs (`strtol`, `strtoll`, `strtod`, `wcstol`, `wcstoll`, `fopen`, `open`, `errno`):
  - no keyword hit in local snapshot (`upstream_issues_snapshot.json`)
- stateful APIs (`setenv`, `strtok`, `rewind`, `fgetc`, `srand`):
  - no direct keyword hit in local snapshot regex search (2026-03-09)
- constructors (`constructor`, `global_ctors`):
  - issues/PR hits: none
- `indirectbr`:
  - issues hit: `#183`, `#15`
  - treated as overlap-risk (excluded)
- `inline assembly`:
  - issue hit: `#442`
  - treated as overlap-risk (excluded)

## Reproduced But Excluded (already submitted upstream)

- `BUG-SWITCH-SUCCESSORS-CRASH` (related to #240)
- `BUG-VECTOR-INSERTELEMENT-CRASH` (related to #470)
- `BUG-COMDAT-INVALID-IR` (related to #461)
- `BUG-DBG-VALUE-CRASH` (related to #465)
- `BUG-NORETURN-UNREACHABLE` (related to #418)
