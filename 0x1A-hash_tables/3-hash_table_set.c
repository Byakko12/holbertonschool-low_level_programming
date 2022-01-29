#include "hash_tables.h"

/**
 * new_node - implementation of the djb2 algorithm
 * @value: string used to generate hash value
 * @key: name of value
 *
 * Return: new node
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	node->next = NULL;
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @value: string used to generate hash value
 * @key: name of value
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *aux;
	unsigned long int pos;
	char *new;

	if (!ht || !ht->array || !ht->size || !key || !strlen(key) || !value)
		return (0);

	pos = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[pos];
	while (aux)
	{
		if (!strcmp(aux->key, key))
		{
			new = strdup(value);
			if (!new)
				return (0);
			free(aux->value);
			aux->value = new;
			return (1);
		}
		aux = aux->next;
	}
	node = new_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[pos];
	ht->array[pos] = node;
	return (1);
}