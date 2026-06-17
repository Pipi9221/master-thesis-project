// CRITERIA: return main,foo

#include <stdint.h>
#include <stdio.h>

static uint32_t g_acc = 0U;

static uint32_t foo(uint32_t x) {
  if ((x & 1U) != 0U) {
    g_acc ^= (x + 1U);
    return x + 1U;
  }
  g_acc ^= (x + 2U);
  return x + 2U;
}

static uint32_t bar(uint32_t x) {
  uint32_t t = x;
  for (uint32_t i = 0; i < 5U; i++) {
    t = (t * 33U) ^ (i + 7U);
  }
  return t;
}

int main(void) {
  uint32_t v1 = foo(10U);
  uint32_t v2 = foo(11U);
  uint32_t v3 = bar(123U);
  uint32_t out = (v1 ^ (v2 << 1)) + (v3 & 0xFFU);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

