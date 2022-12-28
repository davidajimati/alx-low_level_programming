#include "lists.h"

/**
 * free_dlistint  - frees memory
 * @head: head pointer
 * Return:  void
*/

void free_dlistint(dlistint_t *head)
{
    free(head);
}