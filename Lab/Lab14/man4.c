/* 4. Appending to a text file */

#include <stdio.h>

void main()
{
    FILE *f = fopen("fileIO.txt", "a");
    fprintf(f, "\nadding something");
    fclose(f);
}