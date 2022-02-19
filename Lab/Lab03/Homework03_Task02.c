/* 2. Solve the equation: ax2+bx+c=0 and print the solutions.
Read a,b,c from user.

Hint: compute the values of (-b+sqrt(b2-4ac))/2a and (-b-sqrt(b2-4ac))/2a;
here sqrt is a C function that computes the squared root of a number. */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    printf("Enter 3 coefficients: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = pow(b, 2) - (4 * a * c);

    double root, root1;

    if (discriminant > 0)
    {
        root = (-b + sqrt(discriminant)) / (2 * a);
        root1 = (-b - sqrt(discriminant)) / (2 * a);

        printf("\nroot1 = %.2lf\nroot2 = %.2lf", root, root1);
    }

    else if (discriminant == 0)
    {
        root = -b / (2 * a);

        printf("\nroot = %.2lf", root);
    }

    else
    {
        double real = -b / (2 * a);
        double imaginary = sqrt(-discriminant) / (2 * a);

        printf("\nroot1 = %.2lf+%.2lfi\nroot2 = %.2f-%.2fi", real, imaginary, real, imaginary);
    }

    return 0;
}