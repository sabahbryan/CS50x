#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string  s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
// calls strlen in the initialisation of loop
// instead of inside Boolean expression that's executed repeatedly

/*
int main(void)
{
    string  s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
// syntactically correct, but calling strlen within a loop is inefficient
*/
