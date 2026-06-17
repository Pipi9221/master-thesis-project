// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct S {
  uint32_t a;
  uint16_t b;
};

int main(void) {
  struct S s1 = {.a = 1U, .b = 2U};
  struct S s2 = {.a = 3U, .b = 4U};
  struct S *p = &s1;
  struct S *q = &s2;
  uint32_t cond = 1U;
  uint8_t buf[sizeof(*(cond ? p : q))];
  g_out = (uint32_t)sizeof(buf) ^ p->a ^ q->a;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

