// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

int main(void) {
  typedef struct {
    uint32_t a;
    uint16_t b;
    uint8_t c;
  } T;

  T t = {.a = 0x11223344U, .b = 0x5566U, .c = 0x77U};
  g_out = t.a ^ ((uint32_t)t.b << 8) ^ (uint32_t)t.c ^ (uint32_t)sizeof(T);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

