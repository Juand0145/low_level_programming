#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked
* listint_t list.
* @h: The header direction
* Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n_nodes = 0;

	while (h != NULL)
	{
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
}
