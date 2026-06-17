// CRITERIA: value g_arr[i]

#include <stdint.h>
#include <stdio.h>

static uint32_t g_arr[4] = {1U, 2U, 3U, 4U};

static uint32_t mix(uint32_t x) {
  x ^= x >> 13;
  x *= 0x5BD1E995U;
  x ^= x >> 15;
  return x;
}

int main(void) {
  uint32_t i = 0U;
  g_arr[0] = mix(0x11111111U);
  g_arr[2] = mix(0x22222222U);

  i = 2U;

  uint32_t out = g_arr[0];
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

