#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: constant pointer type list
 * Return: return number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
