#include<stdio.h>

int main()
{
  int a = 545;
  float b;
  b = 5.5;
  char c = 8;
  double d; 
  d = 4.0;

  // print value and size of an int variable
  printf("int a: decimal value %d, octal value  %o, hexidecimal value  %x, and size %d bytes.\n", a, a, a, sizeof(a));
  printf("float b: decimal value %d, octal value  %o, hexidecimal value  %x, and size %d bytes.\n", b, b, b, sizeof(b));
  printf("char c: decimal value %d, octal value  %o, hexidecimal value  %x, and size %d bytes.\n", c, c, c, sizeof(c));
  printf("double d: decimal value %d, octal value  %o, hexidecimal value  %x, and size %d bytes.\n", d, d, d, sizeof(d));
}
