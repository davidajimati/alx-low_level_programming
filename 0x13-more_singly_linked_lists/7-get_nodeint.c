#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 *
 * @head: pointer
 * @index: position if the node
 * @listint_t: head->n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		i++;
		if (i == index)
		{
			return (head->n);
		}
		head = head->next;
	}
}
