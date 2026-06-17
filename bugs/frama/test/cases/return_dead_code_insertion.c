// CRITERIA: return main
// EXPECT-ABSENT: IRR_SENTINEL_8

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

static void unused_func(uint32_t x) {
  uint32_t IRR_SENTINEL_8 = x ^ 0xDEADU;
  if (IRR_SENTINEL_8 == 123U) {
    g ^= IRR_SENTINEL_8;
  }
}

int main(void) {
  g = 5U;
  g = g * 3U + 1U;

  if (0) {
    unused_func(7U);
  }

  int32_t ret = (int32_t)g;
  printf("%u %d\n", g, ret);
  return ret;
}
