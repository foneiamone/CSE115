/* 1. Write a C program to read an integer from user and
output its last and first digit. Hint: Like practice 2 & 3,
reduce the number by dividing it (by 10) again and again (in a loop) until you reach the first digit. */

#include <stdio.h>

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

void printFirstLastDigit(int n)
{
    int first, digit = n;

    for (int i = 1; i < countDigit(digit); i++)
    {
        n /= 10;
        first = n % 10;
    }

    printf("First and last digit of %d is %d and %d.", digit, first, digit % 10);
}

void main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printFirstLastDigit(n);
}