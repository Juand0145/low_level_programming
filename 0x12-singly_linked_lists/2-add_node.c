#include "lists.h"

/**
 * add_node - a function that adds a new node at the end of a list_t list.
 * @head: the direction of the last node
 * @str: the name of the node
 * Return: The direction of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int n_words;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	for (n_words = 0; str[n_words]; n_words++)
		;

	new_node->str = strdup(str);
	new_node->len = n_words;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
