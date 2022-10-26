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
	listint_t *temp;
	unsigned int i;

	temp = head;
	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; index--)
	{
		temp = temp->next;
	}
	return (temp);
}
