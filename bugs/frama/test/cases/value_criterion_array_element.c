// CRITERIA: value g_arr[3]

#include <stdint.h>
#include <stdio.h>

static uint32_t g_arr[8] = {0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U};

int main(void) {
  g_arr[3] = 0x11223344U;
  printf("%u\n", g_arr[3]);
  return (int)(g_arr[3] & 0xFFU);
}

