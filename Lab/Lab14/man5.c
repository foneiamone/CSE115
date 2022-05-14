/* 5. Writing multiple entries to files */

#include <stdio.h>

void main()
{
    FILE *f = fopen("fileIO.txt", "w");
    fprintf(f, "Bob\n30\n20000\n");
    fprintf(f, "Amanda\n20\n10000\n");
    fclose(f);
}