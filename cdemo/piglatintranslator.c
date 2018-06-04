
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void init(char english[], char piglatin[]);
void reader(char english[]);
int wordcounter(char english[]);
void translate(int words, char english[], char piglatin[]);
void output(char piglatin[]);

int main( )
{
    char english[80], piglatin[80];
    int words;
    printf("Type English Text and this will translate it into Pig Latin\n\n");
    printf("Type 'END' when finished\n\n");

    do
    {
        init(english, piglatin);
        reader(english);

        if (toupper(english[0]) == 'E' && toupper(english[1]) == 'N' && toupper(english[2]) == 'D')
            break;

        words = wordcounter(english);

        translate(words, english, piglatin);
        output(piglatin);
 +   }
    while (words >= 0);
    printf("adios muchacho\n");
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
void translate(int words, char english[], char piglatin[])
{
    int n, count;
    int m1 = 0;
    int m2;
    // m1 starts word, m2 ends

    // translate
    for (n = 1; n <= words; ++n)
    {
        count = m1 ;
        while (english[count] != ' ')
            m2 = count++;

        // transp. first letter & add a
        for (count = m1 ; count < m2; ++count)
            piglatin[count + (n - 1)] = english[count + 1];
        piglatin[m2 + (n - 1)] = english[m1];
        piglatin[m2 + n] = 'a';

        m1 = m2 + 2;
    }
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
