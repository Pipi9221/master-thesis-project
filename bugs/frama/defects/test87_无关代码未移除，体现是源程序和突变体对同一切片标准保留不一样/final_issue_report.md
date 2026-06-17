# Bug Report: Frama-C Slicing Tool Over-Preserves Unmodified Slice Criteria

## Issue Summary

Frama-C slicing tool preserves a slice criterion variable (`g_1141`) even when its value is never modified throughout program execution. According to Frama-C's slicing semantics, unmodified slice criteria should not be preserved in the sliced output, leading to over-approximation and reduced precision.

## Environment Information

- OS: Ubuntu 22.04.5 LTS (Jammy Jellyfish)
- Frama-C Version: 30.0 (Zinc)
- GCC Version: 11.4.0
- Platform: 64-bit

## Source Program

The original program contains a global variable `g_1141` which is never modified throughout program execution:


## Slicing Command

```bash
frama-c -slice-value g_1141 source.c -then-on 'Slicing export' -print -ocode source_g1141_only.c
```

## Sliced Program

In the sliced output (`source_g1141_only.c`), Frama-C preserves the `g_1141` variable:

```c
static int16_t g_1141 = (int16_t)2L;
...
        {
          int tmp_24;
          int16_t tmp_21;
          uint16_t l_1334 = (uint16_t)0xA497L;  
          int16_t *l_1344 = & g_1141; // never modified
          *p_22 &= (int)l_1334;
          if (*p_22) goto break_cont_1; // This condition is always true
          tmp_24 = 1;
          tmp_21 = (int16_t)tmp_24;
          *l_1344 = tmp_21;  // Unreachable code
          goto return_label;
        }
        break_cont_1: g_583 = (uint16_t)((int)g_583 + 1);
```

## Runtime Behavior

- The variable `g_1141` is specified as the slicing criterion
- The value of `g_1141` is never modified during program execution
- The variable maintains its initial value of 2 throughout execution
- Therefore, preserving `g_1141` in the sliced output is unnecessary

## Expected Behavior

According to Frama-C slicing semantics, when a slicing criterion's value is never modified, the variable should not be preserved in the sliced output. The sliced program should contain only the code that affects the computation of the slicing criterion's value.

Since `g_1141` is never modified, it should not appear in the sliced output, and the resulting sliced program should be minimal.

## Actual Behavior

Frama-C preserves the `g_1141` variable in the sliced output, even though the variable's value is never modified. This results in over-approximation of the actual dependencies.

## Impact

1. **Reduced precision**: The sliced program contains more code than necessary
2. **Increased complexity**: Developers must analyze variables that do not contribute to the slice criterion
3. **Maintenance overhead**: Extra code that serves no purpose in the slice context

## Conclusion

This issue demonstrates that Frama-C's slicing algorithm could be improved to provide more precise slices by recognizing when slice criteria are never modified and eliminating them from the sliced output. This would result in more accurate and concise program slices.