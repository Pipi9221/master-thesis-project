// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static uint32_t g_arr[8] = {
  [0] = 0x11223344U,
  [7] = 0x55667788U,
};

int main(void) {
  uint32_t x = g_arr[0];
  uint32_t y = g_arr[7];
  g_out = (x ^ (y + 7U)) + (uint32_t)sizeof(g_arr);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

