// 2. Write a C program to compute and print the sum of all prime numbers between m and n (m, n are inputs)

#include <stdio.h>

void main()
{
    int m, n, i;
    printf("Enter two numbers[m, n]: ");
    scanf("%d %d", &m, &n);

    if (m < 2)
    {
        i = 2;
    }

    else
    {
        i = m;
    }

    int sum = 0;
    for (i; i <= n; i++)
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
            sum += i;
        }
    }

    printf("Sum of prime numbers: %d", sum);
}