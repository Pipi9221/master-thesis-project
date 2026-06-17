// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct Pair {
  uint32_t a;
  uint32_t b;
};

static uint32_t mix(const struct Pair *p) {
  return (p->a * 33U) ^ (p->b + 0x5AU);
}

int main(void) {
  const struct Pair *p = &(struct Pair){.a = 10U, .b = 20U};
  g_out = mix(p);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

