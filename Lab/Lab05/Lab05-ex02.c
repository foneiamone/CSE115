// Find the maximum between two numbers using switch case.

#include <stdio.h>

void main()
{
    int n, m;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);

    switch (n > m)
    {
    case 0:
        printf("%d is maximum.", m);
        break;

    case 1:
        printf("%d is maximum.", n);
        break;

    default:
        printf("INVALID INPUT!!");
        break;
    }
}