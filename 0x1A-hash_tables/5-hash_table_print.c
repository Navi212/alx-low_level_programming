#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table.
 * @ht: Pointer to the hash table to print.
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
