#include "lists.h"

/**
 * free_listint2 - frees a listint_t lists and set head to NULL
 *
 * @head: pointer
 * Return: None
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((temp = *head) != NULL)
	{
		temp = temp->next;
		free(temp);
	}
	*head = NULL;
}
