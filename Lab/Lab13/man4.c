/* 4. C Program to read an array from user and an index and then delete the element in that index of array
Enter array size: 8
Enter array elements: 1 2 3 4 5 6 7 8
Enter index to delete: 5
Before deleting: 1 2 3 4 5 6 7 8
After deleting: 1 2 3 4 6 7 8 */

#include <stdio.h>

void deleteArrayElement(int *arr[], int n, int iDel)
{
    for (int i = iDel - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int *arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int iDel;
    printf("Enter index to delete: ");
    scanf("%d", &iDel);

    printf("Before deleting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    deleteArrayElement(arr, n, iDel);

    printf("\nAfter deleting: ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}