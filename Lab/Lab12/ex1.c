/* . Create a struct called Student (see below) and read the records of two students using it. Then print
the name and id of the student who has higher CGPA than the other.
struct Student{
    char name[50];
    int id;
    float CGPA;
}; 

-- Enter Student [1] Details --
Name: Bruce Wayne
ID: 8973
CGPA: 3.4

-- Enter Student [2] Details --
Name: Tony Stark
ID: 8937
CGPA: 3.7


Student Name: Tony Stark
Student ID: 8937 */

#include <stdio.h>

void main()
{
    struct Student
    {
        char name[50];
        int id;
        float CGPA;
    } s[2];

    for (int i = 0; i < 2; i++)
    {
        printf("-- Enter Student [%d] Details --\n", i + 1);
        printf("Name: ");
        gets(s[i].name);

        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("CGPA: ");
        scanf("%f", &s[i].CGPA);

        printf("\n");
        fflush(stdin);
    }

    for (int i = 0, j = 1; i < 2; i++, j--)
    {
        if (s[i].CGPA > s[j].CGPA)
        {
            printf("\nStudent Name: %s", s[i].name);
            printf("\nStudent ID: %d", s[i].id);
        }
    }
}