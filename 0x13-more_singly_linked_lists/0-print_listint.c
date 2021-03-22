#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: The direction of the header node.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		i++;
		h = h->next;
	}

	return (i);
}
