#include "lists.h"

size_t print_list(const list_t *h)
{
    int i_nodes = 0;

    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
            h = h->next;
            i_nodes++;
        }
        else
        {
            printf("[%d] %s\n",h->len, h->str);
            h = h->next;
            i_nodes++;
        }
    }
    return(i_nodes);
}