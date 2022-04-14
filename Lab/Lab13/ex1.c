/* 1. Write a program that searches for a given value (called a search key) in an array and prints the first
and last index in which that value appears. 
Enter array size: 7
Enter array elements: 1 2 3 3 3 5 6
Enter search key: 3
First index: 2
Last index: 4 */

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

    int c = 0, f, l;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == s && c == 0)
        {
            c++;
            f = i;
        }

        else if (a[i] == s)
        {
            l = i;
        }
    }

    printf("First index: %d", f);
    printf("\nLast index: %d", l);
}