/* 4. Write a C program to read a number from user and check whether given number is a palindrome or not.
A number is a palindrome if the number is the same as its reverse for e.g. 23432 is a palindrome but 2345 is not. */

#include <stdio.h>
#include <stdbool.h>

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

bool isPalindrome(int n)
{
    if (n == revNumber(n))
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

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
    {
        printf("%d is a palindrome.", n);
    }

    else
    {
        printf("%d is not a palindrome.", n);
    }
}