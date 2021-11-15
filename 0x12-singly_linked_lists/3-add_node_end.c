#include "lists.h"

/**
 * _strnlen - returns the length of a string
 * @s: string to count
 * Return: lenth of string
 **/
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
 * add_node_end - add a n node at end of a linked list
 * @head: address of beginning of string
 * @str: string to add to n node
 * Return: address of n element, NULL if failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *next;

	if (head == NULL)
	{
		return (NULL);
	}

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		return (NULL);
	}

	n->str = strdup(str);
	n->len = _strnlen(str);
	n->next = NULL;

	next = *head;

	if (next == NULL)
	{
		*head = n;
		return (n);
	}

	while (next->next != NULL)
	{
		next = next->next;
	}
	next->next = n;
	return (n);
}
