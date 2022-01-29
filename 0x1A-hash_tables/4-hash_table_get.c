#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element, or NULL if key
 * couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int pos;
	hash_node_t *aux;

	if (!ht || !ht->array || !ht->size || !key || !strlen(key))
		return (0);

	pos = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[pos];
	while (aux)
	{
		if (!strcmp(aux->key, key))
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
