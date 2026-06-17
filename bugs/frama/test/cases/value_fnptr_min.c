// CRITERIA: value g_result

#include <stdint.h>
#include <stdio.h>

static uint32_t g_result = 0U;

static void fa(uint32_t x) {
  g_result = x ^ 0xAAAA5555U;
}

static void fb(uint32_t x) {
  g_result = x ^ 0x13579BDFU;
}

static void (*fp)(uint32_t) = fa;

int main(void) {
  fp = fb;
  fp(1U);
  printf("%u\n", g_result);
  uint32_t x = g_result;
  uint8_t digest = (uint8_t)(x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24));
  return (int)digest;
}
