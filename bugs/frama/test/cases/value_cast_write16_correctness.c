// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

static void write16(void *p) {
  uint16_t *q = (uint16_t *)p;
  q[0] = (uint16_t)0x3344U;
  q[1] = (uint16_t)0x1122U;
}

int main(void) {
  write16(&g_out);
  g_out ^= 0x5AU;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
