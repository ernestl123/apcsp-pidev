#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
else if (a == b)
{
	printf("a is b\n");
}
else if (a != b)
{
	printf("a is not b\n");
}
else if (a < b)
{
	printf("a is greater than b\n");
}
else if (a<= b)
{
	printf("a is greater than or equal to b\n");
}
else if  (a == 0 && b == 0)
{
	printf("a and b are both 0\n");
}
else if (a ==0 || b == 0)
{
	printf("a or b is 0\n");
}
else if (a != 0)
{
	printf("a is not 0\n");
}
    
}
