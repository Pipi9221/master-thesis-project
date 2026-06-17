# Issue 2739 Methodology Verification

## Method
- Source program prints target variable `g_34`.
- Sliced program also prints target variable `g_34`.
- Compare `g_34` values after execution.

## Files
- Source: `submitted-issue-sources/issue-2739/test.c`
- Sliced: `submitted-issue-sources/issue-2739/slice.c`

## Build command
```bash
gcc -O0 -Wall -Wextra test.c -o /tmp/2739_orig.bin
gcc -O0 -Wall -Wextra slice.c -o /tmp/2739_sliced.bin
```

## Observations
- Source run output:
  - `g_34: -1628632859`
  - exit success
- Sliced run:
  - stable `Segmentation fault (core dumped)` on repeated runs
  - cannot reach final print of `g_34`

## Conclusion
- Under this methodology, the sliced program fails before producing target variable output.
- This is still a slicing correctness failure, but not a simple numeric mismatch; it is a crash-level regression.
