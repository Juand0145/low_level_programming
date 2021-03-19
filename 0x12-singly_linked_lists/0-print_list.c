#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: is the first element of the list
 * Return: the number of node that belong into the list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");

		else
			printf("[%i] %s", h->len, h->str);

		printf("\n");

		h = h->next;
		i++;
	}

	return (i);
}
