#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x + y);
}

/* compare (Python)
from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")

print(x + y)
*/
