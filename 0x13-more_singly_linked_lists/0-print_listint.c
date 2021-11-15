#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: constant pointer type list
 * Return: return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
