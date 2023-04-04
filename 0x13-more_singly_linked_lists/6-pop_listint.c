#include "lists.h"

/**
 * pop_listint - Deletes the head node.
 * @head: A pointe
 */
int pop_listint(listint_t **head)
{
	listint_t *fre;
	int blue;

	if (*head == NULL)
		return (0);

	fre = *head;
	blue = (*head)->n;
	*head = (*head)->next;

	free(fre);

	return (blue);
}
