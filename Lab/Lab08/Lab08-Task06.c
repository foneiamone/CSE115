/* 6. Write a C program to find Greatest Common Divisor (GCD ) of two given integers. GCD of two integers is the highest number that totally divides those two integers. E.g. GCD of 15 and 25 is 5. */

#include <stdio.h>

int gcd(int n, int m)
{
    int g, mx = n;

    if (m > n)
    {
        mx = m;
    }

    for (int i = 1; i <= mx; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            g = i;
        }
    }

    return g;
}

void main()
{
    int n, m;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);

    printf("GCD: %d", gcd(n, m));
}