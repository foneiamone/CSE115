// 2. Write a C program to print all odd numbers from 1 to n (n is user input) using for loop.

#include <stdio.h>

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to n: ");
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}