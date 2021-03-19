#include "lists.h"

/**
* list_len - a function that returns the number of elements in a
* linked list_tlist.
* @h: is the first element of the list
* Return: the nomber of nodes that belong into the list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
