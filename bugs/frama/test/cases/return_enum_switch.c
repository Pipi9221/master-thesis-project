// CRITERIA: return main
// EXPECT-ABSENT: IRR_SENTINEL_6

#include <stdint.h>
#include <stdio.h>

enum E { E0 = 0, E1 = 1, E2 = 2 };

static enum E g_e = E1;
static uint32_t g_seed = 0x2468ACE0U;

static uint32_t lcg_step(uint32_t x) {
  return x * 1664525U + 1013904223U;
}

static int32_t func_1(void) {
  g_seed = lcg_step(g_seed);
  g_e = (enum E)(g_seed % 3U);

  uint32_t IRR_SENTINEL_6 = 0U;
  IRR_SENTINEL_6 = (IRR_SENTINEL_6 + g_seed) ^ 0x13579BDFU;

  int32_t out = 0;
  switch (g_e) {
    case E0:
      out = (int32_t)(g_seed & 0x7FU);
      break;
    case E1:
      out = (int32_t)((g_seed >> 8) & 0x7FU);
      break;
    default:
      out = (int32_t)((g_seed >> 16) & 0x7FU);
      break;
  }

  if (IRR_SENTINEL_6 == 0xFFFFFFFFU) {
    out ^= (int32_t)IRR_SENTINEL_6;
  }
  return out;
}

int main(void) {
  int32_t ret = func_1();
  printf("%d\n", ret);
  return ret;
}
