#include <stdio.h>

int main(void)
{
    int scores[1024]; //declares array of 1024, but no values assigned
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}
//declare a variable, but not assigning a value
//prints out garbage values, "remnant memory"

int main(void)
{
    int *x;
    int *y;

    x = malloc(sizeof(int));

    *x = 42;
    //*y = 13; since we didn't malloc y, this would produce garbage values

    y = x;

    *y = 13;
}
//declaring *y earlier will cause the computer to access unknown memory, causing a crash
//changes the value of x = 42 to 13
