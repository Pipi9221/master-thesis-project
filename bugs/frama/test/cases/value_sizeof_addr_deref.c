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
  uint8_t buf[sizeof(*(&s))];
  g_out = (uint32_t)sizeof(buf) ^ s.a ^ (uint32_t)s.b;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

