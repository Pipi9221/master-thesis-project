// CRITERIA: value g_out
// CHECK-STDOUT: 1
// CHECK-REPARSE: 1

#include <stdint.h>
#include <stdio.h>
#include <string.h>

static uint32_t g_out = 0U;

int main(void) {
  unsigned char buf[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 0};
  memmove(&buf[2], &buf[0], 4);
  uint32_t x = (uint32_t)buf[0] ^ ((uint32_t)buf[2] << 8) ^ ((uint32_t)buf[5] << 16);
  g_out = x + 7U;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
