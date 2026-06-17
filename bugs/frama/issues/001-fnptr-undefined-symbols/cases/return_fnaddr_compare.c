// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

static uint32_t f1(uint32_t x) {
  g = x + 10U;
  return g;
}

static uint32_t f2(uint32_t x) {
  g = x + 20U;
  return g;
}

int main(void) {
  uint32_t (*p)(uint32_t) = f1;
  if (&f1 == &f2) {
    p = f2;
  }
  uint32_t v = p(1U);
  printf("%u\n", v);
  return (int)(v & 0xFFU);
}
