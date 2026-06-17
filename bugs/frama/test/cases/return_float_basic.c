// CRITERIA: return main,f

#include <stdint.h>
#include <stdio.h>

static double f(double x) {
  double y = x * 0.25 + 1.0;
  if (y > 3.0) {
    y = y - 0.5;
  } else {
    y = y + 0.75;
  }
  return y;
}

int main(void) {
  double a = f(10.0);
  double b = f(1.0);
  uint32_t out = (uint32_t)(a * 1000.0) ^ (uint32_t)(b * 1000.0);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}
