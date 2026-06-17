// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static uint32_t fa(uint32_t x) {
  return (x + 7U) ^ 0x5AU;
}

static uint32_t fb(uint32_t x) {
  return (x + 11U) ^ 0xA5U;
}

static void apply(uint32_t (*fp)(uint32_t), uint32_t x) {
  g_out = fp(x);
}

int main(void) {
  apply(fb, 10U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

