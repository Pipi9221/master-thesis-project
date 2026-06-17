# Issue 2735 (`g_371`) Root Cause Analysis

## Current methodology result
- Target variable: `g_371`
- Source value: `65527` (`0xFFF7`)
- Sliced value: `50763` (`0xC64B`)
- Status: mismatch

Recorded in:
- `submitted-issue-sources/methodology-compare-2026-03-27/results/summary.tsv`
- `submitted-issue-sources/methodology-compare-2026-03-27/logs/2735_source.run.log`
- `submitted-issue-sources/methodology-compare-2026-03-27/logs/2735_sliced.run.log`

## Revised conclusion

The primary issue is no longer best explained as "helper side effects from `func_60` were dropped".

That still describes a downstream symptom inside `func_41`, but the earlier and stronger source-level cause is:

- the original source contains an unsequenced read/write dependency on `g_24`
- Frama-C's exported slice linearizes one concrete evaluation order
- that order changes the value of `g_24` seen by `func_41`
- the later branch structure in `func_41` then diverges and the slice reaches the `g_371` overwrite path

So `2735` is much closer to an **evaluation-order / undefined-behavior exposure case** than to the initializer-loss bugs (`2737` / `2739` / `2748`).

## Earliest source-level trigger

The decisive pattern is in `func_2`, at the huge expression around source line `4183` in `50NYE5_seed_syn0.c`.

Inside that expression:

- the left side performs `(*l_23) |= ...`
- `l_23` points to `g_24`
- the right side eventually calls `func_41(...)`
- `func_41` reads `g_24`
- the two sides are operands of `|`

That means the source effectively contains this shape:

```c
((*l_23) |= something) | (... func_41(...) ...)
```

with:

- left operand: writes `g_24`
- right operand: reads `g_24` through `func_41`

In C, the operands of `|` are not sequenced relative to each other. Here that creates an unsequenced write/read on the same scalar object (`g_24`), which is undefined behavior.

So the original program does not define one stable abstract-machine ordering for:

1. "update `g_24`"
2. "call `func_41`, which reads `g_24`"

That is the earliest concrete reason this case can drift.

## What the exported slice does

In `mutant_g371_only.c`, Frama-C has already linearized that region into straight-line code:

```c
tmp_3 = safe_mod_func_uint16_t_u_u_slice_1(...);
tmp_0 = (int32_t)tmp_3;
*l_23 |= tmp_0;
tmp_8 = l_13;
tmp_7 = func_44_slice_1(tmp_8);
func_41_slice_1(tmp_7 == l_23, g_50);
```

So in the exported slice the order is fixed as:

1. compute `tmp_3`
2. update `g_24`
3. call `func_41_slice_1`

That is exactly the kind of linearization that matters if the source was already relying on unsequenced evaluation.

## Trace evidence

The temporary local traces are still useful, but they need to be interpreted with this revised cause in mind.

What they prove reliably:

- source inside `func_41` sees `g_24 = 5`
- sliced program inside `func_41` sees `g_24 = 13`
- source reaches the outer branch with `g_40 = -17` and goes `then`
- slice reaches the outer branch with `g_40 = 0` and goes `else`
- only the sliced `else` path executes the retained `g_371 = ... & g_1276`

Important correction:

- the earlier claim that `g_196` was an "earliest discriminator" is weaker than it looked
- the source trace printed `g_196` as unsigned, while the sliced trace printed it as signed
- so that apparent `g_196` mismatch should not be used as the primary root-cause evidence

The robust earliest state difference is `g_24`, not `g_196`.

## Why `g_24` becomes `13`

In the slice, the linearized code computes a `tmp_3` that becomes `8`, then executes:

```c
*l_23 |= tmp_0;
```

Since `l_23 == &g_24` and `g_24` starts at `5`:

- `5 | 8 == 13`

So the slice deterministically enters `func_41_slice_1` with `g_24 = 13`.

By contrast, the traced GCC run of the source reaches `func_41` with `g_24 = 5`, which is exactly what we would expect if the `func_41(...)` side of the `|` expression is evaluated before the `(*l_23) |= ...` side effect becomes visible.

## Why the final `g_371` changes

Once `func_41` starts from `g_24 = 13` instead of `g_24 = 5`, the rest of the later divergence is straightforward:

- the loop/break behavior inside `func_41` changes
- `g_40` no longer falls to `-17`
- the outer branch near line `5182` flips
- the slice reaches the only explicit overwrite path for `g_371`
- the final value collapses to `g_1276 = 0xC64B`

So the previously observed `func_60` / `break5167` / branch-flip chain is still real, but it is downstream of the earlier evaluation-order problem.

## Concrete minimal example

A much smaller reproducer of the same core issue is now available in:

- `submitted-issue-sources/issue-2735/MIN_ORDER_EXAMPLE.c`

Source:

```c
static int g_24 = 5;
static uint16_t g_371 = 65527U;
static uint16_t g_1276 = 50763U;

static void maybe_overwrite(void)
{
  if (g_24 != 5) {
    g_371 = g_1276;
  }
}

int main(void)
{
  int *l_23 = &g_24;
  uint16_t tmp_3 = 8U;
  (void)(((*l_23) |= (int)tmp_3) | (maybe_overwrite(), 0));
  printf("g_24 = %d\n", g_24);
  printf("g_371 = %u (0x%04X)\n", g_371, g_371);
}
```

Verified local GCC run:

- `g_24 = 13`
- `g_371 = 65527 (0xFFF7)`

So under this run, `maybe_overwrite()` observed the old `g_24 == 5`, even though the final program state after the full expression is `g_24 == 13`.

Frama-C slicing result for the same file (`MIN_ORDER_EXAMPLE_sliced.c`) exports:

```c
*l_23 |= (int)tmp_3;
maybe_overwrite_slice_1();
```

and the sliced helper becomes:

```c
static void maybe_overwrite_slice_1(void)
{
  g_371 = g_1276;
}
```

That is exactly the same pattern as the large `2735` case:

- source run keeps `g_371 = 65527`
- exported slice fixes the "write `g_24` first" order
- the later read sees the new value
- the slice overwrites `g_371` with `50763`

## Interpretation

This changes how `2735` should be classified.

It is still a semantic mismatch in the current methodology logs, but the best current explanation is:

- the original program is not semantically stable because it contains unsequenced access to `g_24`
- Frama-C's exported slice concretizes one ordering of that expression
- GCC happened to realize a different effective ordering in the traced source run

So this case is not strong evidence for the same kind of "live slicing soundness bug" as the initializer-loss cases.

It is more likely:

- a UB-sensitive example,
- where slicing/export makes one allowed evaluation order explicit,
- and the observed mismatch comes from that concretization.

## Classification
- Primary: evaluation-order / undefined-behavior exposure.
- Secondary downstream effect: branch flip in `func_41` leading to the retained `g_371` overwrite path.
- Not the same family as: initializer-loss / uninitialized-read export bugs.
- Confidence: medium-high on the source-level cause; medium on whether the original upstream issue should still be treated as a valid Frama-C bug after UB screening.
