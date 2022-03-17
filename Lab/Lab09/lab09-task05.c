// Print hollow right angled triangle of height n. n = 7. 

#include <stdio.h>

void PrintHollowRightTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
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

    printf("Enter the value of n: ");
    scanf("%d", &n);

    PrintHollowRightTriangle(n);
}