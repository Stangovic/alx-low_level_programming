#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m) 
{
    unsigned long int xor_result = n ^ m;
    unsigned int num_bits_flipped = 0;

    while (xor_result > 0) {
        num_bits_flipped += (xor_result & 1UL);
        xor_result >>= 1;
    }

    return num_bits_flipped;
}
