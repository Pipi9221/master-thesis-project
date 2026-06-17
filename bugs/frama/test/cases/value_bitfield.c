// CRITERIA: value g_s.b

#include <stdint.h>
#include <stdio.h>

struct BF {
  unsigned a : 3;
  unsigned b : 5;
  unsigned c : 24;
};

static struct BF g_s = {1U, 3U, 0xABCDEU};

int main(void) {
  g_s.a = (g_s.a + 2U) & 7U;
  g_s.b = (g_s.b ^ g_s.a) & 31U;
  g_s.c = (g_s.c + (uint32_t)g_s.b) ^ 0x12345U;

  uint32_t out = (uint32_t)g_s.b ^ ((uint32_t)g_s.c & 0xFFU);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

