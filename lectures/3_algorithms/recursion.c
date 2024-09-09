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
    // If nothing to draw
    if ( n <= 0)
    {
        return;
    }

    // Print pyramid of height n -1
    draw(n - 1);

    // Print one more row
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
// recursive function

/*MERGE SORT (pseudocode)

If only one number
    Quit
Else
    Sort left half of numbers
    Sort right half of numbers
    Merge sorted halves

[6 3 4 1 5 2 7 0]
[6 3 4 1][5 2 7 0]
[6 3][4 1]...
[6][3]...
[3 6]...
[3 6][4][1]...
[3 6][1 4]...
[1 3 4 6]...
...[5 2][7 0]
...[5][2][7 0]
...[2 5][7][0]
...[2 5][0 7]
...[0 2 5 7]
[1 3 4 6][0 2 5 7]
[0 1 2 3 4 5 6 7]

O(n^2)      =
O(n log n)  = merge sort
O(n)        =
O(log n)    =
O(1)        =

Ω(n^2)      =
Ω(n log n)  = merge sort
Ω(n)        =
Ω(log n)    =
Ω(1)        =

Θ(n^2)      =
Θ(n log n)  = merge sort
Θ(n)        =
Θ(log n)    =
Θ(1)        =
*/
