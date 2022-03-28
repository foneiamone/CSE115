// 2. Write a C program to compute and print the sum of palindrome numbers between m and n.

#include <stdio.h>

void main()
{
    int m, n;
    printf("Enter two numbers(m, n): ");
    scanf("%d %d", &m, &n);

    int sum = 0;
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
            sum += i;
        }
    }
    printf("Sum of all palindrome numbers between %d and %d: %d", m, n, sum);
}