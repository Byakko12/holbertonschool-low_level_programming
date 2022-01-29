#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: don't return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux;
	char flag = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			flag = 1;
			aux = aux->next;
		}
	}
	printf("}\n");
}
