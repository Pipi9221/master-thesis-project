// CRITERIA: return main
// EXPECT-ABSENT: IRR_SENTINEL_7

#include <stdint.h>
#include <stdio.h>

static uint32_t g_a = 10U;
static uint32_t g_b = 0U;

static uint32_t func_3(uint32_t x) {
  g_b = (x ^ 0x55AA55AAU) + (g_a & 0xFFU);
  return g_b;
}

static uint32_t func_2(uint32_t x) {
  g_a = g_a + (x * 7U);
  return func_3(g_a);
}

static uint32_t func_1(void) {
  uint32_t IRR_SENTINEL_7 = 0U;
  for (uint32_t i = 0; i < 4; i++) {
    IRR_SENTINEL_7 ^= (i + 1U) * 0x101U;
  }
  if (IRR_SENTINEL_7 == 0xFFFFFFFFU) {
    g_b ^= IRR_SENTINEL_7;
  }
  return func_2(3U);
}

int main(void) {
  uint32_t v = func_1();
  int32_t ret = (int32_t)(v & 0x7FU);
  printf("%u %d\n", v, ret);
  return ret;
}
