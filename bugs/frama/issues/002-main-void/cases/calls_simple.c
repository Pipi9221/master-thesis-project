// CRITERIA: calls foo

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

static void foo(uint32_t x) {
  g = (g + x) ^ 0x5AU;
}

static void bar(uint32_t x) {
  g = (g + x) ^ 0xA5U;
}

int main(void) {
  foo(3U);
  bar(7U);
  printf("%u\n", g);
  return (int)(g & 0xFFU);
}
