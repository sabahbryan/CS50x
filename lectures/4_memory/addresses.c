#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //string  s = "HI!";
    char    *s = "HI!";
    printf("%s\n", s);     //prints "HI!"
    printf("%p\n", s);     //prints address of 'H'
    printf("%p\n", &s[0]); //prints address of 'H'
    printf("%p\n", &s[1]); //prints address of 'I'
    printf("%p\n", &s[2]); //prints address of '!'
    printf("%p\n", &s[3]); //prints address of '\0'
}
// 's' is technically a pointer to the start address of a string
// "string s" = "char *s"
// no need '&' because double quotes ("") is recognised as an "address"

/*
int main(void)
{
    int n = 50;
    int *p = &n; //declare pointer
    //printf("%p\n", p);
    printf("%i\n", *p);
}
// using pointers and dereferencing operators

//pointers take 8-bytes = more memory (64-bits)
//value:   [0x123] -\    [ 50  ]
//address: [  p  ]   \-> [0x123]
*/

/*
int main(void)
{
    int n = 50;
    printf("%p\n", &n);
}
// %p prints address [0x7ff.......] at this moment
*/

/*
// cs50.ly/art

hexadecimals = [0 1 2 3 4 5 6 7 8 9 A B C D E F]
 R G B
#0000FF = Blue
#FFFFFF = White
#FFFF00 = Yellow

Base 16:
FF = (16 x 15) + (1 x 15) = 255

[0 1 2 ... D  E  F  10 11 12 ... 1D 1E 1F 20 21 22 ...]
{0 1 2 ... 13 14 15 16 17 18 ... 29 30 31 32 33 34 ...}
Prefix with "0x" for hexadecimals
(0x0, 0x1, 0x2 ... 0xD, 0xE, 0xF, 0x10, 0x11, 0x12 ...)

LOCATION OF VARIABLES (POINTERS)

'&' address of operator/variable
'*' dereference, takes address and go to it

// typedef uint8_t BYTE
"unsigned integer of 8-bits"
*/
