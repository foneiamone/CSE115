/* 1. Write a C program using 3 functions to compute diameter, circumference and area of a circle whose
radius is given by the user as the input.
Enter radius: 10
Diameter: 20.000
Circumference: 62.832
Area: 314.159 */

#include <stdio.h>
#include <math.h>

double Diameter(double r)
{
    return 2 * r;
}

double Circumference(double r)
{
    return Diameter(r) * M_PI;
}

double Area(double r)
{
    return M_PI * pow(r, 2);
}

void main()
{
    double r;
    printf("Enter radius: ");
    scanf("%lf", &r);

    printf("Diameter: %.3lf\n", Diameter(r));
    printf("Circumference: %.3lf\n", Circumference(r));
    printf("Area: %.3lf\n", Area(r));
}