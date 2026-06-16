# BUG: `va_copy` path is missliced and crashes at runtime

## Severity

High (original program passes, sliced program crashes/aborts).

## Symptom

For `va_copy`-based vararg programs, slicing with `-c __assert_fail` keeps vararg
consumers but drops required setup/cleanup operations (`va_copy`/related data-flow),
leading to invalid runtime state and crash (`run_rc=-11`).

Control cases without `va_copy` stay PASS.

## Confirmed Behavior

- Original binary: PASS
- Unsliced bc on `lli-14`: PASS
- Sliced (`-c __assert_fail`) run: FAIL (`-11`)
- Re-run stability: 2/2 fails
- Sliced (`-c ret`) run: PASS

## Cases

- `comfirm-issue/cases/precision/probe_vararg_vacopy_sum2.c`
- `comfirm-issue/cases/precision/probe_vararg_vacopy_forward.c`
- `comfirm-issue/cases/precision/probe_vararg_vacopy_branch.c`
- Control: `comfirm-issue/cases/precision/probe_vararg_direct_no_copy.c`

## Matrix / Evidence

- Matrix: `comfirm-issue/reports/precision/vararg_matrix.tsv`
- Logs: `/tmp/dg_vararg_matrix/logs/*`
- Independent confirmation logs: `/tmp/dg_vararg_confirm/logs/*`

## Upstream Check

Keyword search in `mchalupa/dg` hits old closed issue `#151` (`Handle va_copy intrinsic in DefUse analysis`).
This family is therefore tracked as overlap-risk for strict "unreported" counting until regression-vs-duplicate triage is finalized.
