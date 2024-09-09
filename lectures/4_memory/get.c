#include <stdio.h>

int main(void)
{
    char    s[4];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}
//get string from user input
//string doesn't require '&' since it's an address

/*
int main(void)
{
    char    *s;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}
//$ clang -o get -Wno-unintialized get.c
//  segmentation fault "accessed a prohibited memory"
//      's' didn't have initialised value
//      not enough malloc-ed memory
*/

/*
int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n);
    printf("n: %i\n", n);
}
//get integer from user input
*/
