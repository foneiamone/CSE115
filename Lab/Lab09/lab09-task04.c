// Print a hollow rectangle pattern of size m*n. m = 10, n = 5.

#include <stdio.h>

void PrintHollowRectanglePattern(int m, int n)
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
    int m, n;

    printf("Enter the value of m, n: ");
    scanf("%d %d", &m, &n);

    PrintHollowRectanglePattern(m, n);
}