#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a doubly linked list
 * @head: head pointer
 * @n: data of new node
 * Return: Address of new_node else NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *trav = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (trav)
	{
		while (trav->next != NULL)
			trav = trav->next;
		new->prev = trav;
		trav->next = new;
	}
	else
	{
		trav = new;
		new->prev = NULL;
	}
	return (new);
}
