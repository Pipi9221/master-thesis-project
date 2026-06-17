// CRITERIA: value g_out
// EXPECT-ABSENT: noise
// EXPECT-ABSENT: g_noise

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;
static uint32_t g_noise = 0U;

static void noise(uint32_t x) {
  for (uint32_t i = 0; i < 100U; i++) {
    g_noise = (g_noise * 33U) ^ (x + i + 0x5AU);
  }
  if ((g_noise & 1U) != 0U) {
    g_noise ^= 0xA5U;
  }
}

static uint32_t core(uint32_t x) {
  return (x * 33U) ^ 0x5AU;
}

int main(void) {
  noise(7U);
  g_out = core(11U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

