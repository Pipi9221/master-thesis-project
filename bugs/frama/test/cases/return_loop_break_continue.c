// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t g_sum = 0U;

static void func_1(uint32_t n) {
  uint32_t i = 0U;
  while (i < n) {
    i++;
    if ((i & 1U) == 0U) {
      continue;
    }
    g_sum += (i * 3U) ^ 0x55U;
    if (g_sum > 200U) {
      break;
    }
  }

  uint32_t IRR_SENTINEL_L = 1U;
  for (uint32_t k = 0; k < 3; k++) {
    IRR_SENTINEL_L = IRR_SENTINEL_L * 7U + k;
  }
  if (IRR_SENTINEL_L == 0xFFFFFFFFU) {
    g_sum ^= IRR_SENTINEL_L;
  }
}

int main(void) {
  func_1(50U);
  printf("%u\n", g_sum);
  return (int)(g_sum & 0xFFU);
}
