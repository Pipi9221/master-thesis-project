# BUG: llvm-slicer abort on large indirect goto table

## Severity

Fatal (tool crash during slicing).

## Symptom

With GNU computed-goto style dispatch (`goto *tbl[idx]`) and large label table,  
`llvm-slicer -c __assert_fail` aborts during slicing.

## Confirmed Behavior

- Original binary: PASS
- Slicing (`-c __assert_fail`): CRASH (abort)
- Slicing (`-c ret`): OK

## Threshold (this environment)

- label count = 255: OK
- label count = 256: CRASH

## Reproduce (minimal generator)

```bash
python3 - <<'PY'
from pathlib import Path
import subprocess

base = Path('/tmp/dg_indirect_min')
base.mkdir(exist_ok=True)
c = base / 'indirect_256.c'
bc = base / 'indirect_256.bc'
out = base / 'indirect_256.sliced'

n = 256
lines = ['#include <assert.h>', 'int main(void){', 'int r=-1;', f'int idx={n-1};', 'static void *tbl[] = {']
for i in range(n):
    lines.append(f'&&L{i},')
lines += ['};', 'goto *tbl[idx];']
for i in range(n):
    lines.append(f'L{i}: r={i}; goto END;')
lines += ['END:', f'assert(r=={n-1});', 'return 0;', '}']
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

Expected: slicer aborts.

## Related Artifacts

- `comfirm-issue/reports/fatal/FATAL_SUMMARY.md`
- `comfirm-issue/reports/fatal/fatal_matrix.tsv`
- `/tmp/dg_fatal_hunt/logs/fatal_indirect_*.slice.log`
