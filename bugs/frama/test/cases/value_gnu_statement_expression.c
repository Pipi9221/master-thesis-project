// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 1U;
static uint32_t g_out = 0U;

static uint32_t step(uint32_t x) {
  g = (g * 33U) ^ (x + 0x5AU);
  return g;
}

int main(void) {
  uint32_t y = ({ uint32_t t = step(1U); t + step(2U); });
  g_out = y ^ (g << 1);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

