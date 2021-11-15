#include "lists.h"

/**
 * _strnlen - returns the length of a string
 * @s: string to count
 * Return: lenth of string
 */
int _strnlen(const char *s)
{
	int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * *add_node - add a n node at the beginning of a linked list
 * @head: address of beginning of string
 * @str: string to add to n node
 * Return: number of nodes in linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));

	if (n == NULL)
	{
		return (NULL);
	}
	n->str = strdup(str);
	n->len = _strnlen(str);
	n->next = *head;

	*head = n;
	return (n);
}