// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static uint32_t g = 1U;

static uint32_t step(uint32_t x) {
  g = (g * 33U) ^ 0x5AU;
  return g ^ x;
}

int main(void) {
  uint32_t a = step(1U);
  uint32_t b = step(2U);
  uint32_t c = a + b + g;
  g_out = c ^ (a << 1) ^ (b << 2);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

