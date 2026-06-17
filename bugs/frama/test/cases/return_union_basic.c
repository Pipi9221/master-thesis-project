// CRITERIA: return main,pack

#include <stdint.h>
#include <stdio.h>

union U {
  uint64_t u64;
  struct {
    uint32_t lo;
    uint32_t hi;
  } parts;
};

static union U pack(uint32_t x) {
  union U u;
  u.parts.lo = (x * 33U) ^ 0x5AU;
  u.parts.hi = (x + 9U) ^ 0xA5U;
  u.u64 ^= 0x0123456789ABCDEFULL;
  return u;
}

int main(void) {
  union U u = pack(123U);
  uint32_t out = u.parts.lo ^ (u.parts.hi + (uint32_t)(u.u64 & 0xFFU));
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}
