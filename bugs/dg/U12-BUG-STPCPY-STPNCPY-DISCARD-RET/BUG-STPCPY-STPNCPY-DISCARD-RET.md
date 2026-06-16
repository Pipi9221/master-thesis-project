# BUG-STPCPY-STPNCPY-DISCARD-RET

## Decision

- Type: precision / dead-code
- Status: **confirmed**
- Rule satisfied: `orig PASS` + `sliced FAIL` (stable 2/2 reruns)

## Symptom

When return values are intentionally discarded, slicing with `-c __assert_fail`
can remove `stpcpy/stpncpy` calls and lose destination-buffer writes.

## Minimal Reproducer

- Source: `cases/precision/min_stpcpy_discard_ret.c`

```c
#define _GNU_SOURCE
#include <assert.h>
#include <string.h>
int main(void) {
  char dst[8] = {0};
  (void)stpcpy(dst, "ab");
  assert(dst[0] == 'a' && dst[1] == 'b' && dst[2] == 0);
  return 0;
}
```

## Reproduction

```bash
clang-14 -O0 -g -std=gnu11 cases/precision/min_stpcpy_discard_ret.c -o /tmp/stpcpy.orig
/tmp/stpcpy.orig

clang-14 -O0 -g -std=gnu11 -c -emit-llvm cases/precision/min_stpcpy_discard_ret.c -o /tmp/stpcpy.bc
lli-14 /tmp/stpcpy.bc

llvm-slicer -c __assert_fail /tmp/stpcpy.bc -o /tmp/stpcpy.sliced.bc
lli-14 /tmp/stpcpy.sliced.bc
```

Expected trigger:

- original executable returns `0`
- unsliced bitcode returns `0`
- sliced bitcode aborts on assertion

## Confirmed Extensions

- `stpncpy_discard_ret` also reproduces with same pattern.
- Matrix: `reports/precision/libc_mutator2_matrix.tsv`
- Logs:
  - `/tmp/dg_libc_mutator2_hunt/logs/stpcpy_discard_ret.*`
  - `/tmp/dg_libc_mutator2_hunt/logs/stpncpy_discard_ret.*`

## Failure Log Snippet

```
Assertion `dst[0] == 'a' && dst[1] == 'b' && dst[2] == 0' failed.
Program arguments: lli-14 .../stpcpy_discard_ret.__assert_fail.sliced.bc
```

## Stability Check

- `stpcpy_discard_ret`: rerun1/2 both fail
- `stpncpy_discard_ret`: rerun1/2 both fail

Rerun logs:

- `/tmp/dg_libc_mutator2_hunt/logs/stpcpy_discard_ret.rerun1.run.log`
- `/tmp/dg_libc_mutator2_hunt/logs/stpcpy_discard_ret.rerun2.run.log`
- `/tmp/dg_libc_mutator2_hunt/logs/stpncpy_discard_ret.rerun1.run.log`
- `/tmp/dg_libc_mutator2_hunt/logs/stpncpy_discard_ret.rerun2.run.log`

## Key IR Difference

Original IR contains:

```llvm
%5 = call i8* @stpcpy(...)
```

Sliced IR removes `stpcpy` call completely. Destination buffer remains zeroed,
and assert fails.

## Control

- `control_mempcpy_discard_ret` stays PASS/PASS in the same matrix, so this is
  not a universal "discard return => fail" artifact.

## De-dup Check vs Upstream

- GitHub issue search API query:
  `repo:mchalupa/dg stpcpy in:title,body`
- Result count: `0` (checked 2026-03-08)
