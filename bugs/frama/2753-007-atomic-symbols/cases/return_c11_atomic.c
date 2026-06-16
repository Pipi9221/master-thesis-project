// CRITERIA: return main,inc

#include <stdint.h>
#include <stdio.h>
#include <stdatomic.h>

static _Atomic uint32_t g = 0U;

static uint32_t inc(uint32_t x) {
  uint32_t prev = atomic_fetch_add(&g, x);
  uint32_t now = atomic_load(&g);
  return (prev ^ now) + 1U;
}

int main(void) {
  uint32_t a = inc(3U);
  uint32_t b = inc(5U);
  uint32_t out = a ^ (b << 1) ^ atomic_load(&g);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

