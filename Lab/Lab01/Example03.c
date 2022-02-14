// Example 3: Data types and their size in C.

#include <stdio.h>

void main()
{
    int i;
    float f;
    double d;
    char ch;
    long int longInt;
    signed int sinInt;

    printf("Size of int: %d bytes.\nSize of float: %d bytes.\nSize of double: %d bytes.\nSize of char: %d byte.\nSize of Long int: %d bytes.\nSize of Signed int: %d bytes.", sizeof(i), sizeof(f), sizeof(d), sizeof(char), sizeof(longInt), sizeof(sinInt));
}