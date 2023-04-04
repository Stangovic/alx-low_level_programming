#include "lists.h"

/**
 * add_nodeint - Add node at beggining
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *naw;

	naw = malloc(sizeof(listint_t));
	if (naw == NULL)
		return (NULL);

	naw->n = n;
	naw->next = *head;

	*head = naw;

	return (naw);
}
