/* 1. Incorporate reading & writing to/from file in your project so that each time user starts the program, it
doesn’t read from user, instead it reads from a certain file and then show those to the user. Also, just
before the program finishes, the program should store your array of structures in a file.
Hint: combine the ideas in example 7 and 8 above to read & write to/from a file.
 */

#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int id;
    float cgpa;
};

void main()
{
    struct student s[10];
    FILE *f = fopen("student_n.dat", "r");
    if (f == NULL)
    {
        printf("ERROR");
        return;
    }

    int n = fread(s, sizeof(struct student), 10, f);
    for (int i = 0; i < n; i++)
    {
        printf("Student Name: %s\nStudent ID: %d\nStudent CGPA: %.2f\n\n", s[i].name, s[i].id, s[i].cgpa);
    }
    fclose(f);

    f = fopen("student.dat", "w");
    if (f == NULL)
    {
        printf("ERROR");
        return;
    }
    fwrite(s, sizeof(struct student), n, f);
    fclose(f);
}