#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string  words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
}
// array of strings
//           H I ! \0 B Y E ! \0
//words[0] = 0 1 2 3
//words[1] =          0 1 2 3 4
// E = words[1][2] "zero indexing"

/*
int main(void)
{
    string s = "HI!";
    string t = "BYE!";

    printf("%s\n", s);
    printf("%s\n", t);
}
//    H I ! \0 B Y E ! \0
//s = 0 1 2 3
//t =          0 1 2 3 4
*/

/*
int main(void)
{
    string s = "HI!";
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}
// s[3] = "\0" "null terminator" *(NULL/NUL)
// 00000000 =  zero bits
// to indicate end of string
*/
