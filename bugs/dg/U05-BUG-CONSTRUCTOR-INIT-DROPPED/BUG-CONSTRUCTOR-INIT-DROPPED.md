# BUG: constructor-based initialization is dropped by slicing

## Severity

High (original program passes, sliced program fails assertion).

## Symptom

For programs that depend on initialization performed before `main`
(`__attribute__((constructor))` or C++ global ctor), slicing with
`-c __assert_fail` keeps `main` assertions but drops effective initialization.

Typical sliced result:

- initializer function left only as declaration (or removed from startup path)
- global remains default-initialized
- assertion in `main` fails

## Confirmed Behavior

- Original binaries: PASS
- Slice with `-c __assert_fail`: OK
- Sliced run: FAIL (assertion failure), stable 2/2
- Control criterion (`-c ret`): PASS

Validated on:

- C constructor (`__attribute__((constructor))`)
- chained constructor priorities
- C++ global object constructor

## Minimal Reproducer

`comfirm-issue/cases/precision/min_constructor_global_init.c`

```bash
SRC=$DG_REPO/cases/precision/min_constructor_global_init.c
BC=/tmp/dg_ctor.bc
OUT=/tmp/dg_ctor.sliced.bc

clang-14 -O0 -g -c -emit-llvm "$SRC" -o "$BC"
llvm-slicer -c __assert_fail "$BC" -o "$OUT"
lli-14 "$OUT"
```

Expected: original PASS, sliced fails (`assert(g == 5)`).

## Evidence

- `/tmp/dg_lifecycle_hooks/logs/*`
- sliced IR snapshots in `/tmp/dg_lifecycle_hooks/*.bad.sliced.ll`
