/* User defined data type Book in C with tree fields Book_Name,
Book_Author and Price. Write a C program to input N books
and print them according their price in ascending order. 

Number of books? 4

Book[1] Name? a b
Book[1] Author? c d
Book[1] Price? 112.3

Book[2] Name? e f
Book[2] Author? g h
Book[2] Price? 445.7

Book[3] Name? i j
Book[3] Author? k l
Book[3] Price? 904.5

Book[4] Name? m n
Book[4] Author? o p
Book[4] Price? 50

Books according to their price in accending order
Book[1] Name: i j
Book[1] Author: k l
Book[1] Price: 904.50

Book[2] Name: e f
Book[2] Author: g h
Book[2] Price: 445.70

Book[3] Name: a b
Book[3] Author: c d
Book[3] Price: 112.30

Book[4] Name: m n
Book[4] Author: o p
Book[4] Price: 50.00 */

#include <stdio.h>
#include <string.h>

void main()
{
    struct Book
    {
        char Book_Name[50];
        char Book_Author[50];
        float Price;
    };

    int n;
    printf("Number of books? ");
    scanf("%d", &n);

    printf("\n");

    struct Book b[n];
    for (int i = 0; i < n; i++)
    {
        printf("Book[%d] Name? ", i + 1);
        fflush(stdin);
        gets(b[i].Book_Name);

        printf("Book[%d] Author? ", i + 1);
        fflush(stdin);
        gets(b[i].Book_Author);

        printf("Book[%d] Price? ", i + 1);
        scanf("%f", &b[i].Price);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i].Price < b[j].Price)
            {
                char T_name[50];
                char T_author[50];
                float T_price;

                strcpy(T_name, b[i].Book_Name);
                strcpy(T_author, b[i].Book_Author);
                T_price = b[i].Price;

                strcpy(b[i].Book_Name, b[j].Book_Name);
                strcpy(b[i].Book_Author, b[j].Book_Author);
                b[i].Price = b[j].Price;

                strcpy(b[j].Book_Name, T_name);
                strcpy(b[j].Book_Author, T_author);
                b[j].Price = T_price;
            }
        }
    }

    printf("Books according to their price in accending order");
    for (int i = 0; i < n; i++)
    {
        printf("\nBook[%d] Name: %s", i + 1, b[i].Book_Name);
        printf("\nBook[%d] Author: %s", i + 1, b[i].Book_Author);
        printf("\nBook[%d] Price: %.2f\n", i + 1, b[i].Price);
    }
}