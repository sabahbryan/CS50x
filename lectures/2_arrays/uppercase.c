#include <cs50.h>
#include <ctype.h> //toupper, tolower, isalnum, isalpha, ...
#include <stdio.h>
#include <string.h>

int main(void)
{
    string  s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i])); //ctype.h function
    }
    printf("\n");
}
// toupper also returns original value if it's already uppercase

/*
int main(void)
{
    string  s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32); // converts lowercase to uppercase
        }
        else
        {
            printf("%c", s[i]); // ignores char that's already uppercase
        }
    }
    printf("\n");
}
// ASCII conversion:
// lowercase -> UPPERCASE -> lowercase
//          -32           +32
*/
