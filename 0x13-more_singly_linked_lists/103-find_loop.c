#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list
 *
 * Return: no return
 */

void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n_nodes = 0;
	listp_t *h_ptr, *new, *add;
	listint_t *current;

	h_ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = h_ptr;
		h_ptr = new;

		add = h_ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&h_ptr);
				return (n_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		n_nodes++;
	}

	*h = NULL;
	free_listp2(&h_ptr);
	return (n_nodes);
}
