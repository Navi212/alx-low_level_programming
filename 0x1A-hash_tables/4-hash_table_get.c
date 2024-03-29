#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value of a key
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: Value of a key on success
 * Otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	
	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
