/* 1. C Program that prints the odd & the even numbers in an array separately
Enter array size: 3
Enter array elements: 1 2 3
Even numbers in array: 2
Odd numbers in array: 1 3 */

#include <stdio.h>

void PrintEvenOddArray(int arr[], int n)
{
    printf("Even numbers in array: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers in array: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

void main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    PrintEvenOddArray(arr, n);
}