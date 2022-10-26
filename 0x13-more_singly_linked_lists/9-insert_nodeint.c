#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer
 * @idx: position of new_node
 * @n: value of new_node
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	temp = *head;
	new_node->n = n;

	if (idx == 1)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	idx--;

	for (i = 0; i < idx && temp != NULL; idx--)
	{
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
