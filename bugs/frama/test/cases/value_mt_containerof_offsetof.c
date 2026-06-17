// CRITERIA: value g_out

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct Node {
  uint32_t tag;
  uint32_t val;
  struct Node *next;
};

struct Wrapper {
  uint32_t hdr;
  struct Node n;
  uint32_t tail;
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
  struct Wrapper w = {0};
  w.hdr = 0xA1B2C3D4U;
  w.n.tag = 7U;
  w.n.val = 11U;
  w.n.next = &w.n;
  w.tail = 0x55667788U;

  struct Node *np = &w.n;
  uint8_t *p = (uint8_t *)np;
  struct Wrapper *wp = (struct Wrapper *)(p - offsetof(struct Wrapper, n));

  wp->tail ^= mix(wp->hdr ^ np->val);
  g_out = mix(wp->tail) ^ np->tag;

  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
