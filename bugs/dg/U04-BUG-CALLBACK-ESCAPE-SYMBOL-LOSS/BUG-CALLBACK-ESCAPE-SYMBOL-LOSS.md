# BUG: callback passed to external library call is mis-sliced

## Severity

High (original program passes, sliced program fails or cannot run).

## Symptom

When a callback function is passed to an external API (`bsearch`, `qsort`,
`qsort_r`, `lfind/lsearch`, `ftw/nftw/scandir`, `pthread_create`, `signal`), slicing with
`-c __assert_fail` can remove required callback behavior:

- callback definition dropped while declaration remains (`Symbols not found`)
- or callback-triggering call removed, causing assertion failure

## Confirmed Behavior

- Original binary: PASS
- Slice with `-c __assert_fail`: OK
- Sliced run: FAIL (assertion failure or unresolved callback symbol)
- Stability: 2/2 reruns fail on affected examples
- Control criterion (`-c ret`): PASS

Representative failures:

- `bsearch/lfind/lsearch`: `Symbols not found: [ cmp ]`
- `ftw/nftw/scandir`: `Symbols not found` for callback functions
- `pthread_create`: `Symbols not found: [ worker ]`
- `signal`: assertion fails because handler side effect is absent
- `qsort/qsort_r`: assertion fails because sort effect is absent

## Minimal Reproducer

`comfirm-issue/cases/precision/min_callback_escape_bsearch.c`

```bash
SRC=$DG_REPO/cases/precision/min_callback_escape_bsearch.c
BC=/tmp/dg_callback.bc
OUT=/tmp/dg_callback.sliced.bc

clang-14 -O0 -g -c -emit-llvm "$SRC" -o "$BC"
llvm-slicer -c __assert_fail "$BC" -o "$OUT"
lli-14 "$OUT"
```

Expected: original PASS, sliced fails with unresolved `cmp`.

## Evidence

- `/tmp/dg_callback_escape/logs/*`
- `/tmp/dg_callback_matrix2/logs/*`
- `/tmp/dg_searchh_ext/logs/*`
- `/tmp/dg_callback_filesys/logs/*`
- `/tmp/dg_qsort_r/logs/*`
