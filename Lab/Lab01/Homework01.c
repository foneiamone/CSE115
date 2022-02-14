/* Write a program (use printf() function and also look at escape sequence in 
c) which will output in console like the image provided below. You don't have to 
take any user input, just print these on the console.*/

#include <stdio.h>

int main()
{
    printf("\t\"Welcome!!!\"\n");
    printf(" ------------------------");
    printf("\n|\tOption 1: 'a'\t |\n");
    printf("|\tOption 2: 'b'\t |\n");
    printf("|\tOption 3: 'c'\t |\n");
    printf("|\tOption 4: 'd'\t |\n");
    printf(" ------------------------");
    printf("\nYour choice ? \\a,b,c,d\\:");

    return 0;
}