# BUG: inline-asm memory side effects are dropped by slicing

## Severity

High (original program passes, sliced program fails assertion).

## Symptom

Programs whose correctness depends on memory writes performed by inline asm
are sliced into code where asm effects disappear.

Observed pattern in sliced IR:

- asm instruction removed
- subsequent assertion still present
- value remains pre-asm value, causing failure

## Confirmed Behavior

- Original binary: PASS
- Slice with `-c __assert_fail`: OK
- Sliced run: FAIL (assertion failure), stable 2/2
- Control criterion (`-c ret`): PASS

Examples that fail:

- local memory write via asm pointer
- global memory write via asm pointer
- read-modify-write side effect (`addl` into memory)

Example that passes (control):

- asm register output only (`"=r"`), no memory side effect

## Minimal Reproducer

`comfirm-issue/cases/precision/min_inline_asm_mem_sideeffect.c`

```bash
SRC=$DG_REPO/cases/precision/min_inline_asm_mem_sideeffect.c
BC=/tmp/dg_inline_asm.bc
OUT=/tmp/dg_inline_asm.sliced.bc

clang-14 -O0 -g -c -emit-llvm "$SRC" -o "$BC"
llvm-slicer -c __assert_fail "$BC" -o "$OUT"
lli-14 "$OUT"
```

Expected: original PASS, sliced fails (`assert(g == 7)`).

## Evidence

- `/tmp/dg_asm_matrix/logs/*`
- sliced IR snapshots in `/tmp/dg_asm_matrix/*.bad.sliced.ll`
