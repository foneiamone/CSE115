// 2. C program to find maximum among three numbers take the numbers from console.

#include <stdio.h>

void main()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
    {
        printf("%d is maximum.", x);
    }

    else if (y > x && y > z)
    {
        printf("%d is maximum.", y);
    }

    else
    {
        printf("%d is maximum.", z);
    }
}