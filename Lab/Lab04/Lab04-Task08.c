/* 8. Check if the roots of the equation: ax2+bx+c=0 are 
real or not. If they are real, then print them; otherwise 
print “No real root exist.” Read a,b,c from user.

*** if b^2-4ac<0 then root is not real otherwise real*** */

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("Enter a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

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
        printf("No real root exist.”");
    }

    return 0;
}