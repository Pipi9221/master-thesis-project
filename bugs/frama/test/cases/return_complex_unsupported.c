// CRITERIA: return main
// EXPECT-FRAMAC-FAIL: unsupported complex.h
// SKIP-CC: 1
// SKIP-RUN: 1

#include <complex.h>
#include <stdint.h>

int main(void) {
  double complex z = 1.0 + 2.0 * I;
  (void)z;
  return 0;
}

