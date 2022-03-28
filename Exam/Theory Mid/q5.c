#include <stdio.h>

void main()
{
    int a[10];
    double sum = 0;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Average: %.2lf\n", sum / 10);
}