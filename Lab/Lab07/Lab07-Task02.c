// 2. Write a C program to read an integer from user and count the total number of digits in it.

#include <stdio.h>

int countDigit(int);

void main()
{
    long int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Total %d digits in %d.", countDigit(n), n);
}

int countDigit(int n)
{
    int count = 0;

    for (int i = 0; n != 0; i++)
    {
        n /= 10;

        count++;
    }

    return count;
}