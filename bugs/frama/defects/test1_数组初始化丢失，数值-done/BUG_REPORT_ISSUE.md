# Bug Report: Const Array Initialization Lost During Slicing

## Summary

Frama-C's slicing feature incorrectly removes initialization values from `const` local arrays that are used in computations. This causes the sliced program to read uninitialized memory, leading to incorrect results.

## Environment

- **Frama-C version**: [please specify]
- **Platform**: [please specify]
- **Compiler**: [please specify]

## Description

When performing backward slicing on a target variable, Frama-C correctly identifies and preserves local arrays that are used in the computation path. However, it fails to preserve the initialization values of `const` arrays.

This is a **miscompilation** issue: the slicing tool successfully generates compilable code, but the sliced program produces incorrect results compared to the original program.

### Expected Behavior

The sliced program should preserve both the declaration and initialization of variables that are used in the slice criterion's computation path, maintaining semantic equivalence with the original program.

### Actual Behavior

The initialization of `const` local arrays is removed during slicing, resulting in:
- ✅ Array declarations are preserved (correct)
- ❌ Array initializations are lost (incorrect)
- ❌ The sliced program reads uninitialized memory
- ❌ Results differ from the original program

## Steps to Reproduce

### 1. Prepare the Source File

Use the provided test file (see Attachments section) or create a program with the following structure:

```c
static int16_t g_203 = 0x07C0L;
static int16_t *g_2774 = &g_203;
static int16_t **g_2778 = &g_2774;

static void func_1(void) {
    const uint64_t l_4351[3] = {18446744073709551610UL,
                                18446744073709551610UL,
                                18446744073709551610UL};
    
    // Array element l_4351[1] is used in calculation affecting g_203
    // ... (see attached file for complete code) ...
}

int main(void) {
    func_1();
    printf("g_203: %d\n", g_203);
    return 0;
}
```

### 2. Run Frama-C Slicing

```bash
frama-c source.c -slice-value g_203 -then-on 'Slicing export' -print -ocode sliced.c
```

### 3. Observe the Issue

**Original code (correct)**:
```c
static void func_1(void) {
    const uint64_t l_4351[3] = {18446744073709551610UL,  // ✅ Initialized
                                18446744073709551610UL,
                                18446744073709551610UL};
    // ... uses l_4351[1] ...
}
```

**Sliced code (incorrect)**:
```c
static void func_1_slice_1(void) {
    uint64_t const l_4351[3];  // ❌ Missing initialization!
    // ... uses l_4351[1] ... (reads uninitialized memory)
}
```

### 4. Verify the Problem

Compile and run both programs:

```bash
# Original program
gcc -O0 source.c -o original
./original
# Output: g_203: -53

# Sliced program  
gcc -O0 sliced.c -o sliced
./sliced
# Output: g_203: -59  (incorrect!)
```

**Note**: You may see compiler warnings about uninitialized variable usage:
```
sliced.c:127: warning: 'l_4351[1]' may be used uninitialized [-Wmaybe-uninitialized]
```

## Impact

- **Severity**: High - the sliced program produces incorrect results
- **Correctness**: The sliced program violates program slicing semantics (should preserve behavior for the slice criterion)
- **Undefined Behavior**: Reading uninitialized memory can lead to undefined behavior

## Analysis

### What Works Correctly

1. **Data dependency identification**: The slicing algorithm correctly identifies that `l_4351[1]` is used in the computation path to `g_203`
2. **Variable declaration preservation**: The array declaration is preserved in the sliced code

### What Fails

1. **Initialization value preservation**: The array initialization is removed, even though:
   - The array is marked as `const` (must be initialized at declaration in C)
   - Array elements are actively used in calculations affecting the slice criterion
   - The initialization values are a data dependency source for the slice criterion

### Likely Cause

This appears to be a failure in the dependency graph construction:
- The **use** of `l_4351[1]` is correctly tracked (dependency edge: use → declaration)
- The **initialization** of `l_4351` is **not** recognized as a dependency source
- The initialization statement is filtered out during slice extraction

The slicing algorithm may be treating declaration-time initialization as a "definition" node rather than an "assignment" node, or may not be creating the proper dependency edge from the array usage to its initialization.

## Workaround

Manually restore the array initialization in the sliced code:

```c
// Change from:
uint64_t const l_4351[3];

// To:
uint64_t const l_4351[3] = {18446744073709551610UL,
                            18446744073709551610UL,
                            18446744073709551610UL};
```

After applying this fix, the sliced program produces the correct result (`g_203 = -53`).

## Additional Information

### Related Patterns

This issue may be part of a broader pattern affecting:
- `const` local variables (both scalars and arrays) with initialization at declaration
- Variables where declaration-time initialization is treated differently from explicit assignments in the dependency graph

### Verification

To verify the issue without running the full program, compile the sliced code with:
```bash
gcc -Wall -Werror sliced.c
```

This should produce warnings/errors about uninitialized variable usage.

## Attachments

Please include the following files when submitting:

1. **Source file** (`source.c`): The original program
2. **Sliced file** (`sliced.c`): The output from Frama-C slicing
3. **Expected output**: `g_203: -53`
4. **Actual output**: `g_203: -59`

### Test Results Summary

| Program Version | g_203 Value | Status |
|----------------|-------------|--------|
| Original program | `-53` | ✅ Correct |
| Sliced program | `-59` | ❌ Incorrect |
| Sliced program (with manual fix) | `-53` | ✅ Correct |

