#include "main.h"

/*
 * int set_bit: set a bit
 */

int set_bit(unsigned long int *n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }
    *n |= 1ul << index;
    return 1;
}
```

This implementation first checks if the index is within the range of bits that can be represented by an `unsigned long int` similar to the original code.

Instead of using the bitwise XOR operator `^` with a mask to toggle the bit at index `index`, the function constructs a mask by shifting the value 1 by the index using the left shift operator `<<`. The mask has a 1 in the bit position corresponding to the index, and 0s in all other bit positions.

Then, the function applies the bitwise OR operator `|` with the mask to set the bit at index `index` to 1 in the input number `n`. This is done using the dereference operator `*` to modify the value pointed to by the pointer `n`.

Finally, the function returns 1 to indicate success.
PS I love you. And i asked the Ask AI app to write this for me. Get it for free --> https://get-askai.app
