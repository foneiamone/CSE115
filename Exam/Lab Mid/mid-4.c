/* get P, r, n, t from user as input.

Test Case:

Input:

Enter initial principal value P: 10000

Enter interest rate r: 0.10

Enter number of times interest applied per time period n: 12

Enter number of time periods elapsed t: 3

Output:

Final amount A: 13481.818424 */

#include <stdio.h>
#include <math.h>

void main()
{
    double P, r, n, t;
    printf("Enter initial principal value P: ");
    scanf("%lf", &P);

    printf("Enter interest rate r: ");
    scanf("%lf", &r);

    printf("Enter number of times interest applied per time period n: ");
    scanf("%lf", &n);

    printf("Enter number of time periods elapsed t: ");
    scanf("%lf", &t);

    double A = P * (pow(1 + (r / n), n * t));

    printf("Final amount A: %lf", A);
}
