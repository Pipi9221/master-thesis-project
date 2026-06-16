# Experiment Protocol Notes

This directory stores thesis-facing notes rather than low-level implementation
details.

Current protocol status:

- Seeds currently come from three source families:
  - `creal` for `MR1`
  - `csmith`
  - `llm_files`
- Relation construction is split by MR:
  - `MR1` uses the Creal-backed seed/mutant path
  - `MR2` and `MR3` use the AST mutator prototype
  - `MR4` does not construct a mutant and is evaluated as a slicing protocol
- Oracle execution is already runnable for all four MRs on both tool families:
  - `Frama`
  - `dg`
- The current project no longer stops at mutation plus validation only.
  Runnable slicing/oracle execution exists today.
- `pipeline.run_experiment` is now the recommended single entrypoint for
  running one `tool + MR` path end-to-end.
- Current top-level difference is relation-specific preparation:
  - `MR1` stays on the Creal-backed special path
  - `MR4` stays `requires_mutant = false`

Current project-level support matrix:

| MR | Construction | Oracle | Batch orchestration |
| --- | --- | --- | --- |
| `MR1` | Creal adapter | `Frama` + `dg` | yes |
| `MR2` | AST mutator | `Frama` + `dg` | yes |
| `MR3` | AST mutator | `Frama` + `dg` | yes |
| `MR4` | no mutant construction | `Frama` + `dg` | yes |

Unification target:

- keep MR-specific construction backends
- unify the case bundle schema and manifest shape
- treat `MR4` as `requires_mutant = false` rather than as an out-of-band path
- keep `pipeline.run_experiment` as the user-facing single entrypoint
- reserve a future project-level operations layer for matrix runs, reduction,
  and reporting rather than for basic end-to-end execution

Related comparison note:

- see [sa-bugs-comparison.md](/d:/pipi922/Desktop/master-thesis/project/docs/methodology/sa-bugs-comparison.md) for a workflow comparison between `SA_Bugs` and the current `project`
