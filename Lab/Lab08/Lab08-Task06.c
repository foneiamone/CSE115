/* 6. Write a C program to find Greatest Common Divisor (GCD ) of two given integers. GCD of two integers is the highest number that totally divides those two integers. E.g. GCD of 15 and 25 is 5. */

#include <stdio.h>

int gcd(int a, int b)
{
    int result;

    for (int i = 1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
        {
            result = i;
        }
    }

    return result;
}

void main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("GCD: %d", gcd(x, y));
}