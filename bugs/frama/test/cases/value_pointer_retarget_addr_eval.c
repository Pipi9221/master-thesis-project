// CRITERIA: value *p

#include <stdint.h>
#include <stdio.h>

static uint32_t g_buf[3] = {10U, 20U, 30U};
static uint32_t *p = &g_buf[0];

static uint32_t bump(uint32_t x) {
  return (x + 7U) ^ 0x5AU;
}

int main(void) {
  p = &g_buf[0];
  *p = bump(*p);

  p = &g_buf[2];
  *p = bump(*p);

  uint32_t out = g_buf[0];
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

