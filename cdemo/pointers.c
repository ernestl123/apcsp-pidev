
#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  int d = 4;
  int e = 8;
  int* ptrtod = &d;
  int* ptrtoe = &e;
  printf("The value of d is %d and the address is %d\n", d, ptrtod);
  printf("The value of e is %d and the address is %d\n", e, ptrtoe);
  e = *ptrtod;
  d = 8;
  printf("After the swap, the value of d is %d\n", d);
  printf("After the swap, the value of e is %d\n", e);
}
