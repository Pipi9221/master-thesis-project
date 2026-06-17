// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

int main(void) {
  uint32_t x = 1U;
  goto IN;
  x = 99U;

IN: {
    uint32_t y = 7U;
    x = (x + y) ^ 0xA5U;
  }

  g_out = x + 1U;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
