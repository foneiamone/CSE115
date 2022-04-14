/* 3. Write a program that prints ALL indexes in which the largest value of array is present.
Enter array size: 10
Enter array elements: 1 2 3 4 5 5 6 2 5 3
6 exist in index: 6 */

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

    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (max < a[j])
            {
                max = a[j];
            }
        }
    }

    printf("%d exist in index: ", max);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            printf("%d ", i);
        }
    }
}