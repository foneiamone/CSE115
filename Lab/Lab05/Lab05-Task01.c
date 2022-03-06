// 1. C Program to check whether the input is a character, digit or a special character.

#include <stdio.h>

void main()
{
    char in;

    printf("Enter a character/digit: ");
    scanf("%c", &in);

    if (in >= 'a' && 'z' >= in || in >= 'A' && 'Z' >= in)
    {
        printf("It is a character.");
    }

    else if (in >= '0' && '9' >= in)
    {
        printf("It is a digit.");
    }

    else
    {
        printf("It is a special character.");
    }
}