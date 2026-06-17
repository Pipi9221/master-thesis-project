// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static uint32_t g = 0U;

__attribute__((destructor)) static void fini(void) {
  if (g != 0U) exit(201);
}

int main(void) {
  g = (7U * 33U) ^ 0x5AU;
  uint32_t out = g;
  printf("%u\n", out);
  return 0;
}

