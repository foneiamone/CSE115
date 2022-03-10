/* 6. Write a C program to compute the sum of digits of an input number and check if this sum is a prime or not.
Sample Input/Output:
Enter any integer: 2821
Sum of its digits = 13. It is a prime number. */

#include <stdio.h>
#include <stdbool.h>

int sum(int n)
{
    int total = 0, r;

    for (int i = 0; n != 0; i++)
    {
        r = n % 10;
        total += r;
        n /= 10;
    }

    return total;
}

bool isPrime(int n)
{
    int prime = 1;

    if (n == 0 || n == 1)
    {
        prime--;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime--;
            break;
        }
    }

    if (prime == 1)
    {
        return true;
    }

    else
    {
        return false;
    }
}

void main()
{
    int n;

    printf("Enter any integer: ");
    scanf("%d", &n);

    printf("Sum of its digits: %d.", sum(n));

    if (isPrime(sum(n)))
    {
        printf(" It is a prime number.");
    }

    else
    {
        printf(" It is not a prime number.");
    }
}