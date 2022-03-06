/* 5. Write a C program that reads the radius r of a circle and 
the side a of a square from user and then checks if that square 
can be placed inside that circle or not. Hint: Use Pythagorean 
theorem. */

#include <stdio.h>
#include <math.h>

void main()
{
    double radius, side;

    printf("Enter radius of a circle\nand side of a squire: ");
    scanf("%lf %lf", &radius, &side);

    if (pow(side, 2) <= 2 * pow(radius, 2))
    {
        printf("Squire can be placed inside the circle.");
    }

    else
    {
        printf("Squire can not be placed inside the circle.");
    }
}