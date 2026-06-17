// CRITERIA: return main
// EXPECT-SLICED-CC-FAIL: unknown type name ‘pid_t’

#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  uint32_t x = (uint32_t)getpid();
  x = (x * 33U) ^ 0x5AU;
  printf("%u\n", x);
  return (int)(x & 0xFFU);
}
