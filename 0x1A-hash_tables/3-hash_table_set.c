#include "hash_tables.h"

/**
 * hash_table_set - Updates an element in a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to add to the hash table (cannot be an empty string).
 * @value: Value associated with key.
 *
 * Return: 1 on success
 * Otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *val_copy;
	unsigned long int idx, i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	val_copy = strdup(value);
	if (!val_copy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(val_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val_copy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
