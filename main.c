// This program demonstrates the use of a shift right macro

#include <stdio.h>

#define SHIFT(shift, by) (by > 0) ? (shift <<= by) : (shift >>= -by)

int main(void) {

  unsigned int sft = 0b00000100; // 4
  
  int by = 2; // * 4
  printf ("%d\n", SHIFT(sft, by)); // 4*4 = 16

  by = -1; // / 2
  printf ("%d\n", SHIFT(sft, by)); // 16/2 = 8
  
  return 0;
}