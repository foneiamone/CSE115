// 3. C program to check whether an input is an odd number or an even number using switch-case.

#include <stdio.h>

void main()

{
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    int number = input % 2 == 0;

    switch (number)
    {
    case 1:
        printf("Input is an even number.");
        break;

    default:
        printf("Input is an odd number.");
        break;
    }
}