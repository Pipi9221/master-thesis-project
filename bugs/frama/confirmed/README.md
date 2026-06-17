# Frama-C Confirmed Bugs (17 true bugs)

Organized from batch metamorphic testing + systematic C-language-feature analysis.
Frama-C 30.0 (Zinc). Data compiled 2026-03-28.

## Bug Index

| # | Bug ID | Category | Severity | MR Detection | Root Cause Family |
|---|--------|----------|----------|-------------|-------------------|
| 1 | 2735 | ub_evaluation_order | medium | MR1 | UB-sensitive |
| 2 | 2736 | loop_nontermination | high | MR1 | Loop exit dropped |
| 3 | 2737 | initializer_loss | high | MR1 | Init loss |
| 4 | 2739 | initializer_loss_crash | high | MR1 | Init loss |
| 5 | 2740 | fnptr_rename_mismatch | medium | MR1 | Export coherence |
| 6 | 2741 | vla_runtime_stub | medium | MR1 | Export coherence |
| 7 | 2742 | varargs_type_system | medium | MR1 | Export coherence |
| 8 | 2746 | initializer_loss | high | MR1 | Init loss |
| 9 | 2747 | uninitialized_divisor | high | MR1 | Init loss |
| 10 | 2748 | init_pointer_chain_loss | high | MR1, MR4 | Init loss |
| 11 | 2749 | dataflow_break | high | MR1, MR4 | Dataflow break |
| 12 | 2750 | over_preservation | medium | MR2, MR3 | Over-preservation |
| 13 | 2751 | over_preservation | medium | MR2, MR3 | Over-preservation |
| 14 | 2753-007 | atomic_symbols | medium | MR1 | Lifecycle/builtin |
| 15 | 2753-010 | lifecycle_hooks | high | MR1, MR4 | Lifecycle/builtin |
| 16 | 2753-015 | pid_t_visibility | medium | MR1 | Lifecycle/builtin |
| 17 | 2753-016 | loop_inv_nyi | medium | MR1 | Internal NYI |

## Root Cause Families

1. **Initializer Loss** (2737, 2739, 2746, 2747, 2748)
   - `slicingTransform.ml:383` + `filter.ml:562,570`
   - Declaration mark kept, Local_init invisible → uninitialized read

2. **Over-Preservation** (2750, 2751)
   - Mark propagation too conservative

3. **Dataflow Break** (2749)
   - Function parameter removed, body references uninitialized local

4. **UB-Sensitive** (2735)
   - Unsequenced evaluation order concretized by slice export

5. **Export Coherence** (2740, 2741, 2742)
   - Symbol renaming, runtime stubs, type-system gaps

6. **Lifecycle/Builtin** (2753-007, 2753-010, 2753-015)
   - Missing runtime support for constructor/atomic/POSIX types

7. **Internal NYI** (2753-016)
   - `logic_deps.ml:400` — unimplemented term-lval dependency

8. **Loop Non-Termination** (2736)
   - Exit condition dropped → unbounded loop

## Related

- `paper-verification/results/` — Root cause analyses per bug
- `issues/` — C-language feature classification (16 issues)
- `defects/` — Raw batch experiment directories
- `test/cases/` — Individual C test case files
