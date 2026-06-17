// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

static uint32_t add1(uint32_t x) {
  g = x + 1U;
  return g;
}

static uint32_t add2(uint32_t x) {
  g = x + 2U;
  return g;
}

static uint32_t (*const table[2])(uint32_t) = {add1, add2};

int main(void) {
  uint32_t sel = 1U;
  uint32_t v = table[sel](10U);
  printf("%u\n", v);
  return (int)(v & 0xFFU);
}

