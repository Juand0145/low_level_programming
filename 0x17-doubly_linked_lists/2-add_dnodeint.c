#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: A pointer to the direction of the head of teh list
 * @n: the integer value of the node
 * Return: The new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
