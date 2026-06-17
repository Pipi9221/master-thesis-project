// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static void on_exit_hook(void) {
  exit(200);
}

int main(void) {
  atexit(on_exit_hook);
  uint32_t out = 123U;
  printf("%u\n", out);
  return 0;
}

