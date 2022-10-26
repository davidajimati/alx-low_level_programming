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
	listint_t *new;
	listint_t *tmp;

	(void)tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}

	return (*head);
}
