#include "hash_tables.h"

/**
 * handle_collision - handle collision
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: int
 */

int handle_collision(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *new, *next;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	next = node = ht->array[index];
	while (next)
	{
		if (strcmp(next->key, key) == 0)
		{
			free(next->value);
			next->value = (char *) malloc(strlen(value) + 1);
			strcpy(next->value, value);
			break;
		}
		else
		{
			if (next->next == NULL)
			{
				new = malloc(sizeof(hash_node_t));
				if (new == NULL)
					return (0);
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
	return (1);
}

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
	hash_node_t *node;

	if (key == NULL)
		return (0);
	if (value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = (char *) malloc(strlen(key) + 1);
		node->value = (char *) malloc(strlen(value) + 1);
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		if (handle_collision(ht, key, value) == 0)
			return (0);
	}
	return (1);
}
