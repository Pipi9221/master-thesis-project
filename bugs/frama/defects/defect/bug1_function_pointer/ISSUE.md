# Bug: Function Pointer Indirect Call Slicing Error

## Summary

Frama-C slicing tool generates incorrect code when slicing programs with function pointer indirect calls. The sliced program references non-existent functions, causing link errors.

## Steps to Reproduce

**Source code** (`test.c`):

```c
#include <stdio.h>

typedef int (*func_ptr_t)(int, int*);

int add_func(int x, int *p) {
    *p += x;
    return *p;
}

int mul_func(int x, int *p) {
    *p *= x;
    return *p;
}

func_ptr_t get_func(int choice) {
    if (choice == 1) return add_func;
    if (choice == 2) return mul_func;
    return NULL;
}

int main(void) {
    int val = 10;
    int choice = 1;
    
    func_ptr_t fp = get_func(choice);
    int result1 = fp(5, &val);
    
    choice = 2;
    fp = get_func(choice);
    int result2 = fp(3, &val);
    
    int result = result1 + result2 + val;
    printf("Result: %d\n", result);
    return result;
}
```

**Slice command**:
```bash
frama-c test.c \
  -slice-value result \
  -then-on 'Slicing export' \
  -print \
  -ocode test_sliced.c
```

**Compile sliced program**:
```bash
gcc -o test_sliced test__sliced.c
```

## Expected vs Actual

**Expected**: Sliced program compiles and runs correctly (Result: 105)

**Actual**: Link error:
```
undefined reference to `add_func'
undefined reference to `mul_func'
```

## Problem

The sliced code contains:

```c
func_ptr_t get_func_slice_1(int choice)
{
  if (choice == 1) {
    __retres = & add_func;  // ❌ add_func does not exist
  }
  __retres = & mul_func;    // ❌ mul_func does not exist
}
```

The slicing tool:
- ✅ Generates sliced functions: `add_func_slice_1`, `mul_func_slice_1`
- ✅ Removes original functions: `add_func`, `mul_func`
- ❌ **Does NOT update function pointer references**

## Root Cause

Function pointer references are not updated to point to sliced functions after function renaming.

## Workaround

Manually change function pointer to point to sliced functions:
```c
__retres = & add_func_slice_1;  // ✅
__retres = & mul_func_slice_1;  // ✅
```


## Notes

- Source program is valid (compiles and runs correctly)
- Both `-slice-value` and `-slice-return` produce the same issue
- After fixing, original function declarations become redundant
