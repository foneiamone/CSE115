/*
 * Write a program in C that has a user-defined data type. Design the user-defined data type using your own idea. The design should be meaningful.
 * Create an array (at least five elements) of structure (your designed user-defined data type) and sort the records according to your preferred field.
 */

#include <stdio.h>
#include <string.h>

struct device
{
    char type[50];
    char model[50];
    char manufacturer[50];
    int year;
};

void main()
{
    struct device d[6] = {{"eReader", "Kobo Clara HD", "Rakuten", 2019},
                          {"Phone", "Redmi Note 9 Pro", "Xiaomi", 2021},
                          {"Laptop", "Nitro 5", "Acer", 2017},
                          {"Speaker", "X02YM", "Xiaomi", 2016},
                          {"Clock", "MX701", "Havit", 2018},
                          {"EarPhone", "EO-IG935", "AKG", 2022}};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            if (d[i].year < d[j].year)
            {
                struct device t;

                strcpy(t.type, d[i].type);
                strcpy(t.model, d[i].model);
                strcpy(t.manufacturer, d[i].manufacturer);
                t.year = d[i].year;

                strcpy(d[i].type, d[j].type);
                strcpy(d[i].model, d[j].model);
                strcpy(d[i].manufacturer, d[j].manufacturer);
                d[i].year = d[j].year;

                strcpy(d[j].type, t.type);
                strcpy(d[j].model, t.model);
                strcpy(d[j].manufacturer, t.manufacturer);
                d[j].year = t.year;
            }
        }
    }

    printf("List of electronic devices I currently own.\n");
    printf("Sorted in descending order of the year they were bought.\n");
    for (int i = 0; i < 6; i++)
    {
        printf("\nDevice: %d", i + 1);
        printf("\nType: %s", d[i].type);
        printf("\nModel: %s", d[i].model);
        printf("\nManufacturer: %s", d[i].manufacturer);
        printf("\nYear: %d\n", d[i].year);
    }
}