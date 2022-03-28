/* 5. Write a C programs to print the following patterns: */

#include <stdio.h>

void main()
{
    int m = 5;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = m; j != 0; j--)
        {
            printf(" ");
        }
        m--;

        for(int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
