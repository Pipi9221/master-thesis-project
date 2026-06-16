# BUG: local atomic init before `cmpxchg` is missliced

## Severity

High (original program passes, sliced program fails assertion).

## Symptom

For local `_Atomic int` state used by `atomic_compare_exchange_strong`, slicing with
`-c __assert_fail` keeps the `cmpxchg` but drops required initialization of the local
atomic object. The sliced program then sees incorrect runtime state and fails:

- original program: `assert(!ok && expected == 4)` PASS
- sliced program (`-c __assert_fail`): assertion FAIL (abort)
- control criteria (`-c ret`) and unsliced-bc-on-lli: PASS

## Minimal Reproducer

`comfirm-issue/cases/precision/min_cmpxchg_local_init_misslice.c`

```bash
SRC=$DG_REPO/cases/precision/min_cmpxchg_local_init_misslice.c
BC=/tmp/dg_cmpxchg_min.bc
OUT=/tmp/dg_cmpxchg_min.sliced.bc

clang-14 -O0 -g -c -emit-llvm "$SRC" -o "$BC"
llvm-slicer -c __assert_fail "$BC" -o "$OUT"
lli-14 "$OUT"
```

Expected: original PASS, sliced FAIL at assertion.

## Stability

- Reproduced 2/2 on minimal case (`run.assert.1`, `run.assert.2` both fail).
- Reproduced 2/2 on variant using `atomic_init(&g, 4)` for local atomic.
- Global-static variant (`static _Atomic int g = 4`) stays PASS and serves as control.

## IR Delta (key point)

In failing local cases, the sliced IR still has `cmpxchg`, but the local atomic init
store is removed, leaving the compare-exchange to operate on uninitialized local
storage. This changes `ok/expected` behavior and flips assertion outcome.

## Evidence

- Minimal confirm:
  - `/tmp/dg_cmpxchg_confirm/logs/slice.assert.log`
  - `/tmp/dg_cmpxchg_confirm/logs/run.assert.1.log`
  - `/tmp/dg_cmpxchg_confirm/logs/run.assert.2.log`
  - `/tmp/dg_cmpxchg_confirm/logs/run.ret.log`
  - `/tmp/dg_cmpxchg_confirm/logs/run.unsliced.bc.log`
- Family extension:
  - `/tmp/dg_cmpxchg_family/local/logs/*`
  - `/tmp/dg_cmpxchg_family/local_atomic_init/logs/*`
  - `/tmp/dg_cmpxchg_family/global/logs/*`

## Upstream Check

As of 2026-03-08, `mchalupa/dg` issue search for `cmpxchg` / `atomic_compare_exchange`
in title/body has no direct matching slicing-correctness issue.
