#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for positive integer
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Print an n-by-n grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

/* creates rows and columns of '#' based on user input with error handling
int main(void)
{
    int n = get_int("Size: ");
    while (n < 1)
    {
        n = get_int("Size: ");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
*/

/*prints 4 '?' in a row, then adds newline afterwards
int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");
}
*/
