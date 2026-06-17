// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static _Thread_local uint32_t g_tls = 0U;
static uint32_t g_out = 0U;

static void func_1(uint32_t x) {
  g_tls = (x * 33U) ^ 0x5AU;
  g_tls ^= 0xA5U;
  g_out = g_tls + 7U;
}

int main(void) {
  func_1(9U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

