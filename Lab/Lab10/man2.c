// 2. C program to print all prime numbers between 1 and n.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 to %d: ", n);
    for (int i = 2; i <= n; i++)
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

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }
}