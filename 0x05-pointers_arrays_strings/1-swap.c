#include "main.h"

/**
 * swapn
 * a: ointer
 * @b: pinter
 */

void swap_int(int *a, int *b)
{
	int a1;

	a1 = *a;
	*a = *b;
	*b = a1;
}
