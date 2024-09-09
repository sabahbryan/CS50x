#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1; //non-zero return value usually means there's an error
    }
    printf("Hello, %s\n", argv[1]);
    return 0; //default return value, means everything is ok
}
// use "echo$?" to see hidden return value *after running the program
