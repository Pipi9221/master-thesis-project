# Frama-C Slicing report draft (for GitLab issue)

Title suggestion:
Slicing: practical issues observed while using the slicing tool (self-contained examples)

---

Hello Frama-C team,

Thank you for your work on Frama-C.
We understand from previous discussions that slicing maintenance resources are currently limited.
With that in mind, this report is shared as a practical reminder from real usage, in case it helps future triage when time is available.

Environment used for reproductions:
- Frama-C 30.0 (Zinc)
- Ubuntu 22.04
- opam switch 4.14.2
- gcc

---

## 1) Issue 007: unresolved `__fc_atomic_*` symbols after slicing export

### Source example (before slicing)

Create file `issue007_return_c11_atomic.c`:

```c
#include <stdint.h>
#include <stdio.h>
#include <stdatomic.h>

static _Atomic uint32_t g = 0U;

static uint32_t inc(uint32_t x) {
  uint32_t prev = atomic_fetch_add(&g, x);
  uint32_t now = atomic_load(&g);
  return (prev ^ now) + 1U;
}

int main(void) {
  uint32_t a = inc(3U);
  uint32_t b = inc(5U);
  uint32_t out = a ^ (b << 1) ^ atomic_load(&g);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}
```

### Slicing command

```bash
opam exec --switch=4.14.2 -- frama-c issue007_return_c11_atomic.c \
  -slice-return main,inc \
  -then-on "Slicing export" -print -ocode issue007_return_c11_atomic.sliced.c
```

### Sliced result (key excerpt)

```c
tmp = __fc_atomic_fetch_add((void *)(& g),(unsigned long long)x,
                            sizeof(uint32_t));
...
tmp_0 = __fc_atomic_load((void *)(& g),sizeof(uint32_t));
```

### Problem

Compile command:

```bash
gcc -std=c11 -O0 -Wall -Wextra issue007_return_c11_atomic.sliced.c -o issue007.bin
```

Observed error:

```text
undefined reference to __fc_atomic_fetch_add
undefined reference to __fc_atomic_load
```

So the exported sliced file is not independently linkable.

---

## 2) Issue 010: lifecycle semantics not preserved after slicing

### Source example (before slicing)

Create file `issue010_return_gnu_constructor_init.c`:

```c
#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

__attribute__((constructor)) static void init(void) {
  g = (7U * 33U) ^ 0x5AU;
}

int main(void) {
  uint32_t out = g + 1U;
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}
```

### Slicing command

```bash
opam exec --switch=4.14.2 -- frama-c issue010_return_gnu_constructor_init.c \
  -slice-return main \
  -then-on "Slicing export" -print -ocode issue010_return_gnu_constructor_init.sliced.c
```

### Sliced result (key excerpt)

```c
static uint32_t g = 0U;
int main(void)
{
  uint32_t out = g + 1U;
  return (int)(out & 0xFFU);
}
```

The constructor is no longer present, and `g` remains at initialization value.

### Problem

Runtime comparison:

```bash
gcc -std=c11 -O0 -Wall -Wextra issue010_return_gnu_constructor_init.c -o issue010_orig.bin
gcc -std=c11 -O0 -Wall -Wextra issue010_return_gnu_constructor_init.sliced.c -o issue010_sliced.bin
./issue010_orig.bin; echo "orig_exit:$?"
./issue010_sliced.bin; echo "sliced_exit:$?"
```

Observed:

```text
orig_exit:190
sliced_exit:1
```

This is a semantic mismatch (not just formatting or warning differences).

Additional reproduced lifecycle cases (same pattern of mismatch):
- `return_atexit_exitcode`: original `200`, sliced `0`
- `return_gnu_destructor_exitcode`: original `201`, sliced `0`
- `return_gnu_cleanup_attribute`: original `129`, sliced `0`

---

## 3) Issue 015: exported `pid_t` breaks strict C11 compilation

### Source example (before slicing)

Create file `issue015_return_unistd_posix.c`:

```c
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  uint32_t x = (uint32_t)getpid();
  x = (x * 33U) ^ 0x5AU;
  printf("%u\n", x);
  return (int)(x & 0xFFU);
}
```

### Slicing command

```bash
opam exec --switch=4.14.2 -- frama-c issue015_return_unistd_posix.c \
  -slice-return main \
  -then-on "Slicing export" -print -ocode issue015_return_unistd_posix.sliced.c
```

### Sliced result (key excerpt)

```c
pid_t tmp;
tmp = getpid();
uint32_t x = (uint32_t)tmp;
```

### Problem

Compile command:

```bash
gcc -std=c11 -O0 -Wall -Wextra issue015_return_unistd_posix.sliced.c -o issue015.bin
```

Observed error:

```text
error: unknown type name 'pid_t'
```

So strict C11 compilation fails on the exported sliced file.

---

## 4) Issue 016: `-slice-loop-inv` aborts on term lval dependencies

### Source example (before slicing)

Create file `issue016_loopinv_acsl_forall_zone.c`:

```c
int t[10];

int main(void) {
  /*@ loop invariant inv_a: 0 <= i <= 10;
      loop invariant inv_b: \forall integer k; 0 <= k < i ==> t[k] == 0;
  */
  for (int i = 0; i < 10; i++) {
    t[i] = 0;
  }
  //@ assert t[0] == 0;
  return t[0];
}
```

### Slicing command

```bash
opam exec --switch=4.14.2 -- frama-c issue016_loopinv_acsl_forall_zone.c \
  -slice-loop-inv main \
  -then-on "Slicing export" -print -ocode issue016_loopinv_acsl_forall_zone.sliced.c
```

### Problem (log output)

Observed:

```text
Plug-in slicing aborted: unimplemented feature.
'[Plug-in slicing] [logic_interp] dependencies of a term lval'.
```

And no sliced output file is generated.

---

Thank you again.
