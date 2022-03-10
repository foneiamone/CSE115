/* 5. Write a program to display all the letters of the alphabet (a-z). Use two for loops: the 1st one will print all
letters in small letters and the 2nd one will print them in capital letters.
Example output:

a b c d e ......... z
A B C D ......... Z */

#include <stdio.h>

void main()
{
    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("%c ", i);
    }

    printf("\n");

    for (int i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", i);
    }
}