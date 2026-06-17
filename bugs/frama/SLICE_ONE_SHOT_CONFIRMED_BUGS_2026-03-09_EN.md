# Frama-C Slicing One-Shot Report (Re-verified on 2026-03-09)

- Verification date: 2026-03-09
- Environment: Ubuntu 22.04 (WSL), Frama-C 30.0 (Zinc), opam switch 4.14.2, gcc
- Method: re-run slicing export commands, then compile/run checks

## Summary

Re-checked candidate true bugs: 007/010/011/013/015/016.

- Confirmed reproducible now: 007, 010, 015, 016
- Not reproduced now (hold or mark as needs reconfirmation): 011, 013

---

## Issue 007: C11 atomics unresolved symbols after export (Confirmed)

Directory: `issues/007-c11-atomics-undefined-symbols`

Reproduction:

```bash
cd /home/cyuan/projects/Slicing/issues/007-c11-atomics-undefined-symbols
opam exec --switch=4.14.2 -- frama-c cases/return_c11_atomic.c \
  -slice-return main,inc \
  -then-on "Slicing export" -print -ocode artifacts/return_c11_atomic.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/return_c11_atomic.sliced.c -o /tmp/issue007.bin
```

Observed:
- link failure with unresolved symbols
- `undefined reference to __fc_atomic_fetch_add`
- `undefined reference to __fc_atomic_load`

---

## Issue 010: lifecycle hook loss causes semantic mismatch (Confirmed)

Directory: `issues/010-gnu-constructor-dropped`

All 4 provided cases reproduced behavioral mismatch between original and sliced programs:

1. `return_gnu_constructor_init`
- original exit: 190
- sliced exit: 1

2. `return_atexit_exitcode`
- original exit: 200
- sliced exit: 0

3. `return_gnu_destructor_exitcode`
- original exit: 201
- sliced exit: 0

4. `return_gnu_cleanup_attribute`
- original exit: 129
- sliced exit: 0

Conclusion:
- sliced outputs compile, but do not preserve main-external lifecycle semantics.

---

## Issue 015: exported `pid_t` fails under strict C11 (Confirmed)

Directory: `issues/015-posix-pid_t-missing`

Reproduction:

```bash
cd /home/cyuan/projects/Slicing/issues/015-posix-pid_t-missing
opam exec --switch=4.14.2 -- frama-c cases/return_unistd_posix.c \
  -slice-return main \
  -then-on "Slicing export" -print -ocode artifacts/return_unistd_posix.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/return_unistd_posix.sliced.c -o /tmp/issue015.bin
```

Observed:
- compile failure: `error: unknown type name 'pid_t'`
- exported code contains:
  - `pid_t tmp;`
  - `tmp = getpid();`

---

## Issue 016: `-slice-loop-inv` aborts on term lval dependencies (Confirmed)

Directory: `issues/016-slicing-term-lval-deps`

Reproduction:

```bash
cd /home/cyuan/projects/Slicing/issues/016-slicing-term-lval-deps
opam exec --switch=4.14.2 -- frama-c cases/loopinv_acsl_forall_zone.c \
  -slice-loop-inv main \
  -then-on "Slicing export" -print -ocode /tmp/issue016.out.c
```

Observed:
- slicing aborts with:
  - `Plug-in slicing aborted: unimplemented feature.`
  - `[Plug-in slicing] [logic_interp] dependencies of a term lval`
- no output file generated at `/tmp/issue016.out.c`

---

## Issue 011 / 013 status in this re-check (Not reproduced)

Issue 011 (`issues/011-sizeof-tmp-undeclared`):
- re-ran slicing export
- resulting artifacts compiled successfully under `gcc -std=c11 -O0 -Wall -Wextra`
- previous `tmp_0 undeclared` failure did not reproduce

Issue 013 (`issues/013-sizeof-deref-tmp-undeclared`):
- re-ran slicing export
- resulting artifacts compiled successfully under `gcc -std=c11 -O0 -Wall -Wextra`
- previous `sizeof(*tmp_0)` with undeclared `tmp_0` did not reproduce

---

## Suggested one-shot submission scope

Submit one umbrella issue with the confirmed set only:
- 007 (link-time unresolved symbols)
- 010 (semantic non-preservation)
- 015 (strict C11 compile break)
- 016 (NYI abort path)

Optional note to include:
- `011/013 were re-checked on 2026-03-09 but did not reproduce in this environment, so they are excluded from this one-shot report to avoid false positives.`
