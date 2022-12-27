#include "lists.h"

/**
 * add_dnodeint - add node to index
 *
 * @head: head pointer
 * @n: data
 * Return: Address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *trav = *head;
	dlistint_t *pre = trav->prev;
	int count = 0;

	if (trav == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	while (trav != NULL)
	{
		if (count == n)
		{
			pre->next = new_node;
			new_node->next = trav;
			new_node->prev = pre;
			trav->prev = new_node;
			return (new_node);
		}
		trav = trav->next;
		count++;
	}
}
