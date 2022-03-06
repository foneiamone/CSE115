/* 4. Read a floating point number from user and check if it has 
any fractional part (e.g. 4.5, 6.9,...) or not (e.g. 4, 5, ...). 
If it has a fractional part then print “Not an integer”, otherwise print “integer”. */

#include <stdio.h>

void main()
{
    float num;

    printf("Enter a floating point number: ");
    scanf("%f", &num);

    if (num == (int)num)
    {
        printf("integer");
    }

    else
    {
        printf("Not an integer");
    }
}