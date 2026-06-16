# BUG: setjmp/longjmp control transfer is missliced

## Severity

High (original program passes, sliced program fails assertion).

## Symptom

In a minimal `setjmp/longjmp` program (with `volatile` local state to avoid UB),
slicing with `-c __assert_fail` finishes successfully, but the sliced program
violates the original assertion (`x == 1`).

## Confirmed Behavior

- Original binary: PASS
- Slice with `-c __assert_fail`: OK
- Sliced program run: FAIL (assertion failure)
- Re-run stability: 2/2 fails
- Control criterion (`-c ret`): sliced program PASS

## Reproduce

```bash
SRC=$DG_REPO/cases/precision/setjmp_longjmp_misslice.c
BC=/tmp/dg_setjmp.bc
OUT=/tmp/dg_setjmp.sliced.bc

clang-14 -O0 -g -c -emit-llvm "$SRC" -o "$BC"
llvm-slicer -c __assert_fail "$BC" -o "$OUT"
lli-14 "$OUT"
```

Expected: original program returns 0, sliced program fails assertion.

## Evidence

- Logs:
  - `/tmp/dg_unreported_setjmp/logs/slice.assert.log`
  - `/tmp/dg_unreported_setjmp/logs/run.assert.rerun1.log`
  - `/tmp/dg_unreported_setjmp/logs/run.assert.rerun2.log`
  - `/tmp/dg_unreported_setjmp/logs/slice.ret.log`
  - `/tmp/dg_unreported_setjmp/logs/run.ret.log`

## Upstream Check

As of 2026-03-08, GitHub issue search in `mchalupa/dg` for `setjmp`/`longjmp` (`in:title,body`) returns no direct matching issue.
