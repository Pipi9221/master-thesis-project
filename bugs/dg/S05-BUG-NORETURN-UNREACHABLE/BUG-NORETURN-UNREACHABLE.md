# BUG: `noreturn` tail (`exit`) can be missliced into reachable `unreachable`

## Severity

High (original program passes, sliced program crashes at runtime).

## Symptom

For a simple `assert` wrapper followed by `exit(0)`, slicing with `-c __assert_fail` yields a sliced module where `main` reaches `unreachable`. Running sliced bitcode with `lli-14` crashes.

## Confirmed Behavior

- Original binary: PASS
- Slice with `-c __assert_fail`: OK (slicer finishes)
- Sliced program run: FAIL (segmentation fault / `-11`)
- Re-run stability: sliced program crashes 2/2 runs

## Reproduce

```bash
SRC=$DG_REPO/cases/precision/noreturn_exit_misslice.c
BC=/tmp/dg_noreturn.bc
OUT=/tmp/dg_noreturn.sliced.bc

clang-14 -O0 -g -c -emit-llvm "$SRC" -o "$BC"
llvm-slicer -c __assert_fail "$BC" -o "$OUT"
lli-14 "$OUT"
```

Expected: original program returns 0, sliced bitcode crashes.

## Evidence

- Logs:
  - `/tmp/dg_github_hunt/logs/noreturn.slice.assert.log`
  - `/tmp/dg_github_hunt/logs/noreturn.run.rerun1.log`
  - `/tmp/dg_github_hunt/logs/noreturn.run.rerun2.log`
- Related upstream issue: `mchalupa/dg#418`
