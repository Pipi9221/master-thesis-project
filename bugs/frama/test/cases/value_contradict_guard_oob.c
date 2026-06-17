// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;
static uint32_t g_buf[2] = {1U, 2U};

static uint32_t mix(uint32_t x) {
  return (x ^ (x >> 16)) * 0x45D9F3BU;
}

static void func_1(uint32_t x) {
  uint32_t i = x & 1U;

  if ((i == 0U) && (i != 0U)) {
    g_buf[1000] = x;
  }

  g_out = mix(g_buf[i]);
}

int main(void) {
  func_1(3U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

