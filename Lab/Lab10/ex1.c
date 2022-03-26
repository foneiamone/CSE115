/**
 * 1. Write a C program to print all prime numbers between 1 and n in reverse order (n is an input).
 * Sample input/output:
 * Enter n: 20
 * All prime numbers between 1 and 20 (in reverse order):19, 17, 13, 11, 7, 5, 3, 2,
 */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("All prime numbers between 1 and %d (in reverse order):", n);
    for (int i = n; i != 1; i--)
    {
        int isPrime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d, ", i);
        }
    }
}