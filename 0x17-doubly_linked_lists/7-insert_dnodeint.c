#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at index
 * @h: head pointer
 * @idx: target index
 * @n: node data
 * Return: Address of new node or NULL if fail
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trav = *h;
	unsigned int count = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (trav)
	{
		new->n = n;
		while (trav != NULL)
		{
			if (count == idx)
			{
				new->prev = trav->prev;
				trav->next = trav;
				trav = new;
				return (new);
			}
			trav = trav->next;
		}
	}
	return (NULL);
}
