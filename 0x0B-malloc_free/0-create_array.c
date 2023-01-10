#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: array size
 * @c: array input character
 *
 * Return: return pointer to array on success
 * NULL on failure
 * NULL is size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
