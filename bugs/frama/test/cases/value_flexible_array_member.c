// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Buf {
  uint32_t n;
  uint32_t data[];
};

static uint32_t g_out = 0U;

static uint32_t run(uint32_t n) {
  struct Buf *b = (struct Buf *)malloc(sizeof(struct Buf) + n * sizeof(uint32_t));
  if (!b) return 0U;
  b->n = n;
  for (uint32_t i = 0U; i < n; i++) {
    b->data[i] = (i * 33U) ^ 0x5AU;
  }
  uint32_t acc = 0U;
  for (uint32_t i = 0U; i < n; i++) {
    acc ^= b->data[i];
  }
  free(b);
  return acc;
}

int main(void) {
  g_out = run(8U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

