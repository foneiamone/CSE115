/* 

6, 2, 8, 7, 3, */

#include <stdio.h>

void swapItems(int *a, int i, int j)
{
    int t = *(a + j);
    *(a + j) = *(a + i);
    *(a + i) = t;
}

void main()
{
    int a[] = {6, 7, 8, 2, 3};

    swapItems(a, 1, 3);

    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", a[i]);
    }
}