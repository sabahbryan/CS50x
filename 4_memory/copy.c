#include <cs50.h>
#include <ctype.h> //toupper
#include <stdio.h>
#include <stdlib.h> //malloc, free
#include <string.h> //strlen

int main(void)
{
    char    *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    char    *t = malloc(strlen(s) + 1); //+1 for the null character
    if (t == NULL) //means not enough memory available
    {
        return 1;
    }

    // for (int i = 0, n = strlen(s); i <= n; i++) //"i < n + 1" also acceptable, to include "\0"
    // {
    //     t[i] = s[i];
    // }
    // //t[strlen(s)] = '\0';
    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    printf("%s\n", s);
    printf("%s\n", t);

    free(t); //frees the malloc-ed 't'
    return 0;
}
//malloc = memory allocate
//  takes a single argument: number of bytes to allocate
//  returns the first address of that memory
//free = frees allocated memory
