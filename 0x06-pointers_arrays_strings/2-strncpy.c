#include "main.h"

/**
 * _strncpy - Copy n bytes of one string to the other
 * @dest: string destination
 * @src: string source
 * @n: n bytes from src
 *
 * Return: 0 on success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;

	while (src[i] != '\0')
		i++;

	for (k = 0; k < n; k++)
	{
		if (k < i)
		{
			dest[k] = src[k];
		}

		else
		{
			dest[k] = 0;
		}
	}

	return (dest);
}
