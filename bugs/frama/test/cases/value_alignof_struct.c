// CRITERIA: value g_out
// EXPECT-FRAMAC-FAIL: _Alignof is currently unsupported

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct Q {
  uint64_t a;
  uint8_t b;
};

int main(void) {
  uint32_t al = (uint32_t)_Alignof(struct Q);
  uint32_t sz = (uint32_t)sizeof(struct Q);
  g_out = al ^ (sz + 7U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
