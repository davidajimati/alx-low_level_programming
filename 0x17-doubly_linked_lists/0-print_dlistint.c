#include "lists.h"

/**
 * print_dlistint - prints the all the data in doubly linked list
 *
 * @h: head pointer
 * Return: total count of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}