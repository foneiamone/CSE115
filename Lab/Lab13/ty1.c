/* Write a program that prints the no. of odd & no. of even numbers in an array
Enter array size: 10
Enter array elements: 1 2 3 4 5 6 7 8 9 10
No. of Odd: 5
No. of Even: 5 */

#include <stdio.h>

int countOdd(int a[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            c++;
        }
    }
    return c;
}

int countEven(int a[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            c++;
        }
    }
    return c;
}

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

    printf("No. of Odd: %d", countOdd(a, n));
    printf("\nNo. of Even: %d", countEven(a, n));
}