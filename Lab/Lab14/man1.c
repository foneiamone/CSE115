/* 1. Opening & closing a text file
File opened. */

#include <stdio.h>

void fileOpen()
{
    FILE *f = fopen("fileIO.txt", "r");

    if (f != NULL)
    {
        printf("File opened.");
        fclose(f);
        return;
    }

    printf("Error!");
}

void main()
{
    fileOpen();
}