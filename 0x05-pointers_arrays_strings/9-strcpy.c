#include "main.h"

/**
 * _strcpy - Copies string pointed to by src including
 * terminating null bye.
 * @dest: Destination of copy.
 * @src: Copy source.
 *
 * Return: Destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = *(src + j);
	}

	return (dest);
}
