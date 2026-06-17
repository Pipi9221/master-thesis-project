# Frama-C Slicing Paper Master Table (14 + 4)

Date: 2026-03-28

## A. Submitted 14 Issues (from `2734`-`2751`)

| ID | Status | Category | Cause (short) |
|---|---|---|---|
| 2734 | not_a_bug | expected_tool_behavior | Eva recursion specification/input issue, not slicing defect. |
| 2735 | reproduced_mismatch | ub_sensitive_semantic_mismatch | Unsequenced read/write linearization changes `g_371` path. |
| 2736 | reproduced | loop_nontermination | Exit condition dropped in critical loop, causes near-unbounded execution. |
| 2737 | reproduced_mismatch | initializer_loss | `l_4351` initializer removed but later read preserved. |
| 2739 | reproduced_crash | initializer_loss_crash | Pointer init removed then dereferenced, stable segfault. |
| 2740 | reproduced | function_pointer_rename_mismatch | Function-pointer targets stale after symbol renaming, link unresolved. |
| 2741 | reproduced | vla_runtime_stub_missing | Exported slice calls `__fc_vla_alloc` without linkable runtime definition. |
| 2742 | reproduced | varargs_type_system | Invalid `va_list` array-type assignment in sliced output. |
| 2746 | reproduced | initializer_loss | Initialization expression dropped, downstream uninitialized use. |
| 2747 | reproduced | uninitialized_divisor_zero | `l_488` init dropped, uninitialized divisor triggers `SIGFPE`. |
| 2748 | reproduced_mismatch | initializer_and_pointer_chain_loss | Init loss + pointer-chain degradation corrupts criterion value. |
| 2749 | reproduced | function_slicing_dataflow_break | Function slicing deforms dataflow and changes runtime result. |
| 2750 | reproduced | precision_over_preservation | Unused global over-preserved in sliced output. |
| 2751 | reproduced | precision_over_preservation | Unmodified criterion over-preserved (over-conservative marking). |

## B. Additional 4 Bugs in issue `#2753` note (2026-03-09)

| ID | Status | Category | Cause (short) | Local evidence path |
|---|---|---|---|---|
| 2753-007 | reproduced | atomic_runtime_symbol_missing | Exported slice keeps `__fc_atomic_*` calls but lacks linkable implementations. | `Slicing/issues/007-c11-atomics-undefined-symbols` |
| 2753-010 | reproduced | lifecycle_hook_semantic_drop | `constructor/destructor/atexit/cleanup` effects dropped, semantics diverge. | `Slicing/issues/010-gnu-constructor-dropped` |
| 2753-015 | reproduced | strict_c11_pid_t_visibility | Export introduces `pid_t`, strict `-std=c11` fails (`unknown type name`). | `Slicing/issues/015-posix-pid_t-missing` |
| 2753-016 | reproduced | slice_loop_inv_nyi_abort | `-slice-loop-inv` hits NYI path in term-lval dependency computation. | `Slicing/issues/016-slicing-term-lval-deps` |

## Paper Counts

- Total tracked items: `18`
- Not-a-bug items: `1` (`2734`)
- True bug items: `17`
  - submitted group true bugs: `13`
  - additional group true bugs: `4`
