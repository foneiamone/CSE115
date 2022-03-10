// 1. Write a C program to print all odd numbers from 1 to n (n is user input) using for loop.

#include <stdio.h>

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);

            if (i != n && i != (n - 1))
            {
                printf(", ");
            }
        }
    }

    printf(".");
}