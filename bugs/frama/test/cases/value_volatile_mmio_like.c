// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static volatile uint32_t g_mmio = 0U;
static uint32_t g_out = 0U;

static void func_1(uint32_t x) {
  g_mmio = x;
  uint32_t r1 = g_mmio;
  g_mmio = r1 ^ 0xA5U;
  uint32_t r2 = g_mmio;
  g_out = (r1 + 3U) ^ (r2 + 7U);
}

int main(void) {
  func_1(123U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

