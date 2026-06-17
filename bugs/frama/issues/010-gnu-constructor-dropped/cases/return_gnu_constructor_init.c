// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

__attribute__((constructor)) static void init(void) {
  g = (7U * 33U) ^ 0x5AU;
}

int main(void) {
  uint32_t out = g + 1U;
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

