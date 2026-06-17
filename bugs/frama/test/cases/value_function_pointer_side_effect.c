// CRITERIA: value g_result
// EXPECT-ABSENT: IRR_SENTINEL_FP2

#include <stdint.h>
#include <stdio.h>

static uint32_t g_result = 0U;
static uint32_t g_seed = 0xC001D00DU;

static uint32_t step(uint32_t x) {
  return x * 22695477U + 1U;
}

static void f_a(uint32_t x) {
  g_result = x ^ 0xAAAA5555U;
}

static void f_b(uint32_t x) {
  g_result = (x + 3U) ^ 0x13579BDFU;
}

static void (*g_f)(uint32_t) = f_a;

static void func_1(void) {
  g_seed = step(g_seed);
  g_f = ((g_seed & 1U) != 0U) ? f_a : f_b;
  g_f(g_seed);

  uint32_t IRR_SENTINEL_FP2 = 0U;
  IRR_SENTINEL_FP2 = (IRR_SENTINEL_FP2 + g_seed) ^ 0x2468ACE0U;
  if (IRR_SENTINEL_FP2 == 0xFFFFFFFFU) {
    g_result ^= IRR_SENTINEL_FP2;
  }
}

int main(void) {
  func_1();
  printf("%u\n", g_result);
  uint32_t x = g_result;
  uint8_t digest = (uint8_t)(x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24));
  return (int)digest;
}
