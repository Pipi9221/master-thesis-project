// CRITERIA: rd g_arr
// EXPECT-ABSENT: IRR_SENTINEL_RW

#include <stdint.h>
#include <stdio.h>

static uint32_t g_arr[3] = {1U, 2U, 3U};
static uint32_t g_out = 0U;
static uint32_t g_noise = 0U;

static void func_1(void) {
  g_arr[1] = g_arr[1] + 7U;
  g_out = g_arr[1];

  uint32_t IRR_SENTINEL_RW = 0U;
  IRR_SENTINEL_RW = (IRR_SENTINEL_RW + g_arr[2]) ^ 0xBEEFU;
  if (IRR_SENTINEL_RW == 0xFFFFFFFFU) {
    g_noise ^= IRR_SENTINEL_RW;
  }
}

int main(void) {
  func_1();
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
