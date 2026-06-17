// CRITERIA: value g_s.a

#include <stdint.h>
#include <stdio.h>

struct S {
  uint32_t a;
  uint32_t b;
};

static struct S g_s = {0U, 0U};

int main(void) {
  g_s.a = 0x11223344U;
  g_s.b = 0x55667788U;
  printf("%u\n", g_s.a);
  return (int)(g_s.a & 0xFFU);
}

