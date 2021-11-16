#include "lists.h"
/**
 * *reverse_list - reverses a listint_t linked list.
 * @head: variable that point to point to list
 * @new_node: pointer to a list node to move
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_list(listint_t *new_node, listint_t **head)
{
	listint_t *buffer;

	if (new_node->next == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	buffer = reverse_list(new_node->next, head);

	new_node->next = NULL;
	buffer->next = new_node;
	return (new_node);
}
/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: variable that point to point to list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	if (head == NULL || *head == NULL)
		return (NULL);
	reverse_list(*head, head);
	return (*head);
}
