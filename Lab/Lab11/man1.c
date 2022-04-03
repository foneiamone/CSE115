/* 1. C program illustrating the difference between void and non-void function:
Enter a number: 4
Cube: 64.00
Square: 16.00 */

#include <stdio.h>

void printCube(float);
float computeSquare(float);

void main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);

    printCube(n);
    printf("\nSquare: %.2f", computeSquare(n));
}

void printCube(float n)
{
    printf("Cube: %.2f", n * n * n);
}

float computeSquare(float n)
{
    return n * n;
}