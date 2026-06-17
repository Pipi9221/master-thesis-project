# Issue 2735 (`g_371`) Root Cause Analysis (Evidence Version)

## Methodology result
- Target variable: `g_371`
- Source run: `65527` (`0xFFF7`)
- Sliced run: `50763` (`0xC64B`)
- Status: mismatch

Evidence files:
- `methodology-compare-2026-03-27/results/summary.tsv`
- `methodology-compare-2026-03-27/logs/2735_source.run.log`
- `methodology-compare-2026-03-27/logs/2735_sliced.run.log`

## Direct code evidence
- Source declaration: `50NYE5_seed_syn0.c:3889`
- Source complex overwrite path: `50NYE5_seed_syn0.c:5284`
- Sliced declaration: `mutant_g371_only.c:818`
- Sliced overwrite path:
  - `tmp_52 = safe_add_func_int8_t_s_s_slice_1(..., -1);` at `mutant_g371_only.c:949`
  - `g_371 = (uint16_t)((int)tmp_52 & (int)g_1276);` at `mutant_g371_only.c:951`
  - print at `mutant_g371_only.c:1021`

The sliced result equals `g_1276` (`0xC64B`), indicating the retained path deterministically collapses to the overwrite form above.

## Strongest root-cause interpretation
This case is better classified as an evaluation-order / UB-sensitive case than as the initializer-loss family:

1. In source `func_2` around `50NYE5_seed_syn0.c:4183`, one large expression contains:
   - left side effect: `(*l_23) |= ...` with `l_23 == &g_24`
   - right-side call chain that reaches `func_41(...)`, which reads `g_24`
2. These are operands of `|`, whose operands are unsequenced in C.
3. So source behavior depends on evaluation order (undefined behavior window on `g_24` read/write ordering).
4. The exported slice linearizes this region into a fixed order, making `g_24` update happen before the retained `func_41_slice_1` path.
5. That order change flips downstream control flow and reaches `g_371 = ... & g_1276`.

## Classification for paper
- Primary: UB-sensitive evaluation-order exposure under slicing/export linearization.
- Secondary observable symptom: semantic mismatch on criterion variable (`g_371`).
- Note: keep as valid mismatch testcase, but tag it separately from clean initializer-loss bugs (2737/2739/2748).
