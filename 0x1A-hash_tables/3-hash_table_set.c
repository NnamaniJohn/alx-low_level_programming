#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key.
 * @value:  the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new, *next;

	if (key == NULL || key == "")
		return (0);
	if (value == NULL || value == "")
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		node->key = (char *) malloc(strlen(key) + 1);
		node->value = (char *) malloc(strlen(value) + 1);
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		next = node;
		while (next)
		{
			if (strcmp(next->key, key) == 0)
			{
				strcpy(next->value, value);
				break;
			}
			else
			{
				if (next->next == NULL)
				{
					new = malloc(sizeof(hash_node_t));
					new->key = (char *) malloc(strlen(key) + 1);
					new->value = (char *) malloc(strlen(value) + 1);
					strcpy(new->key, key);
					strcpy(new->value, value);
					new->next = node;
					ht->array[index] = new;
					break;
				}
				else
					next = next->next;
			}

		}
	}
	return (1);
}
