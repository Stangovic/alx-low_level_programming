#include "main.h"

/**
 * binary_to_uint - Converts a binary number
 * @b: A pointer 
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0, mul = 1;
	int lie;

	if (b == '\0')
		return (0);

	for (lie = 0; b[lie];)
		lie++;

	for (lie -= 1; lie >= 0; lie--)
	{
		if (b[lie] != '0' && b[lie] != '1')
			return (0);

		bin += (b[lie] - '0') * mul;
		mul *= 2;
	}

	return (bin);
}
