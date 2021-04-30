#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a
 * linked dlistint_t list.
 * @h: a pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_nodes = 0;

	while (h != NULL)
	{
		number_nodes++;
		h = h->next;
	}

	return (number_nodes);
}
