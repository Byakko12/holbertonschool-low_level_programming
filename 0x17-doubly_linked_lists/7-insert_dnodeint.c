#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i = 1;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *temp = NULL;

    if (new_node == NULL)
        return (NULL);
    if (idx == 0)
    {
        new_node->next = *h;
        *h = new_node;
        return (new_node);
    }
    temp = *h;
    for (; i < idx; i++)
    {
        temp = temp->next;
        if (h == NULL)
        {
            return (NULL);
        }
    }
    new_node->n = n;
    new_node->next = temp->next;
    temp->next = new_node;
    new_node->prev = temp;

    return (new_node);
}