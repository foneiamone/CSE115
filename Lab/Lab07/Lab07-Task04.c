/* 4. Write a C program to read an integer and compute the sum of digits in it.
Sample Input/Output:
Enter any integer: 452
Sum of digits in 452: 11 */

#include <stdio.h>

int sumDigit(int n)
{
    int sum = 0;

    for (int i = 0; n != 0; i++)
    {
        int digit = n % 10;
        n /= 10;
        sum += digit;
    }

    return sum;
}

void main()
{
    int n;

    printf("Enter any integer: ");
    scanf("%d", &n);

    printf("Sum of digits in %d: %d", n, sumDigit(n));
}