#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t stangos = 0;

	while (h)
	{
		stangos++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (stangos);
}
