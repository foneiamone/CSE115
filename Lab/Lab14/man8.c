/* 8. Reading structures from files */

#include <stdio.h>

struct customer
{
    char fName[20], lName[20];
    int accountNo;
    float accountBalance;
};

void main()
{
    struct customer c[100];
    FILE *f = fopen("fileIO.dat", "r");

    if (f == NULL)
    {
        printf("ERROR!!");
        return;
    }

    int num = fread(c, sizeof(struct customer), 100, f);
    for (int i = 0; i < num; i++)
    {
        printf("Name: %s %s, Acct# %d, Balance= %.2f\n", c[i].fName, c[i].lName, c[i].accountNo, c[i].accountBalance);
    }

    fclose(f);
}