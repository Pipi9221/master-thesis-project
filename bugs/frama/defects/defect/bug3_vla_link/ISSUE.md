# Bug: VLA Allocation Function Undefined Reference

## Summary

Frama-C slicing tool generates code with undefined function reference when slicing programs with Variable Length Arrays (VLA). The sliced program calls `__fc_vla_alloc` function but the function is not defined, causing link errors.

## Steps to Reproduce

**Source code** (`test_label_and_vla.c`):

```c
#include <stdio.h>

int main(void) {
    int x = 1;
    int n = 5;
    
    if (x > 0) {
        int arr[n];  // VLA
        for (int i = 0; i < n; i++) {
            arr[i] = i;
            x += arr[i];
        }
    }
    
    L1:
    x += 10;
    
    int result = x;
    return result;
}
```

**Slice command**:
```bash
frama-c test_label_and_vla.c \
  -slice-value result \
  -then-on 'Slicing export' \
  -print \
  -ocode test_label_and_vla_sliced.c
```

**Compile sliced program**:
```bash
gcc -o test_sliced test_label_and_vla_sliced.c
```

## Expected vs Actual

**Expected**: Sliced program compiles, links, and runs correctly (Result: 21)

**Note**: The original program compiles, links, and runs correctly, returning 21.

**Actual**: 
- ✅ **Compilation succeeds**: Syntax check and object file generation work
- ❌ **Linking fails**: Link error occurs
- ❌ **Cannot run**: No executable generated due to link failure

**Link error**:
```
/usr/bin/ld: /tmp/ccDVaku1.o: in function `main':
test_label_and_vla_sliced.c:(.text+0x2f): undefined reference to `__fc_vla_alloc'
collect2: error: ld returned 1 exit status
```

**Detailed status**:
| Stage | Status | Explanation |
|-------|--------|-------------|
| Syntax check | ✅ Pass | Only checks syntax, not definitions |
| Compilation | ✅ Pass | Generates object file, symbols marked as undefined |
| Linking | ❌ Fail | Cannot find `__fc_vla_alloc` definition |
| Execution | ❌ Cannot run | No executable generated due to link failure |

## Problem

The sliced code contains:

```c
__attribute__((__FC_BUILTIN__)) void *__fc_vla_alloc(unsigned long size);  // Declaration only

int main(void) {
    int x = 1;
    int n = 5;
    {
        unsigned long __lengthof_arr;
        __lengthof_arr = (unsigned long)n;
        int *arr = __fc_vla_alloc(sizeof(int) * __lengthof_arr);  // ❌ Function call but no definition
        // ... rest of code
    }
}
```

**Missing Definition**:
```c
// ❌ This function definition is missing
void *__fc_vla_alloc(unsigned long size) {
    return malloc(size);  // Should allocate memory but implementation is missing
}
```

The slicing tool:
- ✅ Converts VLA to dynamic allocation using `__fc_vla_alloc`
- ✅ Generates function **declaration**
- ✅ Generates function **call**
- ❌ **Does NOT provide the function definition** (implementation)
- ❌ **Result**: Link error - `undefined reference to '__fc_vla_alloc'`

## Root Cause

When slicing code with VLA, Frama-C converts VLA to dynamic allocation using `__fc_vla_alloc`, but:
1. The function declaration is generated ✅
2. The function is called ✅
3. The function definition is **missing** ❌

**Core Error Point**: The slicing tool generates a function call (`__fc_vla_alloc`) but does not provide the function definition. This creates a mismatch between declaration/call and definition, causing link errors.

### Possible Design Intentions

The `__FC_BUILTIN__` attribute suggests this might be intended as a library function:

#### Scenario 1: Should link from library
If `__fc_vla_alloc` is designed to be provided by a Frama-C runtime library:
- ❌ **No library found**: System check shows no Frama-C runtime library exists
- ❌ **No linking instructions**: Slicing tool doesn't provide `-lframa-c` or similar
- ❌ **No documentation**: No mention of required library in documentation

**If this is the design**: This is a **documentation/linking issue** - the tool should provide linking instructions.

#### Scenario 2: Should inline definition
If the function should be inlined in the sliced code:
- ❌ **No definition generated**: Slicing tool doesn't generate the function body
- ❌ **Cannot compile independently**: Sliced code cannot be compiled standalone

**If this is the design**: This is an **implementation issue** - the tool should generate the definition.

### Slicing Log Evidence

The slicing log shows that Frama-C processes `__fc_vla_alloc` as an external function:
```
[from] Computing for function __fc_vla_alloc
[from] Done for function __fc_vla_alloc
[from] Computing for function __fc_vla_free
[from] Done for function __fc_vla_free
```

The `[from]` prefix indicates these are treated as **external functions** (from other modules), which means:
- Frama-C assumes these functions will be provided at link time
- The slicing tool does not generate their definitions
- But in the sliced code, these functions are **not available**

### Conclusion

**Regardless of the design intention**, the current implementation is **incomplete**:
- If it should link from library: Missing library and documentation
- If it should inline definition: Missing function definition

Similar to the function pointer bug, this is a **missing definition/library issue** where the slicing tool assumes the function will be available at link time, but it's not provided either in the sliced code or as a linkable library.

## Workaround

Manually provide the `__fc_vla_alloc` function definition:
```c
void *__fc_vla_alloc(unsigned long size) {
    return malloc(size);
}
```

Or use static allocation if the size is known at compile time.

## Suggested Fix

The slicing tool should either:

### Option 1: Provide library and linking instructions
If `__fc_vla_alloc` is designed as a library function:
1. **Provide Frama-C runtime library** containing `__fc_vla_alloc` implementation
2. **Generate linking instructions** (e.g., `gcc -o output sliced.c -lframa-c`)
3. **Document the requirement** in slicing output or documentation

### Option 2: Inline function definition
If the function should be inlined:
1. **Generate the function definition** in the sliced code:
   ```c
   #include <stdlib.h>
   void *__fc_vla_alloc(unsigned long size) {
       return malloc(size);
   }
   ```
2. Or **convert VLA to static arrays** if size is known at compile time
3. Or **remove the function declaration** if VLA is not actually used in the slice

## Notes

- **Source program is valid**: Compiles, links, and runs correctly (returns 21)
- **Sliced program fails**: Cannot link due to missing `__fc_vla_alloc` definition
- The issue occurs when VLA is used in the source code and the code is sliced
- Original program uses standard VLA (stack allocation), which works fine
- Sliced program converts VLA to heap allocation, but fails to provide the allocation function
- The `__FC_BUILTIN__` attribute suggests this is an internal Frama-C function
- This affects programs that use VLA and are sliced

