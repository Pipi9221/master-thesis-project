// CRITERIA: value s.a

#include <stdint.h>
#include <stdio.h>

struct S {
  uint32_t a;
  uint32_t b;
};

static uint32_t mix(uint32_t x) {
  x ^= x >> 16;
  x *= 0x7FEB352DU;
  x ^= x >> 15;
  x *= 0x846CA68BU;
  x ^= x >> 16;
  return x;
}

int main(void) {
  struct S s;
  s.a = mix(0x11111111U);
  s.b = mix(0x22222222U);
  s.a ^= (s.b >> 3);
  uint32_t out = s.a ^ (s.b & 0xFFU);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

