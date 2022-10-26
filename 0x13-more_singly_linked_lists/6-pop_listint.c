#include "lists.h"

/**
 * pop_listint - program deletes the head node of linked list
 * @head: head of a list
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int thenode;
	listint_t *temp;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	thenode = current->n;

	temp = current->next;

	free(current);

	*head = temp;

	return (thenode);
}
