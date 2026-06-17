// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

int main(void) {
  uint32_t x = 3U;
  goto L;
  uint32_t y = 0x11223344U;
  x ^= y;
L:
  g_out = (x * 33U) ^ 0x5AU;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
