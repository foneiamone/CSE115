/* Write a C program segment that opens a file named university-list-bd.txt in text mode and
reads first 10 lines from the file and display the lines for the users.
When this file is not available, show appropriate error information to the user.

North South University
University of Science & Technology Chittagong
Independent University, Bangladesh
Central Women's University
International University of Business Agriculture & Technology
International Islamic University Chittagong
Ahsanullah University of Science and Technology
American International University-Bangladesh
East West University
University of Asia Pacific */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *f = fopen("university-list-bd.txt", "r");

    if (f == NULL)
    {
        printf("ERROR: file not found.");
        exit(0);
    }

    for (int i = 0; i < 10; i++)
    {
        char a[100];
        fgets(a, 100, f);
        printf("%s", a);
    }

    fclose(f);
}