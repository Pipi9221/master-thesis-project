// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t g_state = 0U;

static uint32_t f1(uint32_t x) {
  g_state = x + 1U;
  return g_state;
}

static uint32_t f2(uint32_t x) {
  g_state = x + 2U;
  return g_state;
}

static uint32_t (*fp)(uint32_t) = f1;

int main(void) {
  fp = f2;
  uint32_t v = fp(1U);
  printf("%u\n", v);
  return (int)(v & 0xFFU);
}
