#include <stdio.h>
#include <stdlib.h>

/*
int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;
}
// VALGRIND - memory debugger

// $ valgrind [program_name]
// == Invalid write of size 4
// ==    at 0x109170: main (memory.c:10)
// means x[3] doesn't exists
*/

/*
int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
}
== 12 bytes in 1 blocks are definitely lost in loss record 1 of 1
== LEAK SUMMARY:
==    definitely lost: 12 bytes in 1 blocks
means memory leak, we forgot to "free" the memory
*/

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
}
//== All heap blocks were freed -- no leaks are possible
//NOTE: once we free that memory, we should not modify variable unless we change the value
//sizeof = determines/returns the size of data type
//   "sizeof(int)" usually means 4 bytes because 1 integer = 4 bytes
