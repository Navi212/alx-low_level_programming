#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 *
 * Return: Pointer to the newly created hash table
 * Otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int i = 0;

	hash_t = malloc(sizeof(hash_table_t));
	if (!hash_t)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if(!hash_t->array)
		return (NULL);
	for (; i < size; i++)
		hash_t->array[i] = NULL;

	return (hash_t);
}
