// 6. Write a C program to print all the odd factors of a given number.

#include <stdio.h>

void printOddFacts(int n)
{
    printf("All the odd factors of %d: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            printf("%d, ", i);
        }
    }

    printf("\b\b.");
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printOddFacts(n);
}