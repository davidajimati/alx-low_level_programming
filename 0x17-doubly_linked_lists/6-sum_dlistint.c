#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in the linked list
 * @head: head pointer
 * Return: sum of node->datas
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trav = head;
	int sum = 0;

	if (trav)
	{
		while (trav != NULL)
		{
			sum += trav->n;
			trav = trav->next;
		}
	}
	return (sum);
}
