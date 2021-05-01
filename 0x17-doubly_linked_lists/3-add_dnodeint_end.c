#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: A pointer to the direction of the head of teh list
 * @n: the integer value of the node
 * Return: The new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

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

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;

	return (new_node);

}
