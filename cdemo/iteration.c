#include <stdio.h>

int main()
{
	int dev = 4;
	for (int i = 0; i<100; i++)
	{
		int res = i % dev;
		if (res == 0)
		{
			printf("%i\n", i);
		}
	}
}
