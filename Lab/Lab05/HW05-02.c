// 2. Find the maximum between two numbers using switch case.

#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int c = a > b;

    switch (c)
    {
    case 1:
        printf("%d is maximum.", a);
        break;

    default:
        printf("%d is maximum.", b);
        break;
    }
}