// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct S {
  union {
    uint32_t u;
    uint8_t b[4];
  };
};

int main(void) {
  struct S s;
  s.u = 0x11223344U;
  g_out = (uint32_t)s.b[0] | ((uint32_t)s.b[3] << 8);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

