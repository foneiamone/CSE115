/******************************************
STUDENT DATABASE MANAGEMENT SYSTEM 
BY SUMIT BOSU, FAHIM AHMED, ABU ZIHAD DIP
 ********************************************/

//START

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct student
{
    char name[100];
    int id;
    char number[50];
    char course[100];
    double cgpa;
    char department[100];
} st;

FILE *fptr;

/********************************
FUNCTION TO CREATE AN ENTRY (1)
 *********************************/

void create()
{
    fptr = fopen("student.bin", "ab");

    printf("\n\n\n\t** Create **\n");

    printf("\n\t Name \n");
    printf("\n\t => ");
    fflush(stdin);
    gets(st.name);

    printf("\n\t ID \n");
    printf("\n\t => ");
    scanf(" %d", &st.id);

    printf("\n\t Number \n");
    printf("\n\t => ");
    fflush(stdin);
    gets(st.number);

    printf("\n\t Course \n");
    printf("\n\t => ");
    fflush(stdin);
    gets(st.course);

    printf("\n\t CGPA \n");
    printf("\n\t => ");
    scanf(" %lf", &st.cgpa);

    printf("\n\t Department \n");
    printf("\n\t => ");
    fflush(stdin);
    gets(st.department);

    fwrite(&st, sizeof(st), 1, fptr);
    fclose(fptr);

    system("cls");

    printf("\n\n\n\t ** Done ** \n");

    printf("\n\t [!] Entry Saved \n");

    printf("\n\t [i] Press any key to return \n");
    printf("\n\t => ");

    getch();
}

/*********************************
FUNCTION TO DISPLAY ALL ENTRY (2)
 *********************************/

void display_all()
{

    printf("\n\n\n\t** Dispaly All **\n");

    fptr = fopen("student.bin", "rb");

    while ((fread(&st, sizeof(st), 1, fptr)) > 0)
    {

        printf("\n\t Name: %s \n", st.name);
        printf("\n\t ID: %d \n", st.id);
        printf("\n\t Number: %s \n", st.number);
        printf("\n\t Course: %s \n", st.course);
        printf("\n\t CGPA: %0.1lf \n", st.cgpa);
        printf("\n\t Department: %s \n", st.department);

        printf("\n\t ____________________ \n");
    }

    fclose(fptr);

    printf("\n\t [i] Press any key to return \n");
    printf("\n\t => ");

    getch();
}

/*******************************
FUNCTION TO SEARCH AN ENTRY (3)
 *******************************/

void search()
{
    int n, m = 0;

    fptr = fopen("student.bin", "rb");

    printf("\n\n\n\t** Search **\n");

    printf("\n\t ID: \n");
    printf("\n\t => ");
    scanf("%d", &n);

    while ((fread(&st, sizeof(st), 1, fptr)) > 0)
    {
        if (st.id == n)
        {
            system("cls");

            printf("\n\n\n\t** Details **\n");

            printf("\n\t Name: %s \n", st.name);
            printf("\n\t ID: %d \n", st.id);
            printf("\n\t Number: %s \n", st.number);
            printf("\n\t Course: %s \n", st.course);
            printf("\n\t CGPA: %0.1lf \n", st.cgpa);
            printf("\n\t Department: %s \n", st.department);

            m = 1;
        }
    }

    fclose(fptr);

    if (m == 0)
    {
        system("cls");

        printf("\n\n\n\t** Error **\n");

        printf("\n\t\a [!] No record found \n");
    }

    printf("\n\t [i] Press any key to return \n");
    printf("\n\t => ");

    getch();
}

/*******************************
FUNCTION TO MODIFY AN ENTRY (4)
 ********************************/

void modify()
{
    int n, m = 0;

    printf("\n\n\n\t** Modify **\n");

    printf("\n\t ID: \n");
    printf("\n\t => ");
    scanf("%d", &n);

    fptr = fopen("student.bin", "rb+");

    while ((fread(&st, sizeof(st), 1, fptr)) > 0 && m == 0)
    {
        if (st.id == n)
        {
            system("cls");

            printf("\n\n\n\t** Current Details **\n");

            printf("\n\t Name: %s \n", st.name);
            printf("\n\t ID: %d \n", st.id);
            printf("\n\t Number: %s \n", st.number);
            printf("\n\t Course: %s \n", st.course);
            printf("\n\t CGPA: %0.1lf \n", st.cgpa);
            printf("\n\t Department: %s \n", st.department);

            printf("\n\n\n\t** New Details **\n");

            printf("\n\t Name \n");
            printf("\n\t => ");
            fflush(stdin);
            gets(st.name);

            printf("\n\t ID \n");
            printf("\n\t => ");
            scanf(" %d", &st.id);

            printf("\n\t Number \n");
            printf("\n\t => ");
            fflush(stdin);
            gets(st.number);

            printf("\n\t Course \n");
            printf("\n\t => ");
            fflush(stdin);
            gets(st.course);

            printf("\n\t CGPA \n");
            printf("\n\t => ");
            scanf(" %lf", &st.cgpa);

            printf("\n\t Department \n");
            printf("\n\t => ");
            fflush(stdin);
            gets(st.department);

            fseek(fptr, -(long)sizeof(st), 1);
            fwrite(&st, sizeof(st), 1, fptr);

            m = 1;

            system("cls");

            printf("\n\n\n\t ** Done ** \n");

            printf("\n\t [!] Entry Updated \n");
        }
    }

    fclose(fptr);

    if (m == 0)
    {

        system("cls");

        printf("\n\n\n\t** Error **\n");

        printf("\n\t\a [!] No record found \n");
    }

    printf("\n\t [i] Press any key to return \n");
    printf("\n\t => ");

    getch();
}

/*******************************
FUNCTION TO DELETE AN ENTRY (5)
 ********************************/

void delete ()
{
    int n;
    FILE *fptr2;

    printf("\n\n\n\t** Delete **\n");

    printf("\n\t ID: \n");
    printf("\n\t => ");
    scanf("%d", &n);

    fptr = fopen("student.bin", "rb");

    fptr2 = fopen("temp.bin", "wb");

    rewind(fptr);

    while ((fread(&st, sizeof(st), 1, fptr)) > 0)
    {
        if (st.id != n)
        {
            fwrite(&st, sizeof(st), 1, fptr2);

            system("cls");

            printf("\n\n\n\t ** Done ** \n");

            printf("\n\t [!] Entry Deleted \n");
        }
    }

    fclose(fptr2);

    fclose(fptr);

    remove("student.bin");

    rename("temp.bin", "student.bin");

    printf("\n\t [i] Press any key to return \n");
    printf("\n\t => ");

    getch();
}

/***********************
FUNCTION FOR MAIN MENU
 ************************/

int main()
{
    char input;

    do
    {
        system("cls");

        printf("\n\n\n\t** Student DBMS **\n");

        printf("\n\t 01. Display All ");
        printf("\n\t 02. Create ");
        printf("\n\t 03. Search ");
        printf("\n\t 04. Modify ");
        printf("\n\t 05. Delete ");
        printf("\n\t 06. Exit \n");

        printf("\n\t [i] Choose between (1-6) \n");
        printf("\n\t => ");

        input = getche();

        switch (input)
        {
        case '1':
            system("cls");
            display_all();
            break;

        case '2':
            system("cls");
            create();

            break;

        case '3':
            system("cls");
            search();

            break;

        case '4':
            system("cls");
            modify();

            break;

        case '5':
            system("cls");
            delete ();

            break;

        case '6':
            system("cls");
            exit(0);

            break;

        default:
            system("cls");

            printf("\n\n\n\t** Error **\n");

            printf("\n\t\a [!] Enter correct value\n");

            printf("\n\t [i] Press any key to return \n");
            printf("\n\t => ");

            getch();
        }
    } while (input != 6);

    return 0;
}

//END
