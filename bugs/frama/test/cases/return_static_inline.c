// CRITERIA: return main,call

#include <stdint.h>
#include <stdio.h>

static inline uint32_t inl(uint32_t x) {
  return (x * 33U) ^ 0x5AU;
}

static uint32_t call(uint32_t x) {
  return inl(x) + 7U;
}

int main(void) {
  uint32_t v = call(10U);
  printf("%u\n", v);
  return (int)(v & 0xFFU);
}

