// 6. Write a program to compute the following series using while loop: 4+11+18++....+n.

#include <stdio.h>

void main()
{
    int n, i = 4, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i += 7;
    }

    printf("Sum: %d", sum);
}