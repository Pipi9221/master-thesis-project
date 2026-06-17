// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

static void barrier(void) {
  __asm__ __volatile__("" : : : "memory");
}

int main(void) {
  g = 1U;
  barrier();
  g = (g + 7U) ^ 0x5AU;
  uint32_t out = g;
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

