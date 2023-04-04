#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t mynod = 0;

	while (h)
	{
		mynod++;
		h = h->next;
	}

	return (mynod);
}
