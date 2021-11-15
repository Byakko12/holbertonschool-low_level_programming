#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to data
 * Return: returns the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	unsigned int i_elements = 0;

	while (h)
	{
		i_elements++;
		h = h->next;
	}
	return (i_elements);
}
