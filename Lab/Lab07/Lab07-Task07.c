// 7. Write a C program that can be used to find whether a number is a prime number or not.

#include <stdio.h>

void main()
{
    int n, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number.", n);
            prime--;
            break;
        }
    }

    if (prime == 1)
    {
        printf("%d is a prime number.", n);
    }
}