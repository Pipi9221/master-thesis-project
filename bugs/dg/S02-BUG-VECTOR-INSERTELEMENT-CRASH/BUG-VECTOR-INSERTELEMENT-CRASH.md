# BUG: llvm-slicer crashes on vector `insertelement` path

## Severity

Fatal (slicing crashes).

## Symptom

On a minimal vector-element update program, slicing with `-c __assert_fail` crashes in PTA:

`LLVMPointerGraphBuilder::createInsertElement`

## Confirmed Behavior

- Original binary: PASS
- Slice with `-c __assert_fail`: CRASH
- Slice with `-c ret`: OK, sliced program PASS
- Re-run stability (`-c __assert_fail`): 2/2 crashes

## Reproduce

```bash
SRC=$DG_REPO/cases/fatal/vector_insertelement_crash.c
BC=/tmp/dg_vector_insert.bc
OUT=/tmp/dg_vector_insert.sliced.bc

clang-14 -O0 -g -c -emit-llvm "$SRC" -o "$BC"
llvm-slicer -c __assert_fail "$BC" -o "$OUT"
```

Expected: slicer crashes with stack containing `createInsertElement`.

## Evidence

- Logs:
  - `/tmp/dg_github_hunt/logs/vector.slice.assert.log`
  - `/tmp/dg_github_hunt/logs/vector.slice.assert.rerun1.log`
  - `/tmp/dg_github_hunt/logs/vector.slice.assert.rerun2.log`
- Related upstream issue: `mchalupa/dg#470`
