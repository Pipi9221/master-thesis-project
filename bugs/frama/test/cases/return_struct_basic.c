// CRITERIA: return main,make

#include <stdint.h>
#include <stdio.h>

struct S {
  uint32_t a;
  uint32_t b;
};

static struct S make(uint32_t x) {
  struct S s;
  s.a = (x * 33U) ^ 0x5AU;
  s.b = (x + 7U) ^ 0xA5U;
  if ((s.a & 1U) != 0U) {
    s.b ^= (s.a >> 3);
  } else {
    s.a ^= (s.b << 1);
  }
  return s;
}

int main(void) {
  struct S s1 = make(10U);
  struct S s2 = make(11U);
  uint32_t out = (s1.a ^ (s1.b << 1)) + (s2.a ^ (s2.b << 2));
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}
