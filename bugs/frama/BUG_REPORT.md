# Bug Report: Missing Declaration for Normalized `sizeof` Operand

## Description
When slicing a program containing `sizeof(expr)` where `expr` involves a variable that is otherwise unused (except for its type), Frama-C's normalization may introduce a temporary variable (e.g., `tmp_0`). The slicer then removes the declaration of this temporary variable because it is not "used" in the slice criteria, but the `sizeof` expression in the sliced code still refers to it (e.g., `sizeof(*tmp_0)`), causing a compilation error.

## Reproduction
Test case: `Slicing/test/cases/value_sizeof_repro.c`

```c
// CRITERIA: value g_out
#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct S {
  uint32_t a;
  uint16_t b;
};

int main(void) {
  struct S s = {0};
  struct S *p = &s; 
  // Use in array size declaration
  uint8_t buf[sizeof(*p)];
  
  g_out = (uint32_t)sizeof(buf);
  printf("%u\n", g_out);
  return 0;
}
```

## Expected Behavior
The sliced code should either:
1. Preserve the declaration of the temporary variable used in `sizeof`.
2. Or resolve `sizeof` to a constant if possible.
3. Or use the original expression if valid.

## Actual Behavior
Sliced code:
```c
// ...
int main(void) {
  // ...
  uint8_t buf[sizeof(*tmp_0)]; // tmp_0 is undeclared!
  // ...
}
```
Compilation fails with: `error: ‘tmp_0’ undeclared`
