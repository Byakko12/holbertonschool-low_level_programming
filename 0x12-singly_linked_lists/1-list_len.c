#include "lists.h"

size_t list_len(const list_t *h)
{
    unsigned int i_elements = 0;

    while (h)
    {
        i_elements++;
        h = h->next;
    }
    return(i_elements);
}