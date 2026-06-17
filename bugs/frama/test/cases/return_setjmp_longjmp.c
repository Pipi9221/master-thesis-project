// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>
#include <setjmp.h>

static jmp_buf env;

static uint32_t g = 0U;

static void trigger(uint32_t x) {
  g = (x * 33U) ^ 0x5AU;
  longjmp(env, 1);
}

int main(void) {
  int j = setjmp(env);
  if (j == 0) {
    trigger(7U);
  }
  uint32_t out = g ^ (uint32_t)j;
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

