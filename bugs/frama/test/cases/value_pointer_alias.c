// CRITERIA: value g_y
// EXPECT-ABSENT: IRR_SENTINEL_3

#include <stdint.h>
#include <stdio.h>

static int32_t g_x = 1;
static int32_t g_y = 2;
static uint32_t g_flag = 0x1234U;

static void func_1(void) {
  int32_t *p = &g_x;
  if ((g_flag & 1U) != 0U) {
    p = &g_y;
  }
  *p = *p + 3;

  uint32_t IRR_SENTINEL_3 = 0U;
  for (uint32_t i = 0; i < 3; i++) {
    IRR_SENTINEL_3 ^= (i + 7U) * 13U;
  }
  if (IRR_SENTINEL_3 == 0xCAFEBABEU) {
    g_x ^= (int32_t)IRR_SENTINEL_3;
  }
}

int main(void) {
  func_1();
  printf("%d %d\n", g_x, g_y);
  uint32_t x = (uint32_t)g_y;
  uint8_t digest = (uint8_t)(x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24));
  return (int)digest;
}
