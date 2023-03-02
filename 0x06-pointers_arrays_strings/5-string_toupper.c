#include "main.h"

/**
 * string_toupper - change to upper case
 * @s: specifier for strings
 *
 * Return: t
 */

char *string_toupper(char *t)
{
	int i;

	for (i = 0; t[i] != '\0'; i++)
	{
		if (t[i] >= 'a' && t[i] <= 'z')
			t[i] -= 32;
	}
	return (t);
}
