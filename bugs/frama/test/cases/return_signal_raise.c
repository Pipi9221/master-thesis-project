// CRITERIA: return main

#include <signal.h>
#include <stdint.h>
#include <stdio.h>

static volatile sig_atomic_t g = 0;

static void handler(int sig) {
  (void)sig;
  g = g + 1;
}

int main(void) {
  signal(SIGUSR1, handler);
  raise(SIGUSR1);
  uint32_t out = (uint32_t)g;
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

