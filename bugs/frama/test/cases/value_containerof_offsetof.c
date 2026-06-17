// CRITERIA: value g_out

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct Node {
  uint32_t v;
  struct Node *next;
};

struct Wrap {
  uint8_t tag;
  struct Node node;
  uint32_t pad;
};

#define container_of(ptr, type, member) \
  ((type *)((char *)(ptr)-offsetof(type, member)))

int main(void) {
  struct Wrap w;
  w.tag = 0x5AU;
  w.node.v = 0x11223344U;
  w.node.next = (struct Node *)0;
  w.pad = 0xA5A5A5A5U;

  struct Node *n = &w.node;
  struct Wrap *wp = container_of(n, struct Wrap, node);

  g_out = (uint32_t)wp->tag ^ (wp->node.v + 7U) ^ (uint32_t)offsetof(struct Wrap, node);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

