# Other Bugs Root-Cause Notes (Current Stage)

## Issue 2735 (`g_371`)

### Observation
- Methodology compare shows mismatch on target variable `g_371`.
- Current local logs:
  - source: `65527` (`0xFFF7`)
  - sliced: `50763` (`0xC64B`)
- Sliced file compiles and runs without uninitialized-read warnings.
- The retained sliced path around the final write simplifies to:
  - `tmp_51 = 0;`
  - `tmp_52 = safe_add_func_int8_t_s_s_slice_1(..., -1);`
  - `g_371 = (uint16_t)((int)tmp_52 & (int)g_1276);`
- Final sliced value matches `g_1276 = 0xC64B`, which is a strong sign that the retained slice has collapsed to an over-simplified overwrite path.
- Concrete paths:
  - source complex overwrite expression at `issue-2735/50NYE5_seed_syn0.c:5284`
  - sliced overwrite at `issue-2735/mutant_g371_only.c:951`

### Likely cause
- Not the same family as the initializer-loss bugs.
- Revised root cause is earlier than `func_60`: the source expression around `func_2` line `4183` contains an unsequenced write/read on `g_24`.
- Shape:
  - left operand of `|` performs `(*l_23) |= ...`
  - right operand eventually calls `func_41(...)`
  - `l_23 == &g_24`, and `func_41` reads `g_24`
- So the source relies on undefined evaluation order for whether `func_41` sees `g_24 == 5` or `g_24 == 13`.
- The exported slice linearizes the write first, so `func_41_slice_1` deterministically sees `g_24 = 13`.
- That later flips the `func_41` control flow and reaches the retained `g_371 = ... & g_1276` overwrite path, producing `0xC64B`.

### Confidence
- Medium-high.
- Enough to explain the current mismatch without relying on the old `func_60` side-effect hypothesis as the primary cause.
- Current best small example is `issue-2735/MIN_ORDER_EXAMPLE.c`, whose exported slice `MIN_ORDER_EXAMPLE_sliced.c` shows the same order-fixing effect.
- This now looks more like a UB-sensitive case than a clean live slicing regression.

---

## Issue 2737 (`g_203`)

### Observation
- Methodology compare shows mismatch on target variable `g_203`.
- Current local logs:
  - source: `18446744073709551563` (`-53` as `int16_t`)
  - sliced: `18446744073709551557` (`-59` as `int16_t`)
- `source.c` initializes `const uint64_t l_4351[3] = {...}` and later uses `l_4351[1]` on the path to `g_203`.
- `source_slice_g203_only.c` keeps the later use of `l_4351[1]`, but exports only `uint64_t const l_4351[3];`.
- GCC directly warns that `l_4351` is used uninitialized.

### Likely cause
- Same root-cause family as issue 2739:
  - declaration kept
  - local initializer dropped
  - later use preserved
- So this is not just a vague dependency-loss suspicion. The sliced export introduces an uninitialized read from a preserved local const array.

### Confidence
- High.
- Manual fix in `source_slice_g203_only_fixed.c` restores the initializer and brings `g_203` back to `-53`.

---

## Issue 2748 (`g_167`)

### Observation
- Target mismatch exists in current methodology run.
- Under `methodology-compare-2026-03-27`:
  - original `2748_source.c`: `15785518536639561645`
  - sliced `2748_sliced.c`: `15785518536639561699`
- The sliced file drops several local initializers that are still used later, including:
  - pointer-chain locals `l_2830` / `l_2835`
  - scalar local `l_2939`
  - pointer local `l_99`
- GCC warns that `l_2835` and `l_2939` are used uninitialized, and that `l_99` may be used uninitialized.

### Likely cause
- Same export-time local-initializer loss family as issues 2739 and 2737.
- The dropped pointer chain is the clearest symptom, but not the only one: the slice preserves later uses while stripping multiple initializers that gave those locals valid values/aliases.

### Confidence
- Medium-high.
- `source_sliced_fixed.c` restores the missing initializer chain and matches the methodology original value.
- Note: the draft `issue-2748/issue_description.md` currently reverses source/sliced value labels relative to local methodology logs, so submission text should be normalized before filing.

---

## Issue 2740 (`result`) status note
- Current attached `test_sliced.c` compiles and matches `result` with source under current setup.
- The current slice already returns `add_func_slice_1` / `mul_func_slice_1`, so the function-pointer rename bug described in `issue_description.md` is not present in the current attachment.
- Current compiler output is only:
  - `fp` set but not used

So the right current classification is:
- historical report may refer to a different artifact,
- but the present local files do not reproduce a live bug,
- therefore no current root-cause attribution should be made from the attached files alone.
