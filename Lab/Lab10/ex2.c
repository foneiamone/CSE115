// 2. Write a C program to compute and print the sum of all prime numbers between m and n (m, n are inputs)

#include <stdio.h>

void main()
{
    int m, n;
    printf("Enter two numbers[m, n]: ");
    scanf("%d %d", &m, &n);

    int sum = 0, i;
    for (m; m <= n; m++)
    {
        for (i = 2; i <= m / 2; i++)
        {
            if (m % i == 0)
            {
            }

            else
            {
                sum += m;
            }
        }
    }

    printf("Sum of prime numbers: %d", m, n, sum);
}