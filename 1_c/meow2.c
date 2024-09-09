#include <stdio.h>

void    meow(void);
//function prototype

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

void    meow(void)
{
    printf("meow\n");
}
//has no return value
//takes no inputs/arguments
