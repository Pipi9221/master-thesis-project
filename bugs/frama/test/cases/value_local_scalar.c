// CRITERIA: value x

#include <stdint.h>
#include <stdio.h>

static uint32_t step(uint32_t x) {
  return x * 1664525U + 1013904223U;
}

int main(void) {
  uint32_t x = 0x12345678U;
  for (uint32_t i = 0; i < 4U; i++) {
    x = step(x) ^ (i * 0x55U);
  }
  printf("%u\n", x);
  return (int)(x & 0xFFU);
}

