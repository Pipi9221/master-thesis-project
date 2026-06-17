// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static uint32_t safe(uint32_t x) {
  g_out = x + 1U;
  return g_out;
}

int main(void) {
  uint32_t x = 123U;

  if ((x == 0U) && (x != 0U)) {
    volatile uint32_t d = x - x;
    volatile uint32_t z = 1U / d;
    g_out = z;
  }

  uint32_t r = safe(10U);
  printf("%u\n", r);
  return (int)(r & 0xFFU);
}

