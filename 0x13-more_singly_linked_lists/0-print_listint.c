#include "lists.h"

/**
 *
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
