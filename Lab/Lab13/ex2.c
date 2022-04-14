/* 2. Write a program that prints all the indexes in which a search key appears. 
Enter array size: 7
Enter array elements: 1 2 3 3 3 5 6
Enter search key: 3
Appears in index: 2 3 4  */

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

    printf("Appears in index: ", s);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            printf("%d ", i);
        }
    }
}