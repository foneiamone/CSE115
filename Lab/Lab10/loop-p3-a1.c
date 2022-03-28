/* 1. Write a C program to print all palindrome numbers between m and n (m,  n are inputs).
For e.g. 121 is a palindrome since the reverse of 121 = 121; but 152 is not a palindrome. */

#include <stdio.h>

void main()
{
    int m, n;
    printf("Enter two numbers(m, n): ");
    scanf("%d %d", &m, &n);

    printf("All palindrome numbers between %d and %d: ", m, n);
    for (int i = m; i <= n; i++)
    {
        int temp = i, rem, rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }

        if (rev == i)
        {
            printf("%d ", i);
        }
    }
}