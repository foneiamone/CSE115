/* Task 01: Write a program that reads in the radius (float) of a circle and prints the circle’s 
diameter, circumference and area.

***PI = 3.1416, diameter= 2*radius, circumference= 2*PI*radius, area= PI * radius * radius.*** */

#include <stdio.h>

void main()
{
    double radius, diameter, circumference, area, pi = 3.1416;

    printf("Enter radius of a circle: ");
    scanf("%lf", &radius);

    printf("\n");
    
    diameter = 2 * radius;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("The diameter is %.2lf.\nThe circumference is %.2lf.\nThe area is %.2lf.", diameter, circumference, area);
}