// CRITERIA: value g_u32
// EXPECT-ABSENT: IRR_SENTINEL_U

#include <stdint.h>
#include <stdio.h>
#include <string.h>

static uint32_t g_u32 = 0U;

union U {
  uint32_t u32;
  uint8_t b[4];
};

static void func_1(void) {
  union U u;
  uint32_t x = 0x11223344U;
  memcpy(&u.u32, &x, sizeof(x));

  u.b[0] ^= 0x5AU;
  u.b[3] ^= 0xA5U;

  uint32_t y = 0U;
  memcpy(&y, &u.u32, sizeof(y));
  g_u32 = y;

  uint32_t IRR_SENTINEL_U = 0U;
  IRR_SENTINEL_U = (IRR_SENTINEL_U + g_u32) ^ 0x0F0F0F0FU;
  if (IRR_SENTINEL_U == 0xFFFFFFFFU) {
    g_u32 ^= IRR_SENTINEL_U;
  }
}

int main(void) {
  func_1();
  printf("%u\n", g_u32);
  uint32_t x = g_u32;
  uint8_t digest = (uint8_t)(x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24));
  return (int)digest;
}
