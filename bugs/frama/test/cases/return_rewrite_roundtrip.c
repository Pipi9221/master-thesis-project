// CRITERIA: return main
// CHECK-REPARSE: 1

#include <stdint.h>
#include <stdio.h>

static uint32_t f(uint32_t x) {
  uint32_t y = (x * 33U) ^ 0x5AU;
  return y ^ (y << 1);
}

int main(void) {
  uint32_t out = f(7U);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}
