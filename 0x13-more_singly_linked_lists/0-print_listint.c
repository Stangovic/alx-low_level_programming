#include "lists.h"

/*
 *listint_t: I must print your elements.
 *return : count
 */

The function `print_listint` takes as input a pointer to the head of a linked list of integers, and prints all the integers in the list, followed by a newline character. The function returns the number of nodes in the list.

Here is an example implementation of `print_listint`:

```
#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}
