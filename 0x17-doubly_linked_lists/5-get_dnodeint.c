#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: pointer to linked list
 * @index: index of list
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	for (; temp; i++)
	{
		if (index == i)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (temp);
}
