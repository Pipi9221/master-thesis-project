// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

static uint32_t inc(uint32_t x) {
  g = x + 1U;
  return g;
}

static uint32_t dec(uint32_t x) {
  g = x - 1U;
  return g;
}

static uint32_t (*pick(uint32_t x))(uint32_t) {
  if ((x & 1U) != 0U) {
    return inc;
  }
  return dec;
}

int main(void) {
  uint32_t (*fp)(uint32_t) = pick(3U);
  uint32_t v = fp(10U);
  printf("%u\n", v);
  return (int)(v & 0xFFU);
}

