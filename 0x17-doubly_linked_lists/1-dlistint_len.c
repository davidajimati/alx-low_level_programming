#include "lists.h"

/**
 * dlistint_len - returns number of elements in linked-list
 *
 * @h: head pointer
 * Return: number of element in a linked-list
*/

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t const *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
