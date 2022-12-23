#include "main.h"

/**
 * _strcat - Concantenates two strings.
 * @dest: String1
 * @src: string2
 *
 * Return: 0 on success.
 */

char *_strcat(char *dest, char *src)
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

	for (k = 0; k <= j; k++, i++)
		dest[i] = src[k];

	return (dest);
}
