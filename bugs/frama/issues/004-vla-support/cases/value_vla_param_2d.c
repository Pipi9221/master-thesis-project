// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static void fill(uint32_t n, uint32_t m, uint32_t a[n][m]) {
  for (uint32_t i = 0U; i < n; i++) {
    for (uint32_t j = 0U; j < m; j++) {
      a[i][j] = (i * 33U + j) ^ 0x5AU;
    }
  }
}

static uint32_t sum_diag(uint32_t n, uint32_t m, uint32_t a[n][m]) {
  uint32_t s = 0U;
  uint32_t k = (n < m) ? n : m;
  for (uint32_t i = 0U; i < k; i++) {
    s += a[i][i];
  }
  return s;
}

int main(void) {
  uint32_t n = 3U;
  uint32_t m = 4U;
  uint32_t a[n][m];
  fill(n, m, a);
  g_out = sum_diag(n, m, a);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

