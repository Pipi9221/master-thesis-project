// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;
static uint32_t g_out = 0U;

static uint32_t inc(uint32_t x) {
  g = (g + x) ^ 0x5AU;
  return g;
}

int main(void) {
  uint32_t x = 9U;
  uint32_t y = (x & 1U) ? inc(1U) : inc(2U);
  g_out = y ^ (g << 1);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

