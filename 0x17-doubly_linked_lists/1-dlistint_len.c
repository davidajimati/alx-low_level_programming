#include "lists.h"

/**
 * dlistint_len - returns number of elements in linked-list
 *
 * @h: head pointer
 * Return: number of element in a linked-list
*/

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t const *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}


int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}