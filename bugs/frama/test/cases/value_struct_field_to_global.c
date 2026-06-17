// CRITERIA: value g_out
// EXPECT-ABSENT: IRR_SENTINEL_5

#include <stdint.h>
#include <stdio.h>

struct S {
  int32_t a;
  int32_t b;
};

static struct S g_s = {0, 0};
static int32_t g_out = 0;

static void func_1(int32_t x) {
  g_s.a = x * 2 + 1;
  g_s.b = x * 1000 - 7;

  uint32_t IRR_SENTINEL_5 = (uint32_t)x;
  IRR_SENTINEL_5 ^= 0x5A5A5A5AU;
  if (IRR_SENTINEL_5 == 0xFFFFFFFFU) {
    g_s.b = g_s.b + (int32_t)IRR_SENTINEL_5;
  }

  g_out = g_s.a;
}

int main(void) {
  func_1(9);
  printf("%d\n", g_out);
  uint32_t x = (uint32_t)g_out;
  uint8_t digest = (uint8_t)(x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24));
  return (int)digest;
}
