#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string  name;
    string  number;
}
person;

// struct = a variable that contains any number of other variables
// "typedef" = define the following data type

int main(void)
{
    person  people[3];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-617-495-1000";

    people[2].name = "John";
    people[2].number = "+1-949=468-2750";

    string  name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

/*PSEUDOCODE (selection sort) - find the smallest and swap

For i from 0 to n-1
    Find smallest number between numbers[i] and numbers[n-1]
    Swap smallest number with numbers[i]

[0][1][2]...[n-3][n-2][n-1]

(n-1)+(n-2)+(n-3)+...+1 = n(n-1)/2
                        = (n^2)/2-n/2

*PSEUDOCODE (bubble sort)

Repeat n-1 times
    For i from 0 to n-2
        If numbers[i] and numbers[i+1] out of order
            Swap them
        If no swaps
            Quit

[0][1][2]...[n-3][n-2][n-1]

(n-1)x(n-2)x... = (n^2)-2n + 1

O(n^2)      = selection/bubble sort
O(n log n)  =
O(n)        =
O(log n)    =
O(1)        =

Ω(n^2)      =
Ω(n log n)  =
Ω(n)        = bubble
Ω(log n)    =
Ω(1)        = linear/binary search
*/
