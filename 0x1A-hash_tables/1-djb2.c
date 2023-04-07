#include "hash_tables.h"

/**
 * hash_djb2 - A hash function that implements djb2
 * hashing algorithm
 * @str: input string to hash
 *
 * Return: Hashed value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashd_val;
	int i;

	hashd_val = 5381;
	while ((i = *str++))
		hashd_val = ((hashd_val << 5)) + i;
	
	/*return (hashd_val);*/
}
