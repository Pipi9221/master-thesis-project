// CRITERIA: return main

#include <tgmath.h>
#include <stdint.h>
#include <stdio.h>

int main(void) {
  double x = 4.0;
  double y = sqrt(x);
  uint32_t out = (uint32_t)(y * 33.0);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

