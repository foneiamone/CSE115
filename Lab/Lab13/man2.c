/* 2. C Program to find the largest value in a float type array
Enter array size: 3
Enter array elements: 1 2 3
Largest value in array: 3.00 */

#include <stdio.h>

float findLargestFloat(float arr[], int n)
{
    float max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

void main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    printf("Largest value in array: %.2f", findLargestFloat(arr, n));
}