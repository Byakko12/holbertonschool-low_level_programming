#include "lists.h"
/**
 * free_list - free list_t
 * @head: pointer to head of linked list
 * Return: nothing;
 **/
void free_list(list_t *head)
{
	list_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n->str);
		free(n);
	}
}
