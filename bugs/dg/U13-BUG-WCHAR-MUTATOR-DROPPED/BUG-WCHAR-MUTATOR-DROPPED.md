# BUG-WCHAR-MUTATOR-DROPPED

## Decision

- Type: precision / dead-code
- Status: **confirmed**
- Rule satisfied: `orig PASS` + `sliced FAIL` (stable 2/2 reruns)

## Symptom

Multiple wide-char mutator APIs are removed by slicing under `-c __assert_fail`,
dropping required writes to destination buffers.

## Minimal Reproducer

- Source: `cases/precision/min_wcscpy_discard_ret.c`

```c
#include <assert.h>
#include <wchar.h>
int main(void) {
  wchar_t dst[8] = {0};
  wcscpy(dst, L"ab");
  assert(dst[0] == L'a' && dst[1] == L'b' && dst[2] == 0);
  return 0;
}
```

## Reproduction

```bash
clang-14 -O0 -g -std=gnu11 cases/precision/min_wcscpy_discard_ret.c -o /tmp/wcscpy.orig
/tmp/wcscpy.orig

clang-14 -O0 -g -std=gnu11 -c -emit-llvm cases/precision/min_wcscpy_discard_ret.c -o /tmp/wcscpy.bc
lli-14 /tmp/wcscpy.bc

llvm-slicer -c __assert_fail /tmp/wcscpy.bc -o /tmp/wcscpy.sliced.bc
lli-14 /tmp/wcscpy.sliced.bc
```

Expected trigger:

- original executable returns `0`
- unsliced bitcode returns `0`
- sliced bitcode aborts on assertion

## Confirmed Extensions

All below are `orig PASS / unsliced PASS / sliced FAIL` under `-c __assert_fail`:

- `wmemcpy_basic`
- `wmemmove_basic`
- `wmemset_basic`
- `wcscpy_basic`
- `wcsncpy_basic`
- `wcscat_basic`
- `wcsncat_basic`

Matrix: `reports/precision/libc_mutator2_matrix.tsv`

## Failure Log Snippet

```
Assertion `dst[0] == L'a' && dst[1] == L'b' && dst[2] == 0' failed.
Program arguments: lli-14 .../wcscpy_basic.__assert_fail.sliced.bc
```

Source log: `/tmp/dg_libc_mutator2_hunt/logs/wcscpy_basic.run.__assert_fail.log`

## Stability Check

- all affected rows were rerun twice and remained failing
- example reruns:
  - `/tmp/dg_libc_mutator2_hunt/logs/wcscpy_basic.rerun1.run.log`
  - `/tmp/dg_libc_mutator2_hunt/logs/wcscpy_basic.rerun2.run.log`
  - `/tmp/dg_libc_mutator2_hunt/logs/wmemset_basic.rerun1.run.log`
  - `/tmp/dg_libc_mutator2_hunt/logs/wmemset_basic.rerun2.run.log`

## Key IR Difference

Original IR contains:

```llvm
%5 = call i32* @wcscpy(...)
```

Sliced IR removes the `wcscpy` call. Destination stays zeroed and assert fails.

## De-dup Check vs Upstream

- GitHub issue search API queries:
  - `repo:mchalupa/dg wcscpy in:title,body`
  - `repo:mchalupa/dg wmemcpy in:title,body`
  - `repo:mchalupa/dg wmemmove in:title,body`
  - `repo:mchalupa/dg wmemset in:title,body`
- Result counts: all `0` (checked 2026-03-08)
