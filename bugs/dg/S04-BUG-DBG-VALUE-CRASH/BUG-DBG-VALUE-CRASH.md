# BUG: slicing criterion `llvm.dbg.value` crashes in `addDefUseEdges`

## Severity

Fatal (slicing crashes).

## Symptom

Using `-c llvm.dbg.value` on a tiny `-Og -g` program crashes in:

`LLVMDependenceGraph::addDefUseEdges`

The matched debug call is non-pointer metadata, e.g.:

`call void @llvm.dbg.value(metadata i32 1, metadata !..., metadata !DIExpression())`

## Confirmed Behavior

- Original binary: PASS
- Slice with `-c llvm.dbg.value`: CRASH
- Slice with `-c ret`: OK (no reachable criterion), sliced program PASS
- Slice with `-c __assert_fail`: OK (no reachable criterion), sliced program PASS
- Re-run stability (`-c llvm.dbg.value`): 2/2 crashes

## Reproduce

```bash
SRC=$DG_REPO/cases/fatal/dbg_value_nonptr_crash.c
BC=/tmp/dg_dbg_value.bc
OUT=/tmp/dg_dbg_value.sliced.bc

clang-14 -Og -g -c -emit-llvm "$SRC" -o "$BC"
llvm-slicer -c llvm.dbg.value "$BC" -o "$OUT"
```

Expected: slicer crashes with stack containing `addDefUseEdges`.

## Evidence

- Logs:
  - `/tmp/dg_github_hunt/logs/dbg_value.slice.dbgval.log`
  - `/tmp/dg_github_hunt/logs/dbg_value.slice.dbgval.rerun1.log`
  - `/tmp/dg_github_hunt/logs/dbg_value.slice.dbgval.rerun2.log`
- Related upstream issue: `mchalupa/dg#465`
