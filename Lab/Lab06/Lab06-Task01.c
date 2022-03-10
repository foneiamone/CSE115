// 1. Write a C program that computes the sum of the series: 3+7+11+...+n, where n is a user input.

#include <stdio.h>

void main()
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 3; i <= n; i += 4)
    {
        sum += i;
    }

    printf("the sum of the series: 3+7+11+...+n is %d.", sum);
}