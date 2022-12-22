#include "main.h"

/**
 * _strncat - Concatenates two strings using n bytes
 * @dest: string1
 * @src: string2
 * @n: n bytes from src
 *
 * Return: 0 on success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;

	if (n < j)
		j = n - 1;

	for (k = 0; k <= j; k++, i++)
		dest[i] = src[k];

	dest[i + 1] = '\0';

	return (dest);
}
