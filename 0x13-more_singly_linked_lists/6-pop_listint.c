#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: variable that pointer to list
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int element_node;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = temp->next;
	element_node = temp->n;
	free(temp);
	return (element_node);
}
