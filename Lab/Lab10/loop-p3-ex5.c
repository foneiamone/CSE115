// 5. Write a C program to print the n-th perfect number where n is an input.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 1;
    printf("%d-th perfect number: ", n);
    for (int i = 1; count <= n; i++)
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
            if (count == n)
            {
                printf("%d ", i);
            }
            count += 1;
        }
    }
}