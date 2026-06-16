# BUG-MEMFROB-LEN-SIDEEFFECT

## Decision

- Type: precision / dead-code
- Status: **confirmed**
- Rule satisfied: `orig PASS` + `sliced FAIL` (stable 2/2 reruns)

## Minimal Reproducer

- Source: `cases/precision/min_memfrob_len_sideeffect.c`

```c
#define _GNU_SOURCE
#include <assert.h>
#include <string.h>
static int g = 0;
static size_t nside(void) { g = 1; return 2; }
int main(void) {
  char dst[8] = "ab";
  memfrob(dst, nside());
  assert(g == 1 && dst[0] != 'a' && dst[1] != 'b');
  return 0;
}
```

## Reproduction

```bash
clang-14 -O0 -g cases/precision/min_memfrob_len_sideeffect.c -o /tmp/memfrob.orig
/tmp/memfrob.orig

clang-14 -O0 -g -c -emit-llvm cases/precision/min_memfrob_len_sideeffect.c -o /tmp/memfrob.bc
lli-14 /tmp/memfrob.bc

llvm-slicer -c __assert_fail /tmp/memfrob.bc -o /tmp/memfrob.sliced.bc
lli-14 /tmp/memfrob.sliced.bc
```

Expected trigger:

- original executable returns `0`
- unsliced bitcode returns `0`
- sliced bitcode aborts on assertion

## Failure Log Snippet

```
Assertion `g == 1 && dst[0] != 'a' && dst[1] != 'b'' failed.
Program arguments: lli-14 .../memfrob_len_sideeffect.__assert_fail.sliced.bc
```

Source log: `/tmp/dg_libc_wide_hunt/logs/memfrob_len_sideeffect.run.__assert_fail.log`

## Stability Check

- rerun #1: `/tmp/dg_libc_wide_hunt/logs/memfrob_len_sideeffect.rerun1.run.log`
- rerun #2: `/tmp/dg_libc_wide_hunt/logs/memfrob_len_sideeffect.rerun2.run.log`
- both reruns fail with the same assertion

## Key IR Difference

Original IR contains:

```llvm
%6 = call i8* @memfrob(i8* noundef %4, i64 noundef %5)
```

Sliced IR removes the `memfrob` call. Buffer mutation is lost, assert still checks
for mutated bytes, so sliced execution fails.

## De-dup Check vs Upstream

- Local issue snapshot grep (`upstream_issues_snapshot.json`) has no `memfrob` hit
  (checked 2026-03-08).
