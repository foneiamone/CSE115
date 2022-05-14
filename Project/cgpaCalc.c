#include <stdio.h>
#include <string.h>

#define file "data.txt"

void menu();
void login();
void calculateCGPA();
void registration();

void registration()
{
    struct user
    {
        char name[20];
        char username[20];
        char password[20];
        int id;
    };

    FILE *f = fopen(file, "w");

    if (f == NULL)
    {
        printf("\n! Registration\n");
        return;
    }

    struct user people;

    printf("\n? ID ");
    scanf("%d", &people.id);
    fprintf(f, "%d ", people.id);

    printf("? Name ");
    fflush(stdin);
    scanf("%[^\n]s", people.name);
    fprintf(f, "%s ", people.name);

    printf("? Username ");
    fflush(stdin);
    scanf("%s", people.username);
    fprintf(f, "%s ", people.username);

    printf("? Password ");
    fflush(stdin);
    scanf("%s", people.password);
    fprintf(f, "%s\n", people.password);

    fclose(f);
}

void login()
{
    FILE *f = fopen(file, "r");

    if (f == NULL)
    {
        printf("! Login");
        return;
    }

    char username[20];
    char password[20];

    printf("\n? Username ");
    fflush(stdin);
    scanf("%s", username);

    printf("? Password ");
    fflush(stdin);
    scanf("%s", password);

    char fileUsername[20];
    char filePassword[20];

    int flag = 0;

    while (!feof(f))
    {
        fscanf(f, "%s", fileUsername);

        if (strcmp(username, fileUsername) == 0)
        {
            fscanf(f, "%s", filePassword);

            if (strcmp(password, filePassword) == 0)
            {
                calculateCGPA();
                flag++;
            }
        }
    }

    if (flag == 0)
    {
        printf("\n! Login\n");
    }
}

void calculateCGPA()
{
    struct mark
    {
        float courseMarks;
        int courseCredit;
    };

    int n;
    printf("\n? No of couses ");
    scanf("%d", &n);

    struct mark m[n];

    for (int i = 0; i < n; i++)
    {
        printf("\n? course %d marks ", i + 1);
        scanf("%f", &m[i].courseMarks);

        printf("? Course %d credit ", i + 1);
        scanf("%d", &m[i].courseCredit);
    }

    float marks = 0;
    int credit = 0;

    for (int i = 0; i < n; i++)
    {
        if (m[i].courseMarks >= 70 && m[i].courseMarks <= 100)
        {
            marks += 4;
        }

        else if (m[i].courseMarks >= 60 && m[i].courseMarks <= 69)
        {
            marks += 3;
        }

        else if (m[i].courseMarks >= 50 && m[i].courseMarks <= 59)
        {
            marks += 2;
        }

        else if (m[i].courseMarks >= 44 && m[i].courseMarks <= 49)
        {
            marks += 1;
        }

        else if (m[i].courseMarks >= 0 && m[i].courseMarks <= 43)
        {
            marks += 4;
        }

        credit += m[i].courseCredit;
    }

    float total = marks * (float)credit;

    printf("\n> CGPA = %.2f\n", total / (float)credit);
    return;
}

void menu()
{
    while (1)
    {
        printf("\n1 Login");
        printf("\n2 Registration");
        printf("\n3 Calculate CGPA");
        printf("\n4 Exit");
        printf("\n\n? ");

        int n;
        scanf(" %d", &n);

        switch (n)
        {
        case 1:
            login();
            break;

        case 2:
            registration();
            break;

        case 3:
            calculateCGPA();
            break;

        case 4:
            return;
            break;

        default:
            printf("\n! Menu\n");
            break;
        }
    }
}

void main()
{
    printf("_CGPA Calculator\n");

    menu();
}