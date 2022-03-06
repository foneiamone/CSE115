/* 1. Write a C program to input sides of a triangle and check whether triangle is 
valid or not (Hint: if sum of any two sides of a triangle is greater than the third 
side then the triangle is valid)
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Triangle is valid.");
    }

    else
    {
        printf("Triangle is not valid.");
    }
}