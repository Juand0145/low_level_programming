#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 * @head: Th initiation node.
 * @index: The number of the node we want to return.
 * Return: The note we select or NULL if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
