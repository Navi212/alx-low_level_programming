#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size to allocate
 *
 * Return: void pointer to allocated block
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
