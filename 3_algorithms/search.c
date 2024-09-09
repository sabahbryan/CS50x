#include <cs50.h>
#include <stdio.h>
#include <string.h> //strcmp

int main(void)
{
    string  strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string  s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
// not similar to finding integer
// string.h = strcmp (string compare)
// compares strings in ASCII-betical order

/*
int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
// Prints "Found" if input is one of the numbers in the array
*/

/* PSEUDOCODE (BINARY SEARCH)

objective: Find 50 (assuming numbers are sorted in ascending order)

If no doors left
    Return false;
If 50 is behind doors[middle]
    Return true;
Else if 50 < doors[middle]
    Search doors[0] through[middle - 1]
Else if 50 > doors[middle]
    Search doors[middle + 1] through doors[n - 1]
*/

/* RUNNING TIMES, n = number of data

O is upperbound

O(n^2)      = quadratic,time taken would be squared
O(n log n)  =
O(n)        = linear search/time
O(log n)    = logarithmic/binary search
O(1)        = constant number of steps

Ω means minimal steps required to find results, lowerbound

Ω(n^2)      =
Ω(n log n)  =
Ω(n)        =
Ω(log n)    =
Ω(1)        = linear/binary search

Θ means O = Ω

Θ(n^2)      =
Θ(n log n)  =
Θ(n)        =
Θ(log n)    =
Θ(1)        =
*/
