#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 *
 * @head: pointer
 * @index: position if the node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *target = malloc(sizeof(listint_t));
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	if (target == NULL)
		return (NULL);

	temp = head;
	index--;

	while (index != 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);

	if (temp == NULL)
		return (NULL);
}
