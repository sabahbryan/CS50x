#include <stdio.h>
#include <stdlib.h> //malloc, atoi

typedef struct  node
{
    int number;
    struct  node    *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]); //converts ASCII string to integer
        //printf("%i\n", number);

        node    *n = malloc(sizeof(node)); //malloc to fit number and pointer
        if (n == NULL)
        {
            //Free memory thus far
            return 1;
        }
        n->number = number;
        n->next = list;
        list = n;
    }

    //Print whole list (pre-pending method)
    node    *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}

/*example of linked list
typedef struct node //give me the definition of a structure called "node"
{
    int number;
    struct  node    *next;
} node;
*/

//    ". *" = -> (dot and star)
/*LINKED LISTS

//begin with:
node * list = NULL;

//allocate space for a node
node *n = malloc(sizeof(node));

//store '1' in number struct
(*n).number = 1;
n->number = 1;

//set the next field as NULL to prevent garbage value
n->next = NULL;

[0x123]->[1, 0x123]
         [0x456   ]->[2, 0x456]
                     [0x789   ]->[3, 0x789]
                                 [NULL    ]
//metadata
//orphan: if a node was cut off
*/
