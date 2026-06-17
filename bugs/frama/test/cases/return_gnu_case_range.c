// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t f(uint32_t x) {
  switch (x) {
    case 0U ... 2U:
      return 10U + x;
    case 3U:
      return 20U;
    default:
      return 30U;
  }
}

int main(void) {
  uint32_t out = f(1U);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

