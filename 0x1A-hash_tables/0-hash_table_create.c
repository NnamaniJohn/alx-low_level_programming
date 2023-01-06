#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of hash table
 * Return: pointer to created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	hash_node_t **arr = NULL;

	new_hash_table = malloc(sizeof(hash_table_t));
	new_hash_table->size = size;
	arr = malloc(sizeof(hash_node_t) * size);
	new_hash_table->array = arr;

	return (new_hash_table);
}
