/* 1. Write a C program that takes input the first letter of any of the following fruits name–
Mango ---- Tk.500/kg,
Apple ---- Tk.250/kg,
Banana ----Tk. 130/kg,
Cherry -----Tk. 270/kg,

and suggests the price of the fruit as output, if none of them match print 'Out of stock'.
use switch case. */

#include <stdio.h>

void main()
{
    char fruit;

    printf("Enter first letter of a fruit's name: ");
    scanf("%c", &fruit);

    switch (fruit)
    {
    case 'M':
        printf("The price if mango is Tk. 500/kg.");
        break;
    case 'm':
        printf("The price if mango is Tk. 500/kg.");
        break;

    case 'A':
        printf("The price if apple is Tk. 250/kg.");
        break;
    case 'a':
        printf("The price if apple is Tk. 250/kg.");
        break;

    case 'B':
        printf("The price if banana is Tk. 130/kg.");
        break;
    case 'b':
        printf("The price if banana is Tk. 130/kg.");
        break;

    case 'C':
        printf("The price if cherry is Tk. 270/kg.");
        break;
    case 'c':
        printf("The price if cherry is Tk. 270/kg.");
        break;

    default:
        printf("Out of stock");
        break;
    }
}