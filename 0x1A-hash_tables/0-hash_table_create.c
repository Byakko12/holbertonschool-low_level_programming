#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 *
 * @size: size of hash table
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *temp = NULL;
	unsigned long int i = 0;

	if (!size)
	{
		return (NULL);
	}
	temp = malloc(sizeof(hash_table_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->size = size;
	temp->array = malloc(size * sizeof(hash_node_t *));
	if (!temp->array)
	{
		free(temp);
		return (NULL);
	}

	for (; i < size; i++)
	{
		temp->array[i] = NULL;
	}
	return (temp);
}
