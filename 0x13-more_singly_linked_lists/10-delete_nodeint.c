#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: variable that point to point to list
 * @index: index of node
 * Return: 1 if succeeded or -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;

	listint_t *temp, *temp2;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (counter < index - 1)
	{
		temp = temp->next;
		counter++;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	temp2 = temp->next->next;
	temp->next = temp2;
	return (1);
}
