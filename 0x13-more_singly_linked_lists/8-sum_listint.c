#include "lists.h"

/**
 * sum_listint - returns the sum of all data(n) of  a list
 *
 * @head: pointer
 * Return: sum of all the data in the nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
