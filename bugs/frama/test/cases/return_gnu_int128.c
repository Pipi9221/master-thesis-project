// CRITERIA: return main,f

#include <stdint.h>
#include <stdio.h>

static uint64_t f(uint64_t x) {
  __uint128_t a = (__uint128_t)x * 0x1FFFFFFFFFFFFFULL;
  __uint128_t b = a ^ (((__uint128_t)0xA5A5A5A5A5A5A5A5ULL) << 32);
  uint64_t lo = (uint64_t)b;
  uint64_t hi = (uint64_t)(b >> 64);
  return lo ^ hi;
}

int main(void) {
  uint64_t v = f(0x123456789ABCDEF0ULL);
  uint32_t out = (uint32_t)(v ^ (v >> 32));
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

