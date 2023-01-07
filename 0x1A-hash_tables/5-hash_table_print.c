#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table.
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int tem = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (tem == 1)
				printf(", ");
			tem = 1;
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
