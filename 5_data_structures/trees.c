#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
} node;

// binary search trees O(log n)
/*
     __[4]___       root
  _[2]_    _[6]_    stem
[1]   [3][5]   [7]  leaves
*/

bool search(node *tree, int number)
{
    if (tree == NULL) //error handling
    {
        return false;
    }
    else if (number < tree->number) //search left-subtree
    {
        return search(tree->left, number);
    }
    else if (number > tree->number) //search right-subtree
    {
        return search(tree->right, number);
    }
    else if (number == tree->number) //found number (root)
    {
        return true;
    }
}
//recursion
 