/* 1. Write C Program to calculate the tax from salary using the following table. The formula for
tax is: tax = (base tax) + (percentage of excess)*(salary – min. salary in the salary range). For
e.g., if the salary is 32000, then tax=5400+(22/100)*(32000-30000) = 5400+440=5840. */

#include <stdio.h>

double tax(double);

void main()
{
    double salary;

    printf("Enter salary: ");
    scanf("%lf", &salary);

    printf("Tax: %.2lf", tax(salary));
}

double tax(double salary)
{
    double tax = 0.0;

    if (0 <= salary && salary < 15000)
    {
        tax = (15.0 / 100) * salary;
    }

    else if (15000 <= salary && salary < 30000)
    {
        tax = 2250 + ((18.0 / 100) * (salary - 15000));
    }

    else if (30000 <= salary && salary < 50000)
    {
        tax = 5400 + ((22.0 / 100) * (salary - 30000));
    }

    else if (50000 <= salary && salary < 80000)
    {
        tax = 11000 + ((27.0 / 100) * (salary - 50000));
    }

    else if (80000 <= salary && salary <= 150000)
    {
        tax = 21600 + ((33.0 / 100) * (salary - 80000));
    }

    return tax;
}