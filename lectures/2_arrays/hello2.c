#include <cs50.h>   //pre-processing
#include <stdio.h>

int main(void)
{
    string  name = get_string("What's your name? ");
    printf("Hello, %s\n", name);
}
// clang -o hello2 hello2.c -lcs50
// *for 3rd party libaries

// pre-processing = converts #include(s) to their equivalents
// compiling = converts source code (C) into assembly code
// assembling (a.out, "assembly output") = converts to '0's and '1's
// linking = combines and links all '0's and '1's
