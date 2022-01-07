#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: pointer to linked list
 * Return: the address of the new element, or NULL if it failed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
