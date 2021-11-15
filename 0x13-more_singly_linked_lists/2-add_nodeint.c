#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer type listint_t
 * @n: variable n type constant int
 * Return: new node to the beginning of a listint_t list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
