#include <stdio.h>

void    swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}
//must use "&x, &y" because we're using addresses/pointers

void    swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//GOOD, we're passing by reference (pointer)
//main function can access the swapped values from "swap"

/*
void    swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
//BAD, we're only passing by value
//only works within the scope of "swap" function
*/

/*
[machine code]
  global vars
     heap |
          v
                (malloc)
          ^
[   stack |  ] = main
*/
//BUFFER OVERFLOWS:
//malloc too many times = heap overflow
//call (recursively?) too many times = stack overflow
