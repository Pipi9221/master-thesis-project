// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static volatile uint32_t g_v = 0x1234U;
static uint32_t g_out = 0U;

static void func_1(void) {
  uint32_t x = g_v;
  g_v = x ^ 0x00FFU;
  g_out = (g_v + 7U) ^ (x >> 1);

  uint32_t IRR_SENTINEL_VOL = 0U;
  for (uint32_t i = 0; i < 4; i++) {
    IRR_SENTINEL_VOL += (i + 3U) * 5U;
  }
  if (IRR_SENTINEL_VOL == 0xFFFFFFFFU) {
    g_out ^= IRR_SENTINEL_VOL;
  }
}

int main(void) {
  func_1();
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
