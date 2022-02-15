/* Write a program to take three students' grade, cgpa, numbers from
user input. Then print first student's grade, second student's cgpa, and 
third student's number. */

#include <stdio.h>

struct studentData
{
    char grade[2];
    float cgpa;
    int number;
};

int main()
{
    struct studentData student[3];

    printf("-- Enter 3 students' data --\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf(">> Enter Student %d grade: ", i + 1);
        scanf("%s", &student[i].grade);

        printf(">> Enter Student %d cgpa: ", i + 1);
        scanf("%f", &student[i].cgpa);

        printf(">> Enter Student %d number: ", i + 1);
        scanf("%d", &student[i].number);

        printf("\n");
    }

    printf("\n-> Student 1 grade: %s", student[0].grade);
    printf("\n-> Student 2 cgpa: %.2f", student[1].cgpa);
    printf("\n-> Student 3 number: %d", student[2].number);

    return 0;
}