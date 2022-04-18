/* 6. Reading multiple entries from files */

#include <stdio.h>
#include <string.h>

void main()
{
    char name[100];
    int age;
    float salary;

    FILE *f = fopen("fileIO.txt", "r");
    while (fscanf(f, "%s%d%f", name, &age, &salary) == 3)
    {
        if (name[strlen(name)] - 1 == '\n')
        {
            name[strlen(name) - 1] = '\0';
        }

        printf("%s\n%d\n%f\n", name, age, salary);

        if (feof(f) == 1)
        {
            break;
        }
    }
}