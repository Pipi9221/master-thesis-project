// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

#pragma pack(push, 1)
struct P {
  uint8_t a;
  uint32_t b;
};
#pragma pack(pop)

static struct P g_p = {1U, 0x11223344U};

int main(void) {
  uint32_t sz = (uint32_t)sizeof(struct P);
  uint32_t out = (sz ^ g_p.b) + (uint32_t)g_p.a;
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

