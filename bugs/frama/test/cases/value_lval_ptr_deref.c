// CRITERIA: value *g_p
// EXPECT-ABSENT: IRR_SENTINEL_PD

#include <stdint.h>
#include <stdio.h>

static uint32_t g_x = 10U;
static uint32_t *g_p = &g_x;
static uint32_t g_noise = 0U;

static void func_1(void) {
  *g_p = (*g_p + 7U) ^ 0xAAU;

  uint32_t IRR_SENTINEL_PD = 0U;
  IRR_SENTINEL_PD = (IRR_SENTINEL_PD + g_x) ^ 0x2468U;
  if (IRR_SENTINEL_PD == 0xFFFFFFFFU) {
    g_noise ^= IRR_SENTINEL_PD;
  }
}

int main(void) {
  func_1();
  printf("%u\n", g_x);
  uint32_t x = g_x;
  uint8_t digest = (uint8_t)(x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24));
  return (int)digest;
}
