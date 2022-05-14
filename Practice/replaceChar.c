/*

Dhaka */

#include <stdio.h>

char *replaceChar(char *s, char x, char y)
{
    for (int i = 0; *(s + i) != '\0'; i++)
    {
        if (*(s + i) == 'd')
        {
            *(s + i) = 'D';
            break;
        }
    }
}

void main()
{
    char s[] = "dhaka";

    replaceChar(s, 'd', 'D');

    printf("%s", s);
}