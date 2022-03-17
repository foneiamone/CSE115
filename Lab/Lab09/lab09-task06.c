// Rombus pattern for N lines. N = 4.

#include <stdio.h>

void PrintRombusPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = n - 1; k != i; k--)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void main()
{
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    PrintRombusPattern(n);
}