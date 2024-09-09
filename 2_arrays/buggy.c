#include <cs50.h>
#include <stdio.h>

void    print_column(int height);

int main(void)
{
    int h = get_int("Height: ");
    print_column(h);
}

void    print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}
// use "debug50 [assembly name]"

/*
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        //printf("i is %i\n", i); "debugging with printf"
        printf("#\n");
    }
}
*/

// bool     1 byte  / 8 bits
// int      4 bytes / 32 bits
// long     8 bytes / 64 bits
// float    4 bytes
// double   8 bytes
// char     1 byte
// string   ? bytes (varies)
