/* 3. Write a C program to print the 2nd largest & 2nd smallest elements of an array.
Enter array size: 10
Enter array elements: 1 2 3 4 5 6 7 8 9 10
2nd largest element: 9
2nd smallest element: 2 */

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

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; ++j)
        {
            if (a[i] < a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("2nd largest element: %d", a[1]);
    printf("\n2nd smallest element: %d", a[n - 2]);
}