#include "lists.h"

/**
 * add_nodeint_end - Add note at the end.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *on, *off;

	on = malloc(sizeof(listint_t));
	if (on == NULL)
		return (NULL);

	on->n = n;
	on->next = NULL;

	if (*head == NULL)
		*head = on;

	else
	{
		off = *head;
		while (off->next != NULL)
		off = off->next;
		off->next = on;
	}

	return (*head);
}
