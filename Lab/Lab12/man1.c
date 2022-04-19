/* 1. Matrix multiplication using 2D array
Number of rows & columns in A: 3 1
Number of rows and columns in B: 1 3
Elements of matrix A:
A[0][0}: 4
A[1][0}: 5
A[2][0}: 6
Elements of matrix B:
B[0][0}: 1 2 3
B[0][1}: B[0][2}: Multiplication of matrixA & matrixB:
         4         8        12
         5        10        15
         6        12        18 */

#include <stdio.h>

void main()
{
    int rowA, columnA;
    printf("Number of rows & columns in A: ");
    scanf("%d %d", &rowA, &columnA);

    int rowB, columnB;
    printf("Number of rows and columns in B: ");
    scanf("%d %d", &rowB, &columnB);

    if (columnA != rowB)
    {
        printf("Invalid dimensions.");
    }

    int a[50][50], i, j;
    printf("Elements of matrix A:\n");
    for (i = 0; i < rowA; i++)
    {
        for (j = 0; j < columnA; j++)
        {
            printf("A[%d][%d}: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int b[50][50];
    printf("Elements of matrix B:\n");
    for (i = 0; i < rowB; i++)
    {
        for (j = 0; j < columnB; j++)
        {
            printf("B[%d][%d}: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    int c[50][50];
    for (i = 0; i < rowA; i++)
    {
        c[i][j] = 0;
        for (j = 0; j < columnB; j++)
        {
            for (int k = 0; k < columnA; k++)
            {
                c[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }

    printf("Multiplication of matrixA & matrixB:\n");
    for (i = 0; i < rowA; i++)
    {
        for (j = 0; j < columnB; j++)
        {
            printf("%10d", c[i][j]);
        }
        printf("\n");
    }
}