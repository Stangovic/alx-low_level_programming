#include "main.h"

/**
 * factorial - 1/0
 * @n: integ
 * Return: rec
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
