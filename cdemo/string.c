#include <stdio.h>
#include <string.h>

int main()
{
	char string1[26] = "abcdefghijklmnopqrstuvwxyz";
	char string2[26] = "a";
	for (int i = 0; i<26; i++)
	{
		string2[i] = string2[0] + i;
	}
	if (strcmp(string1, string2) == 0)
	{
		printf("The strings are the same\n");
	}


	for (int i = 0; i<26; i++)
	{
		string2[i] = string2[i] - 32;
	}

	if (strcmp(string1, string2) != 0)
	{
		printf("The strings are not the same\n");
	}
	char string3[53] = "";
	strcat(string3, string1);
	strcat(string3, string2);
	printf("%s\n%s\n%s\n", string1, string2, string3);

}
