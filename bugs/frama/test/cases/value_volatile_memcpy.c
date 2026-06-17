// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>
#include <string.h>

static volatile uint8_t g_src[4] = {0x11U, 0x22U, 0x33U, 0x44U};
static uint32_t g_out = 0U;

int main(void) {
  uint32_t v = 0U;
  memcpy(&v, (const void *)(g_src), sizeof(v));
  g_out = v ^ 0x5AU;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

