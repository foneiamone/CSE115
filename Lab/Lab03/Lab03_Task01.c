/* Task 01: Write a C Program to compute squared root and cube of an input number.

Sample input:

Enter a number: 125

Sample output:

Squared root: 5.00 *11.18*

Cube: 1953125.00 */

#include <stdio.h>
#include <math.h>

int main()
{
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Squared root: %.2lf\nCube: %.2lf", sqrt(num), pow(num, 3));

    return 0;
}