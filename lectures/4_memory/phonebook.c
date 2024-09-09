#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE    *file = fopen("phonebook.csv", "a"); //[r]eading, [w]riting, [a]ppending
    if (file == NULL) //error handling
    {
        return 1;
    }

    char    *name = get_string("Name: ");
    char    *number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}
//FILE I/O
//appends file named "phonebook.csv"
//adds new name and number on next row
