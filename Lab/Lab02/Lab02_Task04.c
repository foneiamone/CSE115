/* Task 04: Convert Celsius to Fahrenheit unit using the following formula. 
Take the value of C as input from user and calculate the value of F.

***F= C * (9/5) + 32*** */

#include <stdio.h>

void main()
{
    float c, f;

    printf("Enter the value of C: ");
    scanf("%f", &c);

    f = (c * (9.0 / 5.0)) + 32.0;

    printf("\nThe value of F: %.2f", f);
}