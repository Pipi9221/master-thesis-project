// CRITERIA: return main
// EXPECT-ABSENT: IRR_SENTINEL_FP

#include <stdint.h>
#include <stdio.h>

static uint32_t g_state = 0U;

static uint32_t add_1(uint32_t x) {
  g_state = x + 1U;
  return g_state;
}

static uint32_t add_2(uint32_t x) {
  g_state = x + 2U;
  return g_state;
}

static uint32_t (*g_fp)(uint32_t) = add_1;

int main(void) {
  uint32_t IRR_SENTINEL_FP = 0U;
  for (uint32_t i = 0; i < 3; i++) {
    IRR_SENTINEL_FP ^= (i + 11U) * 97U;
  }

  g_state = 0U;
  g_fp = ((g_state & 1U) != 0U) ? add_1 : add_2;
  uint32_t v = g_fp(40U);

  if (IRR_SENTINEL_FP == 0xFFFFFFFFU) {
    v ^= IRR_SENTINEL_FP;
  }

  printf("%u\n", v);
  return (int)(v & 0xFFU);
}
