// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

_Static_assert(sizeof(uint32_t) == 4, "u32 size");

static uint32_t g_out = 0U;

int main(void) {
  g_out = (uint32_t)sizeof(uint64_t) * 33U;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

