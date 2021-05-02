#include "lists.h"

/**
 * insert_dnodeint_at_index -  a function that inserts a
 * new node at a given position.
 * @h: A pointer to the data of the head of the list
 * @idx: The position of the node.
 * @n: the value of the node.
 * Return: The new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *node_a = NULL;
	dlistint_t *node_b = NULL;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node->n = n;
	node_a = *h;

	while (i < idx && node_a != NULL)
	{
		node_a = node_a->next;
		i++;
	}

	if (idx > i + 1)
		return (add_dnodeint_end(h, n));

	node_b = node_a->prev;
	node_b->next = new_node;
	new_node->next = node_a;
	new_node->prev = node_b;
	node_a->prev = new_node;

	return (new_node);
}
