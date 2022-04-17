/* 1. Matrix multiplication using 2D array
 */

#include <stdio.h>

void main()
{
    int r1, *r, c1, *cf, a[*r][*cf];
    printf("Enter the number of row and column for matrix1: ");
    scanf("%d %d", &r1, &c1);

    int r2, c2, b[r2][c2];
    printf("Enter the number of row and column for matrix2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Invalid dimensions.");
    }

    printf("Enter matrix1 elements\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix2 elements\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    int c[r2][c1];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[i][k];
            }
        }
    }

    printf("Multiplication of matrix1 and matrix2");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d][%d]: %d", c[i][j]);
        }
    }
}