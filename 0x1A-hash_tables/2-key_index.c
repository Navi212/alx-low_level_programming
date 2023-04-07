#include "hash_tables.h"

/**
 * key_index - gets index location to store
 * key/value pair to the hash table
 * @key: key to determine its index
 * @size: size of the hash table array
 *
 * Return: key index location
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	/*return (hash_djb2(key) % size);
}
