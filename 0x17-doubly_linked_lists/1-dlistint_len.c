#include "lists.h"
/**
 * dlistint_len - return number of nodes
 *
 * @h: node of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; i++)
	{
		h = h->next;
	}
	return (i);
}
