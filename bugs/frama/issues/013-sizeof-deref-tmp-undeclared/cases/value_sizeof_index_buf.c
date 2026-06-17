// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct S {
  uint32_t a;
  uint16_t b;
};

int main(void) {
  struct S s = {.a = 0x11223344U, .b = 0x5566U};
  struct S *p = &s;
  uint8_t buf[sizeof(p[0])];
  for (uint32_t i = 0; i < sizeof(buf); i++) buf[i] = (uint8_t)(i ^ 0x5AU);
  g_out = (uint32_t)sizeof(buf) ^ s.a ^ (uint32_t)s.b ^ (uint32_t)buf[1];
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

