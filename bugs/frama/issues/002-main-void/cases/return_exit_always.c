// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  uint32_t x = (7U * 33U) ^ 0x5AU;
  printf("%u\n", x);
  exit((int)(x & 0xFFU));
}

