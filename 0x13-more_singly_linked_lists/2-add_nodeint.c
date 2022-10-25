#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: pointer
 * @n: data contained in node
 * Return: NULL if fail / address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	(*head) = new_node;

	return (new_node);
}
