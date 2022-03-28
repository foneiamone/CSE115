// 1. C program to print all perfect numbers between 1 to n

#include <stdio.h>

int PerfectNumbersBetween(int n)
{
    int count = 0;
    for (int j = 1; j <= n; j++)
    {
        int sum = 0;
        for (int i = 1; i <= j; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum == j)
        {
            count++;
        }
    }

    return count;
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("All perfect numbers between 1 to %d: %d", n, PerfectNumbersBetween(n));
}