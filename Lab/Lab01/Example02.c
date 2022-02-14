/* Example 2: Write a program that prompts the user to 
insert an integer value, a decimal number and his name 
and print the inserted value as output. */

#include <stdio.h>

void main()
{
    int num;
    float deci;
    char name[20];

    printf("Enter a integer number: ");
    scanf("%d", &num);
    printf("The number is %d.\n", num);

    printf("\nEnter a decimal number: ");
    scanf("%f", &deci);
    printf("The number is %.2f.\n", deci);

    getchar();

    printf("\nEnter your name: ");
    gets(name);
    printf("Your name is %s.", name);
}