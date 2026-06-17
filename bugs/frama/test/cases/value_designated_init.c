// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

struct P {
  uint32_t a;
  uint32_t b;
  uint32_t c;
};

static struct P g_p = {.b = 20U, .a = 10U, .c = 30U};
static uint32_t g_out = 0U;

static void func_1(uint32_t x) {
  struct P local = (struct P){.a = x, .c = x + 2U, .b = x + 1U};
  g_p.a ^= local.b;
  g_p.b += local.c;
  g_p.c = (g_p.c ^ local.a) + 7U;
  g_out = g_p.a ^ (g_p.b << 1) ^ (g_p.c << 2);
}

int main(void) {
  func_1(5U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

