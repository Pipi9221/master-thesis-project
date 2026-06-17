// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

#define TAG(x) _Generic((x), int: 1U, unsigned: 2U, default: 3U)

int main(void) {
  int a = 0;
  unsigned b = 0U;
  g_out = TAG(a) + (TAG(b) << 4);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

