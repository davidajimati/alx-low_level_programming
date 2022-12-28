#include "lists.h"

/**
 * free_dlistint  - frees memory
 * @head: head pointer
 * Return:  void
*/

void free_dlistint(dlistint_t *head)
{
    dlistint_t *trav;
    dlistint_t *nextt ;

    if (head)
    {
        trav =  head;
        nextt = head->next;
        while (nextt)
        {
            free(trav);
            trav = nextt;
            nextt = nextt->next;
        }
        free(trav);
    }
}