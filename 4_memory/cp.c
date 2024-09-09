#include <stdio.h>
#include <stdint.h> //uint8_t

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    FILE    *src = fopen(argv[1], "rb"); //read (b)inary
    FILE    *dst = fopen(argv[2], "wb");

    BYTE b;

    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(dst);
    fclose(src);
}
// $./cp [old_file_name] [new_file_name]
// copies byte by byte to a new file
