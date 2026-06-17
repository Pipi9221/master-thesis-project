// CRITERIA: wr g_arr

#include <stdint.h>
#include <stdio.h>

static uint32_t g_arr[3] = {1U, 2U, 3U};
static uint32_t g_out = 0U;

static void func_1(void) {
  g_arr[1] = g_arr[1] + 7U;
  g_out = g_arr[1];
}

int main(void) {
  func_1();
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
