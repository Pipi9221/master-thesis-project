# Test87 Bug Analysis: Dead Code Detection Inconsistency

## Bug Summary

**Bug ID**: test87  
**Bug Type**: Type B - Dead Code Detection Capability Inconsistency  
**Affected Variables**: g_7 (fixable), g_1141 (unfixable)  
**Root Cause**: Frama-C's dead code detection behaves differently on semantically equivalent programs

---

## Experiment Information

### Variable Comparison Results

| Variable | Full Program (Original) | Full Program (Mutant) | Sliced (Original) | Sliced (Mutant) | Status |
|----------|------------------------|-----------------------|-------------------|-----------------|--------|
| g_7      | 17941                  | 17941 ✓               | 17941             | 17927 ✗         | Fixed by restoring initializations |
| g_1141   | 2                      | 2 ✓                   | 2                 | Undefined ✗     | **Unfixable - Dead code issue** |

### Uninitialized Variables Detected

**Source Slice**:
- `l_67` (line 200): Missing initialization `= 9L`

**Mutant Slice**:
- `l_67` (line 342): Missing initialization `= 9L`
- `l_389` (line 235): Missing initialization `= 7L`

---

## Bug Analysis

### Part 1: g_7 Inconsistency (Type A - Fixed ✓)

**Problem**: Frama-C removed variable initializations during slicing.

**Fix Applied**:
```c
// source_modified.c line 200
int64_t const l_67 = 9L;  // Restored from seed

// mutant_modified.c line 235
int32_t const l_389 = 7L;  // Restored from mutant seed

// mutant_modified.c line 342
int64_t const l_67 = 9L;  // Restored from seed
```

**Result**: g_7 fixed from (17941, 17927) to (17941, 17941) ✓

---

### Part 2: g_1141 Inconsistency (Type B - Unfixable ✗)

#### 2.1 Initial Hypothesis

Initially suspected that g_1141 was completely deleted from mutant slice, but investigation revealed a deeper issue.

#### 2.2 Single Variable Slicing Test

**Test**: Slice both programs targeting only g_1141

```bash
# Original seed
frama-c 7EKEYX_seed.c -slice-value g_1141 -ocode source_g1141_only.c
Result: 165 lines, g_1141 preserved ✓

# Mutant seed  
frama-c 7EKEYX_seed_syn0.c -slice-value g_1141 -ocode mutant_g1141_only.c
Result: 14 lines (empty main), g_1141 deleted ✗
```

**Conclusion**: When slicing the same variable, Frama-C produces completely different results for semantically equivalent programs.

#### 2.3 Usage Pattern Analysis

**Both programs have identical g_1141 usage**:

```c
// Definition
static int16_t g_1141 = 2L;

// Pointer usage
int16_t *l_1344 = &g_1141;

// Assignment (appears in both programs)
*l_1344 = value;
```

**Key Difference**: Mutant wraps assignments with identity macros:

```c
// Original
(*l_1344) = l_1343;

// Mutant
(*l_1344) = Tag238(l_1343);  // Tag238(x) is defined as (x)
```

#### 2.4 Dead Code Discovery

**Runtime Verification** (added debug output to source_modified.c):

```c
printf("[DEBUG] g_1141 before assignment: %d\n", (int)g_1141);
*p_22 &= (int)l_1334;
printf("[DEBUG] *p_22 = %d, will %s execute assignment\n", 
       *p_22, *p_22 ? "NOT" : "YES");
if (*p_22) goto break_cont_1;
*l_1344 = tmp_21;  // Assignment to g_1141
printf("[DEBUG] g_1141 after assignment: %d\n", (int)g_1141);
```

**Output** (27 iterations):
```
[DEBUG] g_1141 before assignment: 2
[DEBUG] *p_22 = 32768, will NOT execute assignment
[DEBUG] g_1141 before assignment: 2
[DEBUG] *p_22 = 32768, will NOT execute assignment
...
g_1141: 2
```

**Critical Finding**:
1. The code block enters 27 times ✓
2. The assignment `*l_1344 = tmp_21;` **never executes** ✗
3. g_1141 remains at initial value 2 ✓
4. **This is dead code** - the assignment is unreachable

#### 2.5 Final Value Verification

```json
"g_1141": {
  "original": "2",      // Initial value
  "mutant": "2",        // Initial value
  "original_slice": "2",
  "mutant_slice": "未在切片中定义"
}
```

**Conclusion**: g_1141 is never modified in either program.

---

## Root Cause Analysis

### The Real Problem: Dead Code Detection Inconsistency

#### Original Program Behavior (Conservative)
- **Dead code detection**: Failed
- **Strategy**: Conservatively retained unreachable code modifying g_1141
- **Result**: Preserved g_1141 and dead assignment
- **Outcome**: Over-conservative slicing

#### Mutant Program Behavior (Aggressive)  
- **Dead code detection**: Succeeded
- **Strategy**: Correctly identified that g_1141 is never modified
- **Result**: Removed entire g_1141 variable
- **Outcome**: Correct optimization ✓ (semantically)

### Why the Inconsistency?

**Hypothesis**: The `Tag238()` macro wrapper paradoxically **helped** Frama-C's dead code analysis:

```c
// Original: Frama-C cannot determine this is dead code
(*l_1344) = l_1343;

// Mutant: Tag macro somehow enables better dead code detection
(*l_1344) = Tag238(l_1343);  // where Tag238(x) = (x)
```

**Alternative Hypothesis**: Without the macro, Frama-C's pointer alias analysis fails to track the control flow properly.

---

## Problem Classification

### Type B: Dead Code Detection Capability Inconsistency

**Definition**: Frama-C applies different dead code detection strategies to semantically equivalent programs.

**Characteristics**:
- Mutant slice is semantically correct (g_1141 truly unchanged)
- Original slice is over-conservative (retains unnecessary dead code)
- **Core issue**: Inconsistent behavior violates slicing correctness

**Impact**: 
- Metamorphic relation violated: `Slice(Original) ≡ Slice(Mutant)` should hold
- Dead code detection depends on syntactic presentation
- Identity transformations (macros) affect analysis results

---

## Expected Behavior

A correct slicer should:

1. **Consistency**: Produce equivalent slices for semantically equivalent programs
2. **Dead code strategy**: Apply consistent strategy (all conservative or all aggressive)
3. **Syntax independence**: Not be affected by identity transformations like `Tag(x) = x`

---

## Simplified Demonstration

```c
// Both programs have this structure
int g_target = 100;

void func() {
    int *p = &g_target;
    
    if (condition_always_true) {  // Always true at runtime
        goto skip;
    }
    
    *p = 200;  // Dead code: never executes
    
    skip:
    return;
}
```

**Runtime behavior**: g_target stays 100 in both programs

**Slicing results**:
- Original: Keeps g_target and dead assignment (conservative)
- Mutant (with Tag macros): Removes g_target (aggressive)

**Problem**: Same semantics, different slicing decisions

---

## Repair Attempts

### g_7: Successfully Fixed ✓
- **Method**: Restored deleted initializations
- **Type**: Type A defect (initialization removal)
- **Result**: Values now match (17941, 17941)

### g_1141: Unfixable ✗
- **Reason**: Complete variable deletion in mutant slice
- **Type**: Type B defect (PDG analysis inconsistency)
- **Cannot fix**: Would require modifying Frama-C's dead code detection

---

## Test Results Summary

| Metric | Value |
|--------|-------|
| Total variables | 10 |
| Inconsistent variables | 2 |
| Fixed (Type A) | 1 (g_7) |
| Unfixable (Type B) | 1 (g_1141) |
| Fix rate | 50% |

---

## Files Generated

- `source_modified.c` - Fixed source slice (l_67 initialized)
- `mutant_modified.c` - Fixed mutant slice (l_67, l_389 initialized)
- `source_g1141_only.c` - Single-variable slice of original (165 lines)
- `mutant_g1141_only.c` - Single-variable slice of mutant (14 lines, empty)
- `BUG_ANALYSIS.md` - This analysis document

---

## Related Memories

- Dead Code Conservative Retention Inconsistency
- Frama-C PDG Fragility with Macro Wrapping
- Unreachable Code Modifying Slice Variable

---

**Analysis Date**: 2025-11-13  
**Analyzer**: Automated + Manual verification
