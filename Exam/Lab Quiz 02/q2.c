/* 2. Write a program that prints the no. of prime numbers in an array, use function for check the number is prime or not. Declare an array of size 10 and get the value of array from user.
Hint: Create a function which will take a integer number n as parameter and return 0 if the number is not prime or 1 if the number is prime, In main function for count number of prime numbers,
call the function to check whether a number is prime or not.
Enter array elements: 2 3 5 7 11 13 17 19 23 29
Prime number count: 10
Enter array elements: 1 2 3 4 5 6 7 8 9 10
Prime number count: 4 */

#include <stdio.h>

int isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int a[10];
    printf("Enter array elements: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    int c = 0;
    for (int i = 0; i < 10; i++)
    {
        if (isPrime(a[i]) == 1)
        {
            c++;
        }
    }

    printf("Prime number count: %d", c);
}