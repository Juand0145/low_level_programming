#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 *  list, and returns the head nodes data (n).
 * @head: The direction of the first node of the list.
 * Return: The value of the node tha was deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
