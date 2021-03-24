#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at index index
 * of a listint_t linked list.
 * @head: The direction of the head node of the list
 * @index: The node number to delete.
 * Return: if it works return 1 if not -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tracker = NULL, *temp = *head;
	unsigned int i;

	if (!*head)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	tracker = temp->next;
	temp->next = tracker->next;
	free(tracker);

	return (1);

}
