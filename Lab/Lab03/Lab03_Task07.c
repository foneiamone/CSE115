/* Task 07: Write a C Program to find surface area of a sphere, take radius as user input. PI = 3.1416, Surface area = 4*PI*r^2.

Sample input:

Please Enter the radius of a Sphere: 5

Sample output:

The Surface area of a Sphere = 314.16 */

#include <stdio.h>
#define PI 3.1416

int main()
{
    double r;

    printf("Please Enter the radius of a Sphere: ");
    scanf("%lf", &r);

    printf("The Surface area of a Sphere = %.2lf", 4* PI * (r*r));

    return 0;
}