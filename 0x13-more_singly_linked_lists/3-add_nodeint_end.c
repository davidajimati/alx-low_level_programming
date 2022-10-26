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
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t = temp*;

	if (head == NULL)
		return (NULL);

	new_node = *head;
	temp->n = n;
	temp->next = NULL;

	while(new_node->next != NULL)
	{
		new_node = ptr->link;
	}
	new_node->next = temp;
}
