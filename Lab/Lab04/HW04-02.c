/* 2. Write a C program to input all angles of a triangle and check 
whether triangle is valid or not. (Hint: sum of all angles of any triangle 
is 180 degrees) */

#include <stdio.h>

int main()
{
    int angA, angB, angC;

    printf("Enter angles of a Triangle: ");
    scanf("%i %i %i", &angA, &angB, &angC);

    if (angA + angB + angC == 180 && angA > 0 && angB > 0 && angC > 0)
    {
        printf("Triangle is valid.");
    }

    else
    {
        printf("Triangle is not vaid.");
    }

    return 0;
}