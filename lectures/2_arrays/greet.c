#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
// prints each argument count on a newline

/*
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, world\n");
    }
}
// command-line arguments
// must have 2 arguments: [program name] and [string]
// argc = argument count
// argv = argument vector (what's in that argument)
*/

/* Old-fashioned method
int main(void)
{
    string  answer = get_string("What's your name? ");
    printf("Hello, %s\n", answer);
}
*/
