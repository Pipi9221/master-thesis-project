// CRITERIA: value g_val
// EXPECT-ABSENT: IRR_SENTINEL_2

#include <stdint.h>
#include <stdio.h>

static uint32_t g_val = 0U;
static uint32_t g_seed = 0xA5A5A5A5U;

static uint32_t lcg_step(uint32_t x) {
  return x * 1103515245U + 12345U;
}

static void func_1(void) {
  uint32_t IRR_SENTINEL_2 = 1U;
  for (uint32_t i = 0; i < 5; i++) {
    g_seed = lcg_step(g_seed);
    g_val ^= (g_seed >> (i & 15U));
    IRR_SENTINEL_2 = IRR_SENTINEL_2 * 3U + i;
  }
  if (IRR_SENTINEL_2 == 0x11111111U) {
    g_seed ^= IRR_SENTINEL_2;
  }
}

int main(void) {
  func_1();
  printf("%u\n", g_val);
  uint32_t x = g_val;
  uint8_t digest = (uint8_t)(x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24));
  return (int)digest;
}
