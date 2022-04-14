/* 4. Write a program that reads the size and elements of an float array from user and then computes the
average of the numbers in it and prints it. Then it should compute number of elements which are
greater than average and prints those elements. Sample input/output:
Enter array size: 5
Enter elements: 12  13  16  15  14
Average = 14.000000, The elements greater than average are: 16, 15 */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    float a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    float avg = sum / n;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > avg)
        {
            c++;
        }
    }
    c--;

    printf("Average = %f, The elements greater than average are: ", avg);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > avg)
        {
            printf("%.0f", a[i]);

            if (c > 0)
            {
                printf(", ");
                c--;
            }
        }
    }
}