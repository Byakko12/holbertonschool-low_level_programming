#include "lists.h"
/**
 * print_dlistint - print list
 *
 * @h: node of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
