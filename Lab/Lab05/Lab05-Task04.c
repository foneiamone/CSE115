/* 4. Write a C program to check whether an input alphabet is a 
vowel or a consonant using switch case (assume that the input is an English letter). */

#include <stdio.h>

void main()
{
    char in;

    printf("Enter an alphabet: ");
    scanf("%c", &in);

    switch (in)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("The alphabet is a vowel.");
        break;

    default:
        printf("The alphabet is a consonant.");
        break;
    }
}