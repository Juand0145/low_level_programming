#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position.
 * @head: The direction of the first node.
 * @idx: the node number to inster the new node
 * @n: The number to add in the node
 * Return: The new node or NULL if the entries are inconcicstent
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp = *head;


	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; temp != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}

		else
			temp = temp->next;
	}

	return (NULL);
}
