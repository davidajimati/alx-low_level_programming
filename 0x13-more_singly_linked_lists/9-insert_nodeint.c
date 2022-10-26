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
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *head;
	idx--;

	if (idx == 0)
	{
		new_node->next = temp;
		temp = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		temp = temp->next;
		idx--;

		if (temp == NULL && idx != 0)
		{
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp = new_node;
	return (new_node);
}
