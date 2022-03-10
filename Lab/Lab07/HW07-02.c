/* 2. Write a C program to check whether an input number is a perfect number or not.
A perfect number is a positive integer which is equal to the sum of its proper positive factors.
For e.g. 6 is a perfect number; because proper factors of 6 are 1, 2, 3 and 1+2+3 = 6.
Also, 28 is a perfect number since sum of its factors = 1+2+4+7+14 = 28.
Test: 6, 28, 496, 8128, 33550336. */

#include <stdio.h>

void isPerfectNumber(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("%d is a perfect number.", n);
    }

    else
    {
        printf("%d is a not perfect number.", n);
    }
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    isPerfectNumber(n);
}