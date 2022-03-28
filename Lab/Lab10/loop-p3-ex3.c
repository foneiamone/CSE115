// 3.	Write a C program to print the first n perfect numbers where n is an input.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;
    printf("First %d perfect numbers: ", n);
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
            count += 1;
        }
    }
}