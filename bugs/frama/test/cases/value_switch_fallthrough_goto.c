// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static uint32_t f(uint32_t x) {
  uint32_t acc = 0U;
  switch (x & 3U) {
    case 0U:
      acc += 1U;
    case 1U:
      acc ^= 0x5AU;
      if ((x & 8U) != 0U) goto L;
      acc += 3U;
      break;
    case 2U:
      acc = (x * 33U) ^ 0xA5U;
      break;
    default:
      acc = x ^ 0xFFU;
      break;
  }
L:
  acc ^= (x << 1);
  return acc;
}

int main(void) {
  uint32_t v = f(9U);
  g_out = v + 1U;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

