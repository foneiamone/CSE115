/* 3. Reading from a text file */

#include <stdio.h>

void main()
{
    FILE *f = fopen("fileIO.txt", "r");

    if (f == NULL)
    {
        printf("ERROR");
        return;
    }

    char c;
    while ((c = getc(f)) != EOF)
    {
        putchar(c);
    }

    fclose(f);
}