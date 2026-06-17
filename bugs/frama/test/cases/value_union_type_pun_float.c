// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

union U {
  uint32_t u;
  float f;
};

int main(void) {
  union U x;
  x.u = 0x3F800000U;
  float y = x.f;
  g_out = (uint32_t)(y * 33.0f) ^ x.u;
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

