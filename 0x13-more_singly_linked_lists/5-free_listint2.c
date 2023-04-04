#include "lists.h"

/**
 * free_listint2 - Free
 */
void free_listint2(listint_t **head)
{
	listint_t *fre;

	if (head == NULL)
		return;

	while (*head)
	{
		fre = (*head)->next;
		free(*head);
		*head = fre;
	}

	head = NULL;
}
