/* Write a function called search that takes an array of Books structures and a string called title i.e. the
header of the function will be: void search(struct Books b[], char title[]). This function finds the book in the array b[]
whose title is the same as the parameter called title and then prints all the info (title, authors, id, subject) of that
book.
Enter book name[press enter to quit]: hehe b011
Enter authors name: jsjhd
Enter book subject: jshd
Enter book ID: 8      

Enter book name[press enter to quit]: jjsdjh
Enter authors name: kjsdh
Enter book subject: jksd
Enter book ID: 1

Enter book name[press enter to quit]:
Enter title to search: jjsdjh

Book title: jjsdjh
Book authors: kjsdh
Book subject: jksd
Book ID: 1

Enter book name[press enter to quit]: jhasghd
Enter authors name: hasdg
Enter book subject: ujhasdg
Enter book ID: 2

Enter book name[press enter to quit]:
Enter title to search: jasd\
Book not found! */

#include <stdio.h>
#include <string.h>
#define maxBook 100

int numBook = 0;

struct book
{
    char title[50];
    char authors[100];
    char subject[100];
    int bookID;
};

void input(struct book b[])
{
    for (int i = 0; i < maxBook; i++)
    {
        printf("Enter book name[press enter to quit]: ");
        gets(b[i].title);

        if (strcmp(b[i].title, "") == 0)
        {
            break;
        }

        printf("Enter authors name: ");
        gets(b[i].authors);

        printf("Enter book subject: ");
        gets(b[i].subject);

        printf("Enter book ID: ");
        scanf("%d", &b[i].bookID);

        printf("\n");
        fflush(stdin);
        numBook++;
    }
}

void search(struct book b[], char title[])
{
    int c = 0;
    for (int i = 0; i < numBook; i++)
    {
        if (strcmp(b[i].title, title) == 0)
        {
            printf("\nBook title: %s\n", b[i].title);
            printf("Book authors: %s\n", b[i].authors);
            printf("Book subject: %s\n", b[i].subject);
            printf("Book ID: %d\n", b[i].bookID);

            c = 1;
            break;
        }
    }

    if (c == 0)
    {
        printf("Book not found!");
    }
}

void main()
{
    struct book b[maxBook];
    input(b);

    char title[50];
    printf("Enter title to search: ");
    gets(title);
    search(b, title);
}