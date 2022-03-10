/* 5. Write a C program to read any integer from user and compute the reverse of given number. 
Also output whether the reverse number is prime or not. 
Sample Input/Output:
Enter any integer: 4521
Reverse number is: 1254. It is not a prime number. */

#include <stdio.h>

void isPrime(int n)
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
        printf("It is a prime number.");
    }

    else
    {
        printf("It is not a prime number.");
    }
}

int revNumber(int n)
{
    int r, sum = 0;

    for (int i = 0; n != 0; i++)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n /= 10;
    }

    return sum;
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int m = revNumber(n);

    printf("Reverse number is: %d. ", m);

    isPrime(m);
}