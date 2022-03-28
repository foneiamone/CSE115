// 3. Write a C program to print the first n palindrome numbers where n is an input.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;
    printf("First %d palindrome numbers: ", n);
    for (int i = 0; count != n; i++)
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
            count += 1;
        }
    }
}