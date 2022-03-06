// 1. C program to find maximum between two numbers take the numbers from console.

#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int z = x > y;

    switch (z)
    {
    case 1:
        printf("%d is maximum.", x);
        break;

    case 0:
        printf("%d is maximum.", y);
        break;

    default:
        printf("Invalid input!!");
        break;
    }
}