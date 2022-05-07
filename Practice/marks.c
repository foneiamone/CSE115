/* consider a file Marks.txt contains some marks. Write a program in c to print marks from the Marks.txt file,and
write all the marks greater than or equal to 33 to another file Passed.txt */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *f = fopen("Marks.txt", "r");
    FILE *e = fopen("Passed.txt", "w");

    if (f == NULL)
    {
        printf("ERROR: Marks.txt");
        exit(0);
    }

    if (e == NULL)
    {
        printf("ERROR: Passed.txt");
        exit(0);
    }

    int a;
    printf("Marks: ");
    while (!feof(f))
    {
        fscanf(f, "%d", &a);

        if (a > 33)
        {
            fprintf(e, "%d\n", a);
        }

        printf("%d ", a);
    }

    fclose(f);
    fclose(e);
}