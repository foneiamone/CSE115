/* 7. Writing structures to files */

#include <stdio.h>
#include <string.h>

struct customer
{
    char fName[20], lName[20];
    int accNum;
    float accBalance;
};

void main()
{
    struct customer c[100];
    FILE *f = fopen("fileIO.dat", "w");

    if (f == NULL)
    {
        printf("ERROR!!");
        return;
    }

    int i = 0;
    while (1)
    {
        printf("First name(press enter to stop): ");
        gets(c[i].fName);

        if (strcmp(c[i].fName, "") == 0)
        {
            break;
        }
        fflush(stdin);

        printf("Last name: ");
        gets(c[i].lName);
        fflush(stdin);

        printf("Account No: ");
        scanf("%d", &c[i].accNum);
        fflush(stdin);

        printf("Account Balance: ");
        scanf("%f", &c[i].accBalance);

        printf("\n");
        fflush(stdin);

        i++;
    }

    fwrite(c, sizeof(struct customer), i, f);
    fclose(f);
}