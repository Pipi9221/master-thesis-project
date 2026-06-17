// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static uint32_t mix(uint32_t x) {
  x ^= x >> 16;
  x *= 0x7FEB352DU;
  x ^= x >> 15;
  x *= 0x846CA68BU;
  x ^= x >> 16;
  return x;
}

int main(void) {
  uint32_t n = 7U;
  uint32_t vla[n];
  for (uint32_t i = 0U; i < n; i++) {
    vla[i] = mix(i + 1U);
  }
  g_out = vla[3] ^ vla[n - 1U];
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

