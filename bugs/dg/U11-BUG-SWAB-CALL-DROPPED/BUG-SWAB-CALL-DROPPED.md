# BUG-SWAB-CALL-DROPPED

## Decision

- Type: precision / dead-code
- Status: **confirmed**
- Rule satisfied: `orig PASS` + `sliced FAIL` (stable 2/2 reruns)

## Minimal Reproducer

- Source: `cases/precision/min_swab_call_dropped.c`

```c
#define _GNU_SOURCE
#include <assert.h>
#include <string.h>
#include <unistd.h>
int main(void) {
  char src[8] = {'a', 'b', 'c', 'd', 0};
  char dst[8] = {0};
  swab(src, dst, 4);
  assert(dst[0] == 'b' && dst[1] == 'a' && dst[2] == 'd' && dst[3] == 'c');
  return 0;
}
```

## Reproduction

```bash
clang-14 -O0 -g -std=gnu11 cases/precision/min_swab_call_dropped.c -o /tmp/swab.orig
/tmp/swab.orig

clang-14 -O0 -g -std=gnu11 -c -emit-llvm cases/precision/min_swab_call_dropped.c -o /tmp/swab.bc
lli-14 /tmp/swab.bc

llvm-slicer -c __assert_fail /tmp/swab.bc -o /tmp/swab.sliced.bc
lli-14 /tmp/swab.sliced.bc
```

Expected trigger:

- original executable returns `0`
- unsliced bitcode returns `0`
- sliced bitcode aborts on assertion

## Failure Log Snippet

```
Assertion `dst[0] == 'b' && dst[1] == 'a' && dst[2] == 'd' && dst[3] == 'c'' failed.
Program arguments: lli-14 .../swab_basic.__assert_fail.sliced.bc
```

Source log: `/tmp/dg_libc_mutator2_hunt/logs/swab_basic.run.__assert_fail.log`

## Stability Check

- rerun #1: `/tmp/dg_libc_mutator2_hunt/logs/swab_basic.rerun1.run.log`
- rerun #2: `/tmp/dg_libc_mutator2_hunt/logs/swab_basic.rerun2.run.log`
- both reruns fail with the same assertion

## Key IR Difference

Original IR contains:

```llvm
call void @swab(...)
```

Sliced IR removes this call. Destination bytes are never swapped, assert fails.

## De-dup Check vs Upstream

- GitHub issue search API query:
  `repo:mchalupa/dg swab in:title,body`
- Result count: `0` (checked 2026-03-08)
