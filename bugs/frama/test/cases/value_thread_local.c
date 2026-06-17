// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static _Thread_local uint32_t tls = 0U;
static uint32_t g_out = 0U;

static void bump(uint32_t x) {
  tls = (tls + x) ^ 0x5AU;
}

int main(void) {
  bump(1U);
  bump(2U);
  g_out = tls;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

