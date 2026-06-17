// CRITERIA: value g_out

#include <alloca.h>
#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

int main(void) {
  uint32_t n = 4U;
  uint32_t *p = (uint32_t *)alloca(n * sizeof(uint32_t));
  for (uint32_t i = 0; i < n; i++) {
    p[i] = (i + 1U) * 33U;
  }
  uint32_t sum = 0U;
  for (uint32_t i = 0; i < n; i++) {
    sum ^= p[i];
  }
  g_out = sum + 7U;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

