// CRITERIA: value g.out
// EXPECT-ABSENT: touch_noise
// EXPECT-ABSENT: g.noise

#include <stdint.h>
#include <stdio.h>

struct G {
  uint32_t out;
  uint32_t noise;
};

static struct G g = {0U, 0U};

static void touch_noise(uint32_t x) {
  for (uint32_t i = 0; i < 100U; i++) {
    g.noise = (g.noise * 33U) ^ (x + i + 0x5AU);
  }
  if ((g.noise & 1U) != 0U) {
    g.noise ^= 0xA5U;
  }
}

static uint32_t core(uint32_t x) {
  return (x * 33U) ^ 0x5AU;
}

int main(void) {
  touch_noise(7U);
  g.out = core(11U);
  printf("%u\n", g.out);
  return (int)(g.out & 0xFFU);
}

