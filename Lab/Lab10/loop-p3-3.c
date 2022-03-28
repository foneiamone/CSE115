// 3. Write a program that prints first n prime numbers (n is input). E.g. for n = 5 it should print: 2,3,5,7,11.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0, i = 2;
    do
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

        if (isPrime)
        {
            printf("%d ", i);
            count++;
        }

        i++;
    } while (count < n);
}