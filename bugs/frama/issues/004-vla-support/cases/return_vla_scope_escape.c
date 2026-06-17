// CRITERIA: return main,foo

#include <stdint.h>
#include <stdio.h>

static uint32_t foo(uint32_t n) {
  uint32_t vla[n];
  for (uint32_t i = 0U; i < n; i++) {
    vla[i] = (i + 1U) * 7U;
  }
  uint32_t s = 0U;
  for (uint32_t i = 0U; i < n; i++) {
    s ^= vla[i];
  }
  return s;
}

int main(void) {
  uint32_t out = foo(9U);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

