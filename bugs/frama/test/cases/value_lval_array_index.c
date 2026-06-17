// CRITERIA: value g_arr[2]
// EXPECT-ABSENT: IRR_SENTINEL_AI

#include <stdint.h>
#include <stdio.h>

static uint32_t g_arr[4] = {1U, 2U, 3U, 4U};
static uint32_t g_noise = 0U;

static void func_1(void) {
  g_arr[2] = (g_arr[0] + g_arr[1]) ^ 0x55U;

  uint32_t IRR_SENTINEL_AI = 0U;
  IRR_SENTINEL_AI = (IRR_SENTINEL_AI + g_arr[3]) ^ 0x1234U;
  if (IRR_SENTINEL_AI == 0xFFFFFFFFU) {
    g_noise ^= IRR_SENTINEL_AI;
  }
}

int main(void) {
  func_1();
  printf("%u\n", g_arr[2]);
  uint32_t x = g_arr[2];
  uint8_t digest = (uint8_t)(x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24));
  return (int)digest;
}
