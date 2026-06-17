// CRITERIA: value g
// FRAMAC-ARGS: -main foo

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

static uint32_t foo(uint32_t x) {
  g = (x * 33U) ^ 0x5AU;
  if ((g & 1U) != 0U) {
    g ^= 0xA5U;
  }
  return g;
}

int main(void) {
  (void)foo(7U);
  printf("%u\n", g);
  return (int)(g & 0xFFU);
}

