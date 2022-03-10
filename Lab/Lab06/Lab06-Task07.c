// 7. Write a program to compute the following series using while loop: 2^3+5^3+8^3+...+n^3.

#include <stdio.h>
#include <math.h>

void main()
{
    int n, sum = 0, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += pow(i, 3);
        i += 3;
    }

    printf("Sum: %d", sum);
}