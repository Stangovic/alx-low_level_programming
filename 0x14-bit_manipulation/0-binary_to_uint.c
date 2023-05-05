#include "main.h"

/**
 * binary_to_uint - Converts a binary 
 * @b: A pointer 
 *
 * Return: If b is 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, multiplier = 1;
	int length;

	if (b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		number += (b[length] - '0') * multiplier;
		multiplier *= 2;
	}

	return (number);
}
