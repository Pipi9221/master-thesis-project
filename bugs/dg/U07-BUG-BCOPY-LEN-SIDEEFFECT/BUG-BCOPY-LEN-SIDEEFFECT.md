# BUG-BCOPY-LEN-SIDEEFFECT

## Decision

- Type: precision / dead-code (incorrect removal changes semantics)
- Status: **confirmed**
- Rule satisfied: `orig PASS` + `sliced FAIL` (stable 2/2 reruns)

## Minimal Reproducer

- Source: `cases/precision/min_bcopy_len_sideeffect.c`

```c
#define _GNU_SOURCE
#include <assert.h>
#include <string.h>
static int g = 0;
static size_t nside(void) { g = 1; return 2; }
int main(void) {
  char dst[8] = {0};
  bcopy("ab", dst, nside());
  assert(g == 1 && dst[0] == 'a' && dst[1] == 'b');
  return 0;
}
```

## Reproduction

```bash
clang-14 -O0 -g cases/precision/min_bcopy_len_sideeffect.c -o /tmp/bcopy.orig
/tmp/bcopy.orig

clang-14 -O0 -g -c -emit-llvm cases/precision/min_bcopy_len_sideeffect.c -o /tmp/bcopy.bc
lli-14 /tmp/bcopy.bc

llvm-slicer -c __assert_fail /tmp/bcopy.bc -o /tmp/bcopy.sliced.bc
lli-14 /tmp/bcopy.sliced.bc
```

Expected bug trigger:

- `/tmp/bcopy.orig` returns `0`
- `lli-14 /tmp/bcopy.bc` returns `0`
- `lli-14 /tmp/bcopy.sliced.bc` aborts on assertion failure

## Failure Log Snippet

```
Assertion `g == 1 && dst[0] == 'a' && dst[1] == 'b'' failed.
Program arguments: lli-14 .../bcopy_len_sideeffect.__assert_fail.sliced.bc
```

Source log: `/tmp/dg_libc_wide_hunt/logs/bcopy_len_sideeffect.run.__assert_fail.log`

## Stability Check

- rerun #1: `/tmp/dg_libc_wide_hunt/logs/bcopy_len_sideeffect.rerun1.run.log`
- rerun #2: `/tmp/dg_libc_wide_hunt/logs/bcopy_len_sideeffect.rerun2.run.log`
- both reruns fail with the same assertion

## Key IR Difference

Original IR contains the transfer call:

```llvm
%5 = call i64 @nside()
call void @bcopy(..., i64 noundef %5)
```

Sliced IR drops `bcopy` entirely:

```llvm
%3 = call i64 @nside()
; bcopy call removed
```

And `nside` is reduced to returning `undef` (length no longer consumed):

```llvm
define internal i64 @nside() {
  store i32 1, i32* @g
  ret i64 undef
}
```

Result: destination buffer is never copied, assertion fails.

## De-dup Check vs Upstream

- GitHub search query: `repo:mchalupa/dg bcopy`
- Result count: `0` (checked on 2026-03-08)
