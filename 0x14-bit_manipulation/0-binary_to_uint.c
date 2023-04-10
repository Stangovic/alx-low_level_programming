#include "main.h"

/**
 * binary_to_uint - Converts a binary 
 * @b: A pointer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0, hex = 1;
	int ben;

	if (b == '\0')
		return (0);

	for (ben = 0; b[ben];)
		ben++;

	for (ben -= 1; ben >= 0; ben--)
	{
		if (b[ben] != '0' && b[ben] != '1')
			return (0);

		bin += (b[ben] - '0') * hex;
		hex *= 2;
	}

	return (bin);
}
