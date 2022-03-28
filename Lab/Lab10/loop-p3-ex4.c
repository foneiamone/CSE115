// 4. Write a C program to compute and print the sum of first n perfect numbers.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0, total = 0;
    for (int i = 1; count < n; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum == i)
        {
            printf("%d ", i);
            total += i;
            count += 1;
        }
    }
    printf("Sum of first %d perfect numbers: %d", n, total);
}