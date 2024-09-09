#include <cs50.h>
#include <stdio.h>

int    add(int a, int b);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", add(x, y));
}
// values of 'a' and 'b' are passed into 'x' and 'y' via add();
// main always returns a number, by default it's zero

int    add(int a, int b)
{
    return a + b;
}
// returns an integer value
// inputs 'a' and 'b' only work in this scope

/*
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x + y);
}
*/
