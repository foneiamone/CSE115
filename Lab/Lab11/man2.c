/* 2. C program to determine if a given number is odd/even using function
Enter a number: 3
3 is odd. */

#include <stdio.h>

void chkEvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is even.", n);
    }

    else
    {
        printf("%d is odd.", n);
    }
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    chkEvenOrOdd(n);
}