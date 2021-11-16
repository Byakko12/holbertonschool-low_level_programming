#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: variable that point to point to list
 * @idx: index of node
 * @n: data of node
 * Return: adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *temp, *node;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	temp = *head;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (counter < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(node);
			return (NULL);
		}
		counter++;
	}
	node->next = temp->next;
	temp->next = node;

	return (node);
}
