#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_last_digit - Start herw
 *
 * @last: a3gument
 *
 * Return: Always 0.
 */

int print_last_digit(int last)
{
	int l = last % 10;

	if (l >= 0)
	{
		_putchar(l + '0');
		return (l);
	}

	_putchar(-l + '0');
	return (-l);
}
