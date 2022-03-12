/* 2. Write a C program that reads the semester no. of a student and print a comment about
student based on the table below. Use if - else if - else. */

#include <stdio.h>

void main()
{
    int n;

    printf("Enter semester no. ");
    scanf("%d", &n);

    if (1 <= n && n <= 3)
    {
        printf("Freshman");
    }

    else if (4 <= n && n <= 6)
    {
        printf("Sophomore");
    }

    else if (7 <= n && n <= 9)
    {
        printf("Junior");
    }

    else if (10 <= n && n <= 12)
    {
        printf("Senior");
    }

    else if (n > 12)
    {
        printf("You must graduate soon");
    }

    else
    {
        printf("Invalid Semester");
    }
}
