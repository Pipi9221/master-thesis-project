// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static void tweak(uint32_t n, uint32_t a[n]) {
  uint32_t *p = &a[0];
  uint32_t *q = &a[n - 1U];
  *p = (*p + 1U) ^ 0x5AU;
  *q = (*q + 2U) ^ 0xA5U;
}

int main(void) {
  uint32_t n = 5U;
  uint32_t a[n];
  for (uint32_t i = 0U; i < n; i++) {
    a[i] = i * 10U;
  }
  tweak(n, a);
  g_out = a[0] + a[n - 1U];
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

