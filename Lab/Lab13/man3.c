/* 3. C Program to read two arrays from user, add them, and then output their sum 
Enter size of the arrays: 3
Enter 1st array elements: 1 2 3                                   n
Enter 2nd array elements: 2 3 4
a(1) + b(2) = c(3)
a(2) + b(3) = c(5)
a(3) + b(4) = c(7) */

#include <stdio.h>

void addTwoArrayAndPrint(int a[], int b[], int n)
{
    int c[n];
    for (int i = 0; i < n; i++)
    {
        printf("a(%d) + b(%d) = c(%d)\n", a[i], b[i], c[i] = a[i] + b[i]);
    }
}

void main()
{
    int n;
    printf("Enter size of the arrays: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter 1st array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[n];
    printf("Enter 2nd array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    addTwoArrayAndPrint(a, b, n);
}