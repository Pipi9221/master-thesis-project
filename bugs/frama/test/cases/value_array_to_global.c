// CRITERIA: value g_arr2
// EXPECT-ABSENT: IRR_SENTINEL_4

#include <stdint.h>
#include <stdio.h>

static int32_t g_arr[5] = {0, 0, 0, 0, 0};
static int32_t g_arr2 = 0;

static void func_1(void) {
  for (int32_t i = 0; i < 5; i++) {
    g_arr[i] = i * i + 1;
  }

  uint32_t IRR_SENTINEL_4 = 0U;
  for (int32_t i = 0; i < 5; i++) {
    if ((i & 1) == 0) {
      IRR_SENTINEL_4 ^= (uint32_t)g_arr[i];
    }
  }
  if (IRR_SENTINEL_4 == 0x0U) {
    g_arr[0] = g_arr[0] + 1;
  }

  g_arr2 = g_arr[2];
}

int main(void) {
  func_1();
  printf("%d\n", g_arr2);
  uint32_t x = (uint32_t)g_arr2;
  uint8_t digest = (uint8_t)(x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24));
  return (int)digest;
}
