// Hollow squire pattern for N lines. N = 4.

#include <stdio.h>

void PrintHollowSquirePattern(int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == 0 || i == (n - 1)) || (j == 0 || j == (m - 1)))
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

void main()
{
    int n;

    printf("Enter the number of the lines: ");
    scanf("%d", &n);

    PrintHollowSquirePattern(n, n);
}