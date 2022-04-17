/* 2. Passing an array of Structures as function arguments (book records)
Enter Book title(Just press enter to finish): jajd
Enter author name: sdj dsjf
Enter subject: jsdhfj
Enter ID: 8

Enter Book title(Just press enter to finish): jsdhfj dsfkdf
Enter author name: jsdfh
Enter subject: jdhsf sdfifd
Enter ID: 3

Enter Book title(Just press enter to finish):

We have the following books:

Book title: jajd
Book author: sdj dsjf
Book subject: jsdhfj
Book ID: 8

Book title: jsdhfj dsfkdf
Book author: jsdfh
Book subject: jdhsf sdfifd
Book ID: 3 */

#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 1000

int numBOOKS = 0;

struct Books
{
    char title[50];
    char authors[50];
    char subject[100];
    int bookID;
};

void readBooks(struct Books b[])
{
    for (int i = 0; i < MAX_BOOKS; i++)
    {
        printf("Enter Book title(Just press enter to finish): ");
        gets(b[i].title);

        if (strcmp(b[i].title, "") == 0)
        {
            break;
        }

        printf("Enter authors name: ");
        gets(b[i].authors);

        printf("Enter subject: ");
        gets(b[i].subject);

        printf("Enter ID: ");
        scanf("%d", &b[i].bookID);

        printf("\n");
        fflush(stdin);
        numBOOKS++;
    }
}

void printBooks(struct Books b[])
{
    printf("\nWe have the following books: \n");
    for (int i = 0; i < numBOOKS; i++)
    {
        printf("\nBook title: %s\n", b[i].title);
        printf("Book authors: %s\n", b[i].authors);
        printf("Book subject: %s\n", b[i].subject);
        printf("Book ID: %d\n", b[i].bookID);
    }
}

void main()
{
    struct Books b[MAX_BOOKS];
    readBooks(b);
    printBooks(b);
}