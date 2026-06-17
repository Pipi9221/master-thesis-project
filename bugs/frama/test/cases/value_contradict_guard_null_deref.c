// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static void func_1(uint32_t x) {
  uint32_t *p = (uint32_t *)0;

  if ((p != (uint32_t *)0) && (p == (uint32_t *)0)) {
    *p = x;
    g_out = 0xDEADBEEFU;
    return;
  }

  g_out = (x * 33U) ^ 0x5AU;
}

int main(void) {
  func_1(7U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

