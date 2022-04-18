/* 2. Write a main menu, which will offer the user to enter records, show records, or to save&exit.
 */

#include <stdio.h>
#include <string.h>

int c = 0;

struct student
{
    char name[20];
    int id;
    float cgpa;
};

void menu()
{
    printf("\n-- Student DBMS --\n");
    printf("[1] Enter Records.\n");
    printf("[2] See Records.\n");
    printf("[0] Exit.\n");
}

void dbmsIn()
{
    struct student s[50];
    FILE *f = fopen("studentDBMS.dat", "w");
    if (f == NULL)
    {
        printf("\n[i] Error.\n");
    }

    int i = 0;
    while (1)
    {
        fflush(stdin);
        printf("\n-- Student No. %d --\n", i + 1);
        printf("press enter to save and go back to menu\nStudent Name:  ");
        gets(s[i].name);

        if (strcmp(s[i].name, "") == 0)
        {
            break;
        }
        fflush(stdin);

        printf("Student ID: ");
        scanf("%d", &s[i].id);
        fflush(stdin);

        printf("Student CGPA: ");
        scanf("%f", &s[i].cgpa);
        fflush(stdin);

        printf("\n");
        fflush(stdin);

        i++;
        c++;
    }
    fwrite(s, sizeof(struct student), 50, f);
    fclose(f);
}

void dbmsOut()
{
    struct student p[50];
    FILE *g = fopen("studentDBMS.dat", "r");
    if (g == NULL)
    {
        printf("\n[i] No data.\n");
    }

    fread(p, sizeof(struct student), 50, g);
    for (int j = 0; j < c; j++)
    {
        printf("\n-- Student No. %d --\n", j + 1);
        printf("Student Name: %s\nStudent ID: %d\nStudent CGPA: %.2f\n", p[j].name, p[j].id, p[j].cgpa);
    }
    fclose(g);
}

void main()
{
    int n;
    do
    {
        menu();
        printf("[>] Enter a number: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            dbmsIn();
            break;
        case 2:
            dbmsOut();
            break;
        }
    } while (n != 0);
}