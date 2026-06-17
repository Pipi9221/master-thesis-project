// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct P {
  uint32_t x;
  uint8_t y;
};

int main(void) {
  struct P s = {.x = 1U, .y = 2U};
  typeof(s) t = s;
  uint8_t buf[sizeof(typeof(s))];
  g_out = (uint32_t)sizeof(buf) ^ t.x ^ (uint32_t)t.y;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

