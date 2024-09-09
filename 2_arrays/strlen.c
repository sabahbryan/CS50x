#include <cs50.h>
#include <stdio.h>
#include <string.h> // official "get_string"

int main(void)
{
    string  name = get_string("Name: ");
    int length = strlen(name); // from string.h
    printf("%i\n", length);
}
