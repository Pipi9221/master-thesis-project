// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

struct Bits {
  unsigned a : 3;
  unsigned b : 5;
  unsigned c : 8;
};

static struct Bits g = {.a = 5U, .b = 17U, .c = 0xABU};

static uint32_t f(uint32_t x) {
  g.a = (unsigned)((g.a + x) & 7U);
  g.b ^= (unsigned)(x & 31U);
  return ((uint32_t)g.a) | ((uint32_t)g.b << 8) | ((uint32_t)g.c << 16);
}

int main(void) {
  uint32_t out = f(9U);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

