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
	listint_t *mimk;

	while ((temp = mimk) != NULL)
	{
		mimk = mimk->next;
		free(temp);
	}
	*head = NULL;
}
