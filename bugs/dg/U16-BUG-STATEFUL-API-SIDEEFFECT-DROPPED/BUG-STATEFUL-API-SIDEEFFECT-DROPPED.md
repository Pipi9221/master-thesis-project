# BUG-STATEFUL-API-SIDEEFFECT-DROPPED

## Decision

- Type: precision / dead-code
- Status: **confirmed**
- Rule satisfied: `orig PASS` + `sliced FAIL` (stable rerun)

## Symptom

For non-modeled stateful libc/POSIX APIs, slicing under `-c __assert_fail`
drops setup/state-transition calls and keeps only later checks/consumers.
This changes process or stream state and breaks semantics.

Representative patterns:

- PRNG state: `srand` / first `rand` removed, later `rand` kept
- tokenizer state: first `strtok` removed, second `strtok(NULL, ...)` kept
- environment state: `setenv` removed, `getenv` kept
- stream state: `rewind` or first `fgetc` removed, later read/assert kept

## Minimal Reproducer

- Source: `cases/precision/min_setenv_state_effect.c`

```c
#include <assert.h>
#include <stdlib.h>

int main(void) {
  unsetenv("DG_STATEFUL_MIN");
  setenv("DG_STATEFUL_MIN", "1", 1);
  char *p = getenv("DG_STATEFUL_MIN");
  assert(p && p[0] == '1');
  unsetenv("DG_STATEFUL_MIN");
  return 0;
}
```

## Reproduction

```bash
cd $DG_REPO

clang-14 -O0 -g -std=gnu11 cases/precision/min_setenv_state_effect.c -o /tmp/min_setenv.orig
/tmp/min_setenv.orig

clang-14 -O0 -g -std=gnu11 -c -emit-llvm cases/precision/min_setenv_state_effect.c -o /tmp/min_setenv.bc
lli-14 /tmp/min_setenv.bc

llvm-slicer -c __assert_fail /tmp/min_setenv.bc -o /tmp/min_setenv.sliced.bc
lli-14 /tmp/min_setenv.sliced.bc
```

Expected trigger:

- original executable returns `0`
- unsliced bitcode returns `0`
- sliced bitcode aborts on assertion

## Confirmed Extensions

Matrix: `reports/precision/stateful_api_matrix.tsv`

Confirmed failing rows (`orig PASS / unsliced PASS / sliced FAIL`, `-c __assert_fail`):

- `rand_state_discard`
- `strtok_state_discard`
- `fgetc_state_discard`
- `rewind_state_effect`
- `setenv_state_effect`

Controls in same matrix remain PASS/PASS:

- `rand_control_used`
- `strtok_control_used`

Related failing I/O rows in same matrix:

- `read_state_discard`
- `read_ret_used_still_fail`

Those two are likely adjacent to the already-tracked output-buffer / file-I/O
drop pattern and are kept here as related evidence, not a separate family.

## Failure Log Snippet

```
Assertion `p && p[0] == '1'' failed.
Program arguments: lli-14 /tmp/min_setenv_state_effect.sliced.bc
```

## Key IR Difference

Representative (`min_setenv_state_effect`):

Original IR has:

```llvm
call i32 @setenv(...)
call i8* @getenv(...)
```

Sliced IR keeps only:

```llvm
call i8* @getenv(...)
; setenv removed
```

Equivalent call-dropping appears in matrix rows for `srand`/`strtok`/`rewind`.

## De-dup Check vs Upstream

Local snapshot grep (`reports/precision/upstream_issues_snapshot.json`) has no
direct keyword hit for:

- `setenv(`, `strtok(`, `rewind(`, `fgetc(`, `srand(`

(checked 2026-03-09)

