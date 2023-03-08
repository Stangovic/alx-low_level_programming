#include "main.h"

/**
 * _strlen_recursion - length
 * @s: pointer 
 * Return: rec len
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
