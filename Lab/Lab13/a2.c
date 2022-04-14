/* Write a program that deletes all the elements in an array which match a search key.
Enter array size: 10
Enter array elements: 1 2 3 4 5 5 6 2 5 3
Enter search key: 5
After deleting: 1 2 3 4 6 2 3 */

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

    int s;
    printf("Enter search key: ");
    scanf("%d", &s);

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s == a[i])
        {
            c++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int p = 0;
        while (p < n && s != a[p])
        {
            p++;
        }

        for (int j = p; j < n; j++)
        {
            a[j] = a[j + 1];
        }
    }
    n -= c;

    printf("After deleting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}