#include <stdio.h>

/**
 * main -  calculate large number
 *
 * Return: 0
 */


int main(void)
{
	long int n = 612852475143;
	long int pn;

	for (pn = 2; pn < n; pn++)
	{
		if (n % pn == 0)
		{
			n = n / pn;
		}
	}
	printf("%ld\n", pn);
	return (0);
}
