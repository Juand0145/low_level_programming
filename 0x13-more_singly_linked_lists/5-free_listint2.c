#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list. and let the ehad
 * in null
 * @head: The direction of the Head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tracker;

	if (!head)
		return;

	while (*head != NULL)
	{
		tracker = (*head)->next;
		free(*head);
		*head = tracker;
	}

	*head = NULL;
}
