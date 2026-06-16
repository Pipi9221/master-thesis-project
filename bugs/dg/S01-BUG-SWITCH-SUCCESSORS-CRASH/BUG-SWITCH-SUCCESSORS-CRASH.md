# BUG: llvm-slicer abort on large switch CFG (`Too much of successors`)

## Severity

Fatal (tool crash during slicing).

## Symptom

`llvm-slicer` aborts while building dependence graph for large `switch` programs.

Representative crash signature:

```
Too much of successors
...
abort
...
libdgllvmdg.so ... LLVMDependenceGraph::build
```

## Confirmed Behavior

- Original binary: PASS
- Slicing phase (`llvm-slicer -c __assert_fail`): CRASH (abort)
- Re-run stability: 2/2 crashes for each crash-size case

## Threshold (this environment)

- `switch` cases = 254: OK
- `switch` cases = 255: CRASH
- `switch` cases = 256: CRASH

## Criteria Sensitivity

- `-c __assert_fail`: CRASH
- `-c ret`: OK

## Reproduce (minimal generator)

```bash
python3 - <<'PY'
from pathlib import Path
import subprocess

base = Path('/tmp/dg_switch_min')
base.mkdir(exist_ok=True)
c = base / 'min_switch_255.c'
bc = base / 'min_switch_255.bc'
out = base / 'min_switch_255.sliced'

n = 255
lines = ['#include <assert.h>', 'int main(void){', f'int x={n-1};', 'int r=0;', 'switch(x){']
for i in range(n):
    lines.append(f'case {i}: r={i}; break;')
lines += ['default: r=-1; break;', '}', f'assert(r=={n-1});', 'return 0;', '}']
c.write_text('\\n'.join(lines) + '\\n')

subprocess.check_call(['clang-14', '-O0', '-c', '-emit-llvm', '-g', str(c), '-o', str(bc)])
subprocess.check_call([
    'llvm-slicer',
    '-c', '__assert_fail',
    str(bc),
    '-o', str(out),
])
PY
```

Expected: `llvm-slicer` aborts with `Too much of successors`.

## Related Artifacts

- `comfirm-issue/reports/fatal/FATAL_SUMMARY.md`
- `comfirm-issue/reports/fatal/fatal_matrix.tsv`
- `/tmp/dg_fatal_hunt/logs/fatal_switch_*.slice.log`
