/* Write a C program that reads the semester no. of a student and print a comment about
student based on the table below. Use switch-case. */

#include <stdio.h>

void main()
{
    int n;

    printf("Enter semester no. ");
    scanf("%d", &n);

    switch (n)
    {
    case 0:
        printf("Invalid Semester");
        break;

    case 1:
    case 2:
    case 3:
        printf("Freshman");
        break;

    case 4:
    case 5:
    case 6:
        printf("Sophomore");
        break;

    case 7:
    case 8:
    case 9:
        printf("Junior");
        break;

    case 10:
    case 11:
    case 12:
        printf("Senior");
        break;

    default:
        printf("You must graduate soon");
        break;
    }
}