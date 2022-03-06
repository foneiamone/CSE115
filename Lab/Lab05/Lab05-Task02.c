/* 2. Write a C program to check whether an input alphabet is a
vowel or a consonant (assume that the input is an English letter). */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char input;

    printf("Enter an alphabet: ");
    scanf("%c", &input);

    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 5; i++)
    {
        if (input == vowel[i])
        {
            printf("The alphabet is a vowel.");
            abort();
        }
    }

    printf("The alphabet is a consonant.");
}