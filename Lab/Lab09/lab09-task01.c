// Squire pattern for N lines. E.g. for N = 4

#include <stdio.h>

void PrintSquirePattern(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void main()
{
    int n;

    printf("Number of Lines: ");
    scanf("%d", &n);

    PrintSquirePattern(n, n);
}