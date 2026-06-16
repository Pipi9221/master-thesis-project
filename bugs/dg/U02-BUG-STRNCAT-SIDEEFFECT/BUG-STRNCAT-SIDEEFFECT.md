# BUG: strncat Side-Effect Call Removed by Slicing

## Conclusion

Confirmed true bug.

- Original program: PASS
- Sliced program: FAIL
- Stability: reproduced in 4 scenario cases and 2 reruns per candidate

## Affected Precision Cases

- `precision_04_shortcircuit_strncat.c`
- `precision_06_switch_strncat.c`
- `precision_08_funcptr_strncat.c`
- `precision_10_global_lifecycle_strncat.c`
- Extended reproduction (hotspot round):
  - `probe_strcat_sideeffect_ptr.c` (`strcat` variant also fails under `-c __assert_fail`)

Failing criteria pattern:
- `__assert_fail`
- `<line>:probe_ok`
- `__assert_fail,<line>:probe_ok`
- (`ret` does not trigger this failure)

## Minimal Reproducer

- `comfirm-issue/cases/precision/min_strncat_deadcode.c`

## Reproduction Command

```bash
cd $DG_REPO/cases/precision
clang-14 -O0 -c -emit-llvm -g min_strncat_deadcode.c -o min_strncat_deadcode.bc
llvm-slicer -c __assert_fail min_strncat_deadcode.bc -o min_strncat_deadcode.sliced
lli-14 min_strncat_deadcode.sliced
```

Expected sliced failure:
- `Assertion 'probe_ok' failed`

## IR Evidence (Representative: precision_04_shortcircuit_strncat)

- Original IR contains a `strncat` call
- Sliced IR drops the `strncat` call but keeps `strcmp/assert` checks

This directly causes semantic mismatch in sliced output.

Additional matrix evidence:
- `reports/precision/hotspot_matrix.tsv`
