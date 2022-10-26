#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: pointer
 * @n: value of the new node
 * Return: address of new node/ NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *last_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;
	temp = (*head);

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = last_node;
	return (last_node);
}
