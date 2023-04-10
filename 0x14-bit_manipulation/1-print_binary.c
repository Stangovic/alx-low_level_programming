#include "main.h"

/**
 * print_binary - Prints the binary representati
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		printif(n >> 1);

	_putchar((n & 1) + '0');
}
