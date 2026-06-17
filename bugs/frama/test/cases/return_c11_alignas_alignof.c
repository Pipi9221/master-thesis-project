// CRITERIA: return main,f

#include <stdint.h>
#include <stdio.h>

static _Alignas(32) uint8_t g_buf[64];

static uint32_t f(uint32_t x) {
  uintptr_t addr = (uintptr_t)&g_buf[0];
  uint32_t a = (uint32_t)(addr & 31U);
  uint32_t b = (uint32_t)(_Alignof(uint64_t));
  return (x ^ a) + (b << 4);
}

int main(void) {
  uint32_t out = f(123U);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

