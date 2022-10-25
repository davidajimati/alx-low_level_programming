#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer
 * Return: None
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->next);
	}
}
