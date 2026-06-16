# BUG-QSORT-CALL-DROPPED

## Decision

- Type: precision / dead-code
- Status: **confirmed**
- Rule satisfied: `orig PASS` + `sliced FAIL` (stable 2/2 reruns)

## Minimal Reproducer

- Source: `cases/precision/min_qsort_call_dropped.c`

```c
#include <assert.h>
#include <stdlib.h>
static int cmp(const void *a, const void *b) {
  int x = *(const int *)a;
  int y = *(const int *)b;
  return (x > y) - (x < y);
}
int main(void) {
  int a[3] = {3, 1, 2};
  qsort(a, 3, sizeof(int), cmp);
  assert(a[0] == 1 && a[1] == 2 && a[2] == 3);
  return 0;
}
```

## Reproduction

```bash
clang-14 -O0 -g cases/precision/min_qsort_call_dropped.c -o /tmp/qsort.orig
/tmp/qsort.orig

clang-14 -O0 -g -c -emit-llvm cases/precision/min_qsort_call_dropped.c -o /tmp/qsort.bc
lli-14 /tmp/qsort.bc

llvm-slicer -c __assert_fail /tmp/qsort.bc -o /tmp/qsort.sliced.bc
lli-14 /tmp/qsort.sliced.bc
```

Expected trigger:

- original executable returns `0`
- unsliced bitcode returns `0`
- sliced bitcode aborts on assertion

## Failure Log Snippet

```
Assertion `a[0] == 1 && a[1] == 2 && a[2] == 3' failed.
Program arguments: lli-14 .../qsort_basic_sort.__assert_fail.sliced.bc
```

Source log: `/tmp/dg_libc_mutator2_hunt/logs/qsort_basic_sort.run.__assert_fail.log`

## Stability Check

- rerun #1: `/tmp/dg_libc_mutator2_hunt/logs/qsort_basic_sort.rerun1.run.log`
- rerun #2: `/tmp/dg_libc_mutator2_hunt/logs/qsort_basic_sort.rerun2.run.log`
- both reruns fail with the same assertion

## Key IR Difference

Original IR contains:

```llvm
call void @qsort(...)
```

Sliced IR drops the `qsort` call entirely. The array remains unsorted, so the
post-condition assert fails.

## De-dup Check vs Upstream

- GitHub issue search API query:
  `repo:mchalupa/dg qsort in:title,body`
- Result count: `0` (checked 2026-03-08)
