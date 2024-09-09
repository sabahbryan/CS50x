#include <stdio.h>
#include <stdlib.h> //malloc

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL) //error handling
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int)); //malloc a bigger temporary space for more integers/data
    if (list == NULL)
    {
        free(list); //frees original list from line 6, prevent memory leak
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i]; //copies into the temporary array
    }
    tmp[3] = 4; //adds [4]

    free(list); //frees original list
    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list); //frees final list
    return 0;
}
//copies [1,2,3] from one list to another, then adds [4] into the new list

/*
int main(void)
{
    int list[3];

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}
//simple list of fixed size 3
*/

/*
const   int CAPACITY = 50;

typedef struct
{
    person  people[CAPACITY];
    int size;
}
queue; //stack
*/

/* enqueueing(push)/dequeueing(pop)

FIFO = first in, first out
LIFO = last in, first out
*/
