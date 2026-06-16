# BUG: C++ slicing can produce invalid IR (COMDAT/unwind)

## Severity

High (slicer fails and produces invalid output IR).

## Symptom

For a minimal C++ virtual-call + exception example, slicing with `-c __assert_fail` fails verification:

- `The unwind destination does not have an exception handling instruction!`
- `Declaration may not be in a Comdat!`
- `[llvm-slicer] ERROR: Verifying module failed, the IR is not valid`

## Confirmed Behavior

- Original binary: PASS
- Slice with `-c __assert_fail`: FAIL (invalid IR; non-zero exit)
- Slice with `-c ret`: OK, sliced program PASS
- Re-run stability (`-c __assert_fail`): 2/2 fails with same verification errors

## Reproduce

```bash
SRC=$DG_REPO/cases/fatal/cpp_comdat_invalid_ir.cpp
BC=/tmp/dg_cpp_comdat.bc
OUT=/tmp/dg_cpp_comdat.sliced.bc

clang++-14 -O0 -std=c++17 -g -c -emit-llvm "$SRC" -o "$BC"
llvm-slicer -c __assert_fail "$BC" -o "$OUT"
```

Expected: slicer reports module verification failure with COMDAT/unwind diagnostics.

## Evidence

- Logs:
  - `/tmp/dg_github_hunt/logs/cpp_comdat.slice.assert.log`
  - `/tmp/dg_github_hunt/logs/cpp_comdat.slice.assert.rerun1.log`
  - `/tmp/dg_github_hunt/logs/cpp_comdat.slice.assert.rerun2.log`
- Related upstream issue: `mchalupa/dg#461`
