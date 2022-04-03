/* 3. C program to determine if a given number is prime using function
Enter a number: 1
1 is not a prime number. */

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("%d is a prime number.", n);
    }

    else
    {
        printf("%d is not a prime number.", n);
    }
}