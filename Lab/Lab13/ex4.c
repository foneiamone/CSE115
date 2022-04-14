/* 4. Write a program that prints ALL indexes in which the smallest value of array is present.
Enter array size: 10
Enter array elements: 1 2 3 4 5 5 6 2 5 3       
1 exist in index: 0 */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
            }
        }
    }

    printf("%d exist in index: ", min);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            printf("%d ", i);
        }
    }
}