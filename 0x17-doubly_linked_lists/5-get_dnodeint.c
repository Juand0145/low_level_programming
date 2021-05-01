#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of
 * a dlistint_t linked list.
 * @head: the direction of head
 * @index: The number of the node
 * Return: The node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;
	dlistint_t *save_node;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	save_node = head;

	return (save_node);
}
