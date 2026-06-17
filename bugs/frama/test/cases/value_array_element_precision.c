// CRITERIA: value g_arr[3]
// EXPECT-ABSENT: fill_others

#include <stdint.h>
#include <stdio.h>

static uint32_t g_arr[8] = {0U};

static void fill_others(uint32_t x) {
  for (uint32_t i = 0; i < 8U; i++) {
    if (i != 3U) {
      g_arr[i] = (x + i) ^ 0x5AU;
    }
  }
}

int main(void) {
  fill_others(7U);
  g_arr[3] = 0x11223344U;
  printf("%u\n", g_arr[3]);
  return (int)(g_arr[3] & 0xFFU);
}

