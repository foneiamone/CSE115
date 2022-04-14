/* Write a program reads two arrays from user and then output their product.
Enter size of arrays: 4
Enter 1st array elements: 1 2 3 4
Enter 2nd array elements: 1 2 3 4
Product of two arrays: 1 4 9 16 */

#include <stdio.h>

void printArrayProduct(int a[], int b[], int n)
{
    printf("Product of two arrays: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i] * b[i]);
    }
}

void main()
{
    int n;
    printf("Enter size of arrays: ");
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

    printArrayProduct(a, b, n);
}