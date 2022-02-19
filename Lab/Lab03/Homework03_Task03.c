/* 3. Find the volume of a

        (a) cube - ~ V = a^3* ~ (get length of a side from user)

        (b) cylinder - ~ V = PI*r^2*h ~ (get height and diameter from user) */

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    double cubeLength;

    printf("Enter cube's length of a side: ");
    scanf("%lf", &cubeLength);

    printf("Cube's volume: %.2f", pow(cubeLength, 3));

    double height, diameter;

    printf("\n\nEnter cylinder's height and diameter: ");
    scanf("%lf %lf", &height, &diameter);

    printf("Cylinder's volume: %.2lf", M_PI * pow((diameter / 2), 2) * height);

    return 0;
}