/* 3.	Write a C program to print all unique letters in an input string.
Sample input/output:
Enter a string: Hello how are you?
Unique letters in the input string (ignoring differences between lowercase & uppercase letters):
a, e, h, l, o, r, u, w, y */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char a[50];
    printf("Enter a string: ");
    gets(a);

    for(int i = 0; i <strlen(a); i++)
    {
        int c = 0;
    }
}