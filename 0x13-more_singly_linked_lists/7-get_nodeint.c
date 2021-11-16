#include "lists.h"
/**
 * *get_nodeint_at_index - get nth node of linked list
 * @head: variable that pointer to list
 * @index: index of nodes
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		counter++;
	}
	return (head);
}
