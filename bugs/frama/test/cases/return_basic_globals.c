// CRITERIA: return main
// EXPECT-ABSENT: IRR_SENTINEL_1

#include <stdint.h>
#include <stdio.h>

static uint32_t g_0 = 0x12345678U;
static int32_t g_1 = -7;

static uint32_t safe_add_u32(uint32_t a, uint32_t b) {
  return a + b;
}

static void func_1(void) {
  uint32_t IRR_SENTINEL_1 = 0;
  for (uint32_t i = 0; i < 4; i++) {
    g_0 = safe_add_u32(g_0, i * 3U);
    if ((g_0 & 1U) == 0U) {
      g_1 += (int32_t)i;
    } else {
      g_1 -= (int32_t)i;
    }
    IRR_SENTINEL_1 ^= (i + 1U) * 17U;
  }
  if (IRR_SENTINEL_1 == 0xDEADBEEFU) {
    g_0 ^= IRR_SENTINEL_1;
  }
}

int main(void) {
  func_1();
  int32_t ret = (int32_t)((g_0 ^ (uint32_t)g_1) & 0xFFU);
  printf("%u %d %d\n", g_0, g_1, ret);
  return ret;
}
