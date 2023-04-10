#include "main.h"

int get_endianness(void) 
{
    int num = 1;
    char *endian = (char *)&num;

    if (*endian == 1) {
        return 1; // Little Endian
    }

    return 0; // Big Endian
}
