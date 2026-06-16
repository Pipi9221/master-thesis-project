# Frama-C Slicing Tool Issue: Uninitialized Variable Leading to Division by Zero

## 1. Source Program Description

The original program contains a local constant variable `l_488` in function `func_35_slice_1` that is used as a divisor in a modulo operation. In the original (non-sliced) program, this variable is properly initialized to `0xCC21L` (52257 in decimal), preventing any undefined behavior. Although `l_488` is a local variable and does not directly appear in the slicing criteria, it indirectly affects global variables that are part of the slicing criteria through computations.

## 2. Slicing Command

The program was sliced using Frama-C with slicing criteria targeting specific global variables:
```bash
frama-c batch_experiments/test_20251113_003156/test26/P6I3IZ_seed.c -slice-value g_6,g_106,g_109,g_9,g_13,g_71,g_14,g_158,g_161,g_221 -then-on 'Slicing export' -print -ocode batch_experiments/test_20251113_003156/test26/source_sliced.c
```

## 3. Sliced Program Issues

### Source Sliced Program
In the sliced source program (`source_sliced.c`), the Frama-C slicer incorrectly removes the initialization of the local variable `l_488`:

```c
static void func_35_slice_1(uint16_t p_39)
{
  uint64_t l_482;
  uint16_t const l_488;  // Uninitialized! Originally initialized to 0xCC21L (52257)
  // ...
  tmp_5 = safe_mod_func_int64_t_s_s_slice_1((int64_t)(& g_244 != & g_244),
                                            (int64_t)l_488);  // Using uninitialized l_488 as divisor
}
```

The `safe_mod_func_int64_t_s_s_slice_1` function performs the actual modulo operation:
```c
static int64_t safe_mod_func_int64_t_s_s_slice_1(int64_t si1, int64_t si2)
{
  int64_t tmp;
  tmp = si1 % si2;  // Division by zero occurs here when si2 is zero
  return tmp;
}
```

When `l_488` is uninitialized and happens to contain zero, this leads to undefined behavior causing a SIGFPE (floating point exception) and program crash. Although `l_488` is not directly part of the slicing criteria, it affects variables like `g_109` and `g_158` which are in the slicing criteria:

```c
// l_488 indirectly affects g_109 (which is in slicing criteria)
*l_489 |= tmp_7 ^ (int)l_488;  // l_489 points to g_109

// l_488 indirectly affects g_158 (which is in slicing criteria)
while (l_482 <= (uint64_t)1) {
  g_158 = (int64_t)1;
  while (g_158 >= (int64_t)0) g_158 -= (int64_t)1;
  l_482 += (uint64_t)1;
}
```

### Analysis of Different Initialization Values

An important aspect of this issue is understanding why different non-zero values for `l_488` produce the same program behavior, while zero causes a crash:

In the specific case of this program, the dividend in the modulo operation is always zero:
```c
tmp_5 = safe_mod_func_int64_t_s_s_slice_1((int64_t)(& g_244 != & g_244), (int64_t)l_488);
```

Since `(& g_244 != & g_244)` is always false, this is equivalent to `0 % l_488`.

Mathematically:
- `0 % 1 = 0`
- `0 % 2 = 0`
- `0 % 65535 = 0`

All non-zero divisors produce the same result (0) when the dividend is zero. This is why initializing `l_488` to any non-zero value (whether 1, 52257 or 65535) produces the same program behavior and avoids the division by zero error.

However, this is just a special mathematical case. In general:
- `100 % 1 = 0`
- `100 % 2 = 0`
- `100 % 65535 = 100`

Different divisors would produce different results with a non-zero dividend. The Frama-C slicer should not rely on such special cases to justify removing variable initializations.

In the original program, `l_488` is initialized to `0xCC21L` (52257 in decimal), which is a non-zero value that would not cause any division by zero errors.

## 4. Runtime Behavior

| Program | Status | Exit Code | Notes |
|---------|--------|-----------|-------|
| `source_program` | ✅ Normal | 0 | Runs correctly |
| `source_sliced` | ❌ **SIGFPE** | 136 | **Crashes with Floating Point Exception** |

### Test Results with Explicit Initialization
To verify the issue, we explicitly initialized `l_488` to different values:

- **Source program with `l_488 = 0`**: Consistently crashes with SIGFPE
- **Source program with `l_488 = 1`**: Runs normally
- **Source program with `l_488 = 52257`** (original value): Runs normally
- **Source program with `l_488 = 65535`**: Runs normally

## 5. Root Cause Analysis

The fundamental issue is that Frama-C's slicing algorithm incorrectly determines that the initialization of `l_488` is not necessary for preserving the slicing criteria. However:

1. **Semantic Inconsistency**: The sliced program no longer preserves the semantics of the original program
2. **Undefined Behavior**: Using uninitialized variables leads to undefined behavior, which in this case manifests as a division by zero
3. **Safety Critical**: Variables used in arithmetic operations (especially as divisors) must be properly initialized, even if they are not directly part of slicing criteria

## 6. Heisenbug Characteristics

This issue exhibits Heisenbug behavior:
- Adding debugging code (like printf statements) changes the stack layout
- This causes the uninitialized variable to contain different values
- The program may appear to work correctly, masking the underlying issue

## 7. Environment Information

- **Operating System**: Ubuntu 22.04.5 LTS
- **Frama-C Version**: 30.0 (Zinc)
- **GCC Version**: 11.4.0
- **Platform Info**: x86_64

## 8. Expected Behavior

The Frama-C slicer should:
1. Preserve all variable initializations that could affect program semantics
2. Specifically protect variables used in arithmetic operations (especially as divisors)
3. Maintain the property that sliced programs have the same observable behavior as the original for the slicing criteria

## 9. Recommendations

1. **Enhance slicing algorithm** to properly identify safety-critical initializations
2. **Special protection** for variables used as divisors, array indices, and pointer offsets
3. **Improve dependency analysis** to correctly track initialization dependencies for semantic preservation