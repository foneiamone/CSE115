/* 1. Write a C program that takes input the first letter of any of the following fruits name–
Mango ---- Tk.500/kg,
Apple   ---- Tk.250/kg,
Banana ----Tk. 130/kg,
Cherry -----Tk. 270/kg, and suggests the price of the fruit as output, using switch case. */

#include <stdio.h>

void main()
{
    char a;

    printf("Enter first letter of any of the fruits name: ");
    scanf("%c", &a);

    switch (a)
    {
    case 'M':
        printf("Tk.500/kg");
        break;

    case 'A':
        printf("Tk.250/kg");
        break;

    case 'B':
        printf("Tk. 130/kg");
        break;

    case 'C':
        printf("Tk. 270/kg,");
        break;

    default:
        printf("Invalid input!!");
        break;
    }
}