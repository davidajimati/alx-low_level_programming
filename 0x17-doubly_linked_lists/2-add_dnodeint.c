#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of a dlistint_t list.
 *
 * @head: head pointer
 * @n: data
 * Return: Address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *trav = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = trav;
	new_node->n = n;
	trav = new_node;
	return (new_node);
}
