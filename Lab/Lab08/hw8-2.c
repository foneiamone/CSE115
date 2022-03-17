// Print hollow parallelogram pattern of size m*n. m = 10, n = 5.

#include <stdio.h>

void PrintHollowParallelogramPattern(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = n - 1; k != i; k--)
        {
            printf(" ");
        }

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
    int n, m;

    printf("Enter the value of m, n: ");
    scanf("%d %d", &m, &n);

    PrintHollowParallelogramPattern(n, m);
}