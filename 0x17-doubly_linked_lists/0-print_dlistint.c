#include "lists.h"

/**
 * print_dlistint - prints the all the data in doubly linked list
 *
 * @h: head pointer
 * Return: total count of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *node = h;
	int count = 0;

	while (node != NULL)
	{
		printf("%d", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
