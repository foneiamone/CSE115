/* 2. Writing user inputs to a text file */

#include <stdio.h>
#include <string.h>

void writeFile()
{
    FILE *f = fopen("fileIO.txt", "w");

    if (f == NULL)
    {
        printf("Error!");
        return;
    }

    char txt[50];
    printf("Enter text to write to file(press enter to stop & text length <=50): ");
    while (1)
    {
        gets(txt);
        if (strcmp(txt, "") == 0)
        {
            break;
        }
        fprintf(f, txt);
    }

    fclose(f);
}

void main()
{
    writeFile();
}