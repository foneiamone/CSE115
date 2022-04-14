/* 1. Write a program that deletes the first element in an array which matches a search key.
Enter array size: 10
Enter array elementes: 1 2 3 4 5 5 6 2 5 3
Enter search key: 5
After deleting: 1 2 3 4 5 6 2 5 3 */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elementes: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int s;
    printf("Enter search key: ");
    scanf("%d", &s);

    int p = 0;
    while (p < n && s != a[p])
    {
        p++;
    }
    n--;

    for (int i = p; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    printf("After deleting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}