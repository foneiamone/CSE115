// 5. Write a C program to find all the factors of a number.

#include <stdio.h>

void main()
{
    int n;

    printf("Enter any integer: ");
    scanf("%d", &n);

    printf("All the factors of %d: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d", i);

            if (i != n)
            {
                printf(", ");
            }
        }
    }

    printf(".");
}