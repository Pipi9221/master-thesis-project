// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

_Noreturn static void die(uint32_t code) {
  exit((int)(code & 0xFFU));
}

int main(void) {
  uint32_t x = (7U * 33U) ^ 0x5AU;
  if ((x & 1U) != 0U) {
    die(x);
  }
  printf("%u\n", x);
  return (int)(x & 0xFFU);
}

