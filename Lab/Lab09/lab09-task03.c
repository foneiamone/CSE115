// Print rectangle pattern of size m*n. m = 10, n = 5.

#include <stdio.h>

void PrintRectanglePattern(int n, int m)
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
    int m, n;

    printf("Enter the value of m, n: ");
    scanf("%d %d", &m, &n);

    PrintRectanglePattern(n, m);
}