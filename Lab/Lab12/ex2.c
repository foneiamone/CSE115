/* 2. Create a struct called BirthCertificate (see below) and read the info of two persons using it. Then
print the name of the person who is older than the other. Also print his/her parents’ names.
struct BirthCertificate {
    int day, month, year; //to represent birthdate
    char name[100], fatherName[100], motherName[100];
};

-- Person 1 Details --
Name: Rahim Khan
Birth Date(d/m/y): 2 3 2001
Father's Name: Karim Khan
Mother's Name: Khanom Khan

-- Person 2 Details --
Name: Rahman Khan
Birth Date(d/m/y): 3 2 1999
Father's Name: Karim Khan
Mother's Name: Khanom Khan


Name: Rahman Khan
Father's Name: Karim Khan
Mother's Name: Khanom Khan */

#include <stdio.h>

void main()
{
    struct BirthCertificate
    {
        int day, month, year;
        char name[100], fatherName[100], motherName[100];
    } p[2];

    for (int i = 0; i < 2; i++)
    {
        printf("-- Person %d Details --\n", i + 1);
        printf("Name: ");
        gets(p[i].name);

        printf("Birth Date(d/m/y): ");
        scanf("%d/%d/%d", &p[i].day, &p[i].month, &p[i].year);
        fflush(stdin);

        printf("Father's Name: ");
        gets(p[i].fatherName);
        fflush(stdin);

        printf("Mother's Name: ");
        gets(p[i].motherName);
        printf("\n");
        fflush(stdin);
    }

    int same = 0;
    for (int i = 0, j = 1; i < 2; i++, j--)
    {
        if (p[i].year < p[j].year || (p[i].year == p[j].year && p[i].month < p[j].month) || (p[i].year == p[j].year && p[i].month == p[j].month && p[i].day < p[j].day))
        {
            printf("\nName: %s", p[i].name);
            printf("\nFather's Name: %s", p[i].fatherName);
            printf("\nMother's Name: %s", p[i].motherName);
            same++;
        }
    }

    if (same == 0)
    {
        printf("Both person has same birth date.");
    }
}