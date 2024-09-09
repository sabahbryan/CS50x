#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//hash function to look at first letter of a name
//error handling isn't prioritised here, code is only for reference
unsigned int hash(const char *word)
{
    return toupper(word[0]) - 'A';
}

// typedef struct node
// {
//     char *name;
//     char *number;
//     struct node *next;
// } node;

/*HASHING
-   a function that take any number of input and maps them to a finite number
    of outputs
    eg: sort playing cards by the four symbols: diamond, clubs, hearts, spades
//hash function/tables
*/
/*HASH TABLE - an array of linked lists
//Array size of 26 (alphabet), each element are pointers to a linked list
// O(n) time taken for worst case scenario
[]
[]->Birdo->Bowser->Bowser Jr.
[]
[]->Daisy->Donkey Kong->Diddy Kong->Dry Bones
[]
[]
[]->Goomba->Ganon
[]
[]->Isabelle
[]
[]->King Boo->K.K. Slider
[]->Luigi->Lakitu->Link
[]-Mario
[]
[]
[]->Peach->Petey Piranha
[]
[]->Rosalina
[]->Shy Guy->Spike
[]->Toad->Toadette->Tom Nook
[]
[]
[]->Wario->Waluigi
[]
[]->Yoshi
[]->Zelda
*/
/* O(1) - constant time, but requires massive memory
Laa[]
Lab[]
Lac[]
...==
Laj[]
Lak[]-Lakitu
...==
Lim[]
Lin[]->Link
...==
Luh[]
Lui[]-Luigi
...
*/

/*TRY/TRIES -  a tree of arrays

Find TOAD:
                                                          |
                                                          V
[A][B][C][D][E][F][G][H][I][J][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z]
                                           |
                                           V
[A][B][C][D][E][F][G][H][I][J][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z]
 |
 V
[A][B][C][D][E][F][G][H][I][J][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z]
          |
          V
[A][B][C][D][E][F][G][H][I][J][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z]
          * = special notation (not NULL) that marks as "end"
//implicitly stores letter by using pointers towards nodes
// O(1) = constant time, fastest, but wasted NULL spaces for pointers
[][][][][][][][][][][][][][][][][][][][T][][][][][][]
//Find T, but the other 25 wasted spaces are NULL
*/

typedef struct node
{
    struct node *children[26];
    char *number;
} node;
