
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void init(char english[], char piglatin[]);
int wordcounter(char english[]);
void translate(int words, char arg1[], char piglatin[]);


int main(int argc, char* argv[])
{
    char arg1[80], piglatin[80];
    int words;
	init(arg1, piglatin);
	sscanf(argv[1], "%s", &arg1);
	words = wordcounter(arg1);
	translate(words, arg1, piglatin);
	printf ("%s\n", piglatin);

}









		// create blank arrays
void init(char english[], char piglatin[])
{
    for (int count = 0; count < 80; ++count)
        english[count] = piglatin[count] = ' ';
    return;
}


		// reads in english
void reader(char english[])
{
    int count;
    char c;
    while (( c = getchar()) != '\n')
    {
        english[count] = c;
        ++count;
    }
    return;
}


		// word counter
int wordcounter(char english[])
{
    int count, words = 1;
    for (count = 0; count < 79; ++count)
    if (english[count] == ' ' && english[count + 1] != ' ')
        ++words;
    return (words);
}


		// begins translation to pig latin
void translate(int words, char arg1[], char piglatin[])
{
    int count;
    int m1 = 0;
    int m2;
    // m1 starts word, m2 ends

    // translate
            m2 = strlen(arg1);

        // transp. first letter & add a
        for (count = m1 ; count < m2; ++count)
            piglatin[count] = arg1[count + 1];
        piglatin[m2-1] = arg1[m1];
        piglatin[m2] = 'a';
	piglatin[m2 + 1] = 'y';

    return;
}


		// translator displays in pig latin
void output(char piglatin[])
{
    int count = 0;
    for (count = 0; count < 80; ++count)
        putchar(piglatin[count]);
    printf("\n");
    return;
} 
