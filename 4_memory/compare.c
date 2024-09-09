#include <cs50.h>
#include <stdio.h>
#include <string.h> //use strcmp

int main(void)
{
    char    *s = get_string("s: ");
    char    *t = get_string("t: ");

    printf("%p\n", s);
    printf("%p\n", t);
}
//shows memory addresses
//addresses always different even if strings are equal

/*
int main(void)
{
    char    *s = get_string("s: ");
    char    *t = get_string("t: ");

    if (strcmp(s, t) == 0) //compares ASCII values, NOT addresses
    {
        printf("Same\n"); //same ASCII values
    }
    else
    {
        printf("Different\n"); //different ASCII values
    }
}
*/

/*
int main(void)
{
    char    *s = get_string("s: ");
    char    *t = get_string("t: ");

    if (s == t) //compares addresses, NOT values
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
// even if the strings are the same chars, their addresses are different
// eg: *s = 0x123, *t = 0x456
*/
