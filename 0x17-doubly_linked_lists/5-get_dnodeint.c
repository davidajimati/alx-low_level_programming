#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head pointer
 * @index: target index
 * Return: returns the address of the Nth node or NULL if fails
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trav = head;
	dlistint_t *target;

	unsigned int count = 0;

	if (head)
	{
		while (trav != NULL)
		{
			target = trav;
			if (count == index)
				return (target);

			trav = trav->next;
			count++;
		}
	}

	return (NULL);
}
