// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct Inner {
  uint32_t x;
  uint32_t y;
};

struct Outer {
  struct Inner in[2];
  uint8_t pad;
};

static uint32_t mix(uint32_t a, uint32_t b) {
  uint32_t x = a ^ (b + 0x9E3779B9U);
  x ^= x >> 16;
  x *= 0x7FEB352DU;
  x ^= x >> 15;
  x *= 0x846CA68BU;
  x ^= x >> 16;
  return x;
}

int main(void) {
  struct Outer o = {.in = {{1U, 2U}, {3U, 4U}}, .pad = 5U};
  struct Inner *p = &o.in[0];
  struct Inner *q = &o.in[0];

  if ((o.pad & 1U) != 0U) q = &o.in[1];

  q->x = q->x + 10U;
  p->y = p->y ^ 0x55U;

  uint32_t a = o.in[0].x + o.in[0].y;
  uint32_t b = o.in[1].x + o.in[1].y;
  g_out = mix(a, b) ^ (uint32_t)o.pad;

  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
