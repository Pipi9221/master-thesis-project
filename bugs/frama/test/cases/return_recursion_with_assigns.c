// CRITERIA: return main,fac_mod
// FRAMAC-ARGS: -eva-unroll-recursive-calls 12

#include <stdint.h>
#include <stdio.h>

/*@ assigns \nothing; */
static uint32_t fac_mod(uint32_t n) {
  if (n == 0U) return 1U;
  return (n * fac_mod(n - 1U)) % 251U;
}

int main(void) {
  uint32_t v = fac_mod(9U);
  printf("%u\n", v);
  return (int)(v & 0xFFU);
}

