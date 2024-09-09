#include <cs50.h>
#include <stdio.h>

//const int N = 3; *global variable*

//int ARRAY[] = {13, 42, 50}; *set values to ARRAY of size 3*

int main(void)
{
    const int N = 3;
    int scores[3];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}

/*
int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
// convert to loop
*/

/*
int main(void)
{
    int scores[3];
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
// set a fixed array of 3
// allow user input the 3 scores
*/

/*
int main(void)
{
    int score1 = 72; //takes 4 bytes
    int score2 = 73; //takes the next 4 bytes
    int score3 = 33; //takes the next(2) 4 bytes

    printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
}
// use decimals to force system to divide using floating point
*/
