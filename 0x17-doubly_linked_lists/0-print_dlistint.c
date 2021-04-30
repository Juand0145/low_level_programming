#include "lists.h"

/**
 * print_dlistint - is a function that prints all the elements of a
 * dlistint_t list.
 * @h: A pointer to the beginig of the list
 * Return: The number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
