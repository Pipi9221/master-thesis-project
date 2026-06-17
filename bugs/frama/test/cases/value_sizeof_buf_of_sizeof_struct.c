// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct Pair {
  uint32_t a;
  uint32_t b;
};

int main(void) {
  struct Pair p = {1U, 2U};
  uint8_t buf[sizeof(p)];
  g_out = (uint32_t)sizeof(buf);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

