# BUG-ERRNO-SIDEEFFECT-DROPPED

## Decision

- Type: precision / dead-code
- Status: **confirmed**
- Rule satisfied: `orig PASS` + `sliced FAIL` (stable 2/2 reruns)

## Symptom

For APIs that communicate failure through `errno`, slicing under
`-c __assert_fail` removes the API call when its return value is discarded.
`errno` then remains unchanged, causing semantic mismatch.

## Minimal Reproducer

- Source: `cases/precision/min_errno_strtoll_sideeffect.c`

```c
#include <assert.h>
#include <errno.h>
#include <stdlib.h>

int main(void) {
  errno = 0;
  (void)strtoll("999999999999999999999999999999999", 0, 10);
  assert(errno == ERANGE);
  return 0;
}
```

## Reproduction

```bash
clang-14 -O0 -g -std=gnu11 cases/precision/min_errno_strtoll_sideeffect.c -o /tmp/errno.orig
/tmp/errno.orig

clang-14 -O0 -g -std=gnu11 -c -emit-llvm cases/precision/min_errno_strtoll_sideeffect.c -o /tmp/errno.bc
lli-14 /tmp/errno.bc

llvm-slicer -c __assert_fail /tmp/errno.bc -o /tmp/errno.sliced.bc
lli-14 /tmp/errno.sliced.bc
```

Expected trigger:

- original executable returns `0`
- unsliced bitcode returns `0`
- sliced bitcode aborts on assertion

## Confirmed Extensions

All below are `orig PASS / unsliced PASS / sliced FAIL` under `-c __assert_fail`:

- `strtol_errno_erange`
- `strtoll_errno_erange`
- `strtod_errno_erange`
- `wcstol_errno_erange`
- `wcstoll_errno_erange`
- `fopen_errno_enoent`
- `open_errno_enoent`

Controls in the same matrix remain PASS/PASS:

- `control_strlen_no_errno`
- `control_strtol_ret_used`

Matrix: `reports/precision/errno_sideeffect_matrix.tsv`

## Failure Log Snippet

```
Assertion `errno == ERANGE' failed.
Program arguments: lli-14 .../strtol_errno_erange.__assert_fail.sliced.bc
```

Source log: `/tmp/dg_errno_sideeffect_hunt/logs/strtol_errno_erange.run.__assert_fail.log`

## Stability Check

- full matrix rerun is identical (`errno_sideeffect_matrix.tsv.run1` vs `.run2`)
- each failing row rerun 2x, all still failing
- rerun logs: `/tmp/dg_errno_sideeffect_hunt/logs/*.rerun*.run.__assert_fail.log`

## Key IR Difference

Representative (`strtol_errno_erange`):

Original IR contains:

```llvm
%3 = call i64 @strtol(...)
```

Sliced IR removes `strtol` call while retaining `__errno_location` and assert check:

```llvm
%2 = call i32* @__errno_location()
%3 = call i32* @__errno_location()
; no strtol call
```

Equivalent removal also appears for `fopen_errno_enoent` (`@fopen` dropped).

## De-dup Check vs Upstream

- Local snapshot grep (`reports/precision/upstream_issues_snapshot.json`) has no keyword hit for:
  `strtol`, `strtoll`, `strtod`, `wcstol`, `wcstoll`, `fopen`, `open`, `errno`
  (checked 2026-03-09).
