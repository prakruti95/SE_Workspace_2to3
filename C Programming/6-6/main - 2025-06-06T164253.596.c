#include <stdio.h>

int main() 
{
  unsigned int a = 60; // 0011 1100 in binary
  unsigned int b = 13; // 0000 1101 in binary
  unsigned int c = 0;

  c = a & b;  // Bitwise AND: 0000 1100 (12)
  printf("a & b = %u\n", c);

  c = a | b;  // Bitwise OR:  0011 1101 (61)
  printf("a | b = %u\n", c);

  c = a ^ b;  // Bitwise XOR: 0011 0001 (49)
  printf("a ^ b = %u\n", c);

  c = ~a;     // Bitwise NOT: 1100 0011 (implementation-dependent)
  printf("~a = %u\n", c);

  c = a << 2; // Left shift: 1111 0000 (240)
  printf("a << 2 = %u\n", c);

  c = a >> 2; // Right shift: 0000 1111 (15)
  printf("a >> 2 = %u\n", c);

  return 0;
}


