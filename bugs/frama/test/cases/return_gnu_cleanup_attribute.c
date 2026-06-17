// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

static void cleanup_u32(uint32_t *p) {
  g = *p;
}

int main(void) {
  {
    uint32_t x __attribute__((cleanup(cleanup_u32))) = 123U;
    x = (x * 33U) ^ 0x5AU;
  }
  printf("%u\n", g);
  return (int)(g & 0xFFU);
}
