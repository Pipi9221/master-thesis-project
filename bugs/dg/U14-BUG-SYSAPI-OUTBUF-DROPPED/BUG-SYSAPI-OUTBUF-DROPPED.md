# BUG-SYSAPI-OUTBUF-DROPPED

## Decision

- Type: precision / dead-code
- Status: **confirmed**
- Rule satisfied: `orig PASS` + `sliced FAIL` (stable 2/2 reruns)

## Symptom

For several APIs that write to caller-provided output buffers, slicing under
`-c __assert_fail` removes the call when the return value is not used, which
drops the required buffer updates.

## Minimal Reproducer

- Source: `cases/precision/min_getcwd_discard_ret.c`

```c
#include <assert.h>
#include <unistd.h>
int main(void) {
  char b[256] = {0};
  (void)getcwd(b, sizeof(b));
  assert(b[0] != 0);
  return 0;
}
```

## Reproduction

```bash
clang-14 -O0 -g -std=gnu11 cases/precision/min_getcwd_discard_ret.c -o /tmp/getcwd.orig
/tmp/getcwd.orig

clang-14 -O0 -g -std=gnu11 -c -emit-llvm cases/precision/min_getcwd_discard_ret.c -o /tmp/getcwd.bc
lli-14 /tmp/getcwd.bc

llvm-slicer -c __assert_fail /tmp/getcwd.bc -o /tmp/getcwd.sliced.bc
lli-14 /tmp/getcwd.sliced.bc
```

Expected trigger:

- original executable returns `0`
- unsliced bitcode returns `0`
- sliced bitcode aborts on assertion

## Confirmed Extensions

All below are `orig PASS / unsliced PASS / sliced FAIL` under `-c __assert_fail`:

- `getcwd_effect`
- `gethostname_effect`
- `realpath_effect`
- `ctime_r_effect`
- `localtime_r_effect`

Controls in the same matrix remain PASS/PASS:

- `control_getenv`
- `control_strchr`

Matrix: `reports/precision/sysapi_outbuf_matrix.tsv`

## Failure Log Snippet

```
Assertion `b[0] != 0' failed.
Program arguments: lli-14 .../getcwd_effect.__assert_fail.sliced.bc
```

Source log: `/tmp/dg_sysapi_outbuf_hunt/logs/getcwd_effect.run.__assert_fail.log`

## Stability Check

- all five failing rows were rerun twice, all still failing
- rerun logs under `/tmp/dg_sysapi_outbuf_hunt/logs/*.rerun*.run.log`

## Key IR Difference

Original IR contains:

```llvm
%5 = call i8* @getcwd(i8* noundef %4, i64 noundef 256)
```

Sliced IR removes `getcwd` call, so `b` stays zeroed and assert fails.

## De-dup Check vs Upstream

- Local issue snapshot grep (`upstream_issues_snapshot.json`) has no hits for:
  `getcwd`, `gethostname`, `realpath`, `ctime_r`, `localtime_r`
  (checked 2026-03-08).
