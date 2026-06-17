// CRITERIA: return main,f

#include <complex.h>
#include <stdint.h>
#include <stdio.h>

static double complex f(double x) {
  double complex z = x + (2.0 * I);
  if (creal(z) > 3.0) {
    z = z * (1.0 + 0.5 * I);
  } else {
    z = z + (0.25 - 0.75 * I);
  }
  return z;
}

int main(void) {
  double complex a = f(10.0);
  double complex b = f(1.0);
  double s = creal(a) + cimag(a) + creal(b) + cimag(b);
  uint32_t out = (uint32_t)(s * 1000.0);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

