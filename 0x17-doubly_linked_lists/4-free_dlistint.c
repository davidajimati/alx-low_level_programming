#include "lists.h"

/**
 * free_dlistint  - frees memory
 * @head: head pointer
 * Return:  void
*/

void free_dlistint(dlistint_t *head)
{
    dlistint_t *trav = head;
    dlistint_t *nextt = head->next;
    while (nextt)
    {
        free(trav);
        trav = nextt;
        nextt = nextt->next;
    }

}