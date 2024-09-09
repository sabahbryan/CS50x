#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
//non-recursion version to print a hash pyramid

/*
recursion - a function that calls itself

*from binary search (pseudocode):

If no doors left
    Return false;
If 50 is behind middle door
    Return true;
Else if number < middle door
    Search left half
Else if number > middle door
    Search right half

*from phonebook (pseudocode)

Pick up phonebook
Open to middle of phone book
Look at page
If person is on page
    Call person
Else if person is earlier in book
    Search left half of book*
Else if person is later in book
    Search right half of book*
Else
    Quit

* originally was:
    Open to middle of left/right half of book
    Go back to line 3
*/
