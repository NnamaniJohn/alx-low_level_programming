#include "hash_tables.h"

void hash_node_delete(hash_node_t *node)
{
	if (node)
	{
		hash_node_delete(node->next);
		free(node->key);
		free(node->value);
		free(node);
	}
}

/**
 * hash_table_delete -  function that deletes a hash table.
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
				hash_node_delete(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}
