#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of linked list
 * @str: string to store in the list
 *
 * Return: address of head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t n_char;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;

	new->len = n_char;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}
