// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static uint32_t bump(uint32_t x) {
  static uint32_t s = 0U;
  s = (s + x) ^ 0x5AU;
  return s;
}

static void func_1(void) {
  uint32_t a = bump(1U);
  uint32_t b = bump(2U);
  g_out = a ^ (b << 1);
}

int main(void) {
  func_1();
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

