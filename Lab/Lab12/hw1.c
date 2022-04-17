/* 1. Passing a Structure as function arguments (book records)
Book title: C Programming
Book author: Nuha Ali
Book subject: C Programming Tutorial
Book ID: 6495407
Book title: Telecom Billing
Book author: Zara Ali
Book subject: Telecom Billing Tutorial
Book ID: 6495700 */

#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char authors[50];
    char subject[100];
    int bookID;
};

void printBook(struct Books book)
{
    printf("Book title: %s\n", book.title);
    printf("Book authors: %s\n", book.authors);
    printf("Book subject: %s\n", book.subject);
    printf("Book ID: %d\n", book.bookID);
}

void main()
{
    struct Books book1, book2;

    strcpy(book1.title, "C Programming");
    strcpy(book1.authors, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.bookID = 6495407;

    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.authors, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.bookID = 6495700;

    printBook(book1);
    printBook(book2);
}