#include "lists.h"

/**
 * free_listint -Task 04.
 * @head: A pointer 
 */
void free_listint(listint_t *head)
{
	listint_t *fre;

	while (head)
	{
		fre = head->next;
		free(head);
		head = fre;
	}
}
