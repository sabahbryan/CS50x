#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    float z = (float) x / (float) y;
    printf("%.20f\n", z);
}
// type cast values 'x' and 'y' to a float (decimal)
// to prevent truncation (discarding of non-integer values)
// rounded to 20 decimal places
// "float" is 32-bits
// "double" is 64-bits, higher accuracy and more numbers

/*EXTRA INFO
1st January 1970
{   {}
    years calculated in 2-bits
    }
    1st January 2000 (Y2K)
years calculated in 32-bits
}
19th January 2038 (next Y2K)
*/
