/* Task 02: Write a C program that converts an uppercase letter to lowercase.

Sample input:

Enter a character: A

Sample output:

Uppercase: a *A* */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("Lowercase: %c", tolower(c));

    return 0;
}