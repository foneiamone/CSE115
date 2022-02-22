/* 3. Read a character from user and check if it is a valid hexadecimal digit or not. Hint: a char is a valid
hexadecimal digit if it is one of these characters: ‘0’, ‘1’, ... , ‘9’, ‘a’, ’b’, ... , ’f’, ‘A’,’B’, ... ,’F’ */

#include <stdio.h>

int main()
{
    char hex;

    printf("Enter a hexadecimal digit: ");
    scanf("%c", &hex);

    if ((hex >= '0' && hex <= '9') || (hex >= 'a' && hex <= 'f') || (hex >= 'A' && hex <= 'F'))
    {
        printf("%c is a vaild hexadecimal digit.", hex);
    }

    else
    {
        printf("%c is not a vaild hexadecimal digit.", hex);
    }

    return 0;
}