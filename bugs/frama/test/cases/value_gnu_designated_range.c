// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static uint32_t g_arr[8] = {
  [0 ... 3] = 5U,
  [7] = 1U,
};

int main(void) {
  g_out = g_arr[0] + g_arr[3] + g_arr[7];
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

