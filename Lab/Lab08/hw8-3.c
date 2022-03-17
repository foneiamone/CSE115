// Print a right justified hollow right angled triangle of height n. n = 7.

#include <stdio.h>

void PrintRightJustifiedHollowRightAngledTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int k = n - 1; k != i; k--)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            if (i == j || j == 0 || i == n - 1)
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

    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    PrintRightJustifiedHollowRightAngledTriangle(n);
}