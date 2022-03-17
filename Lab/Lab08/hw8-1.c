// Print hollow rombus star pattern of N lines. N = 5.

#include <stdio.h>

void PrintHollowRombusStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = n - 1; k != i; k--)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            if ((i == 0 || i == (n - 1)) || (j == 0 || j == (n - 1)))
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

    printf("Number of Lines: ");
    scanf("%d", &n);

    PrintHollowRombusStarPattern(n);
}