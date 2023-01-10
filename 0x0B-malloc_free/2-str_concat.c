#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: string
 * @s2: string to concatenate
 *
 * Return: pointer to s2 is successful
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, len;

	if (s1 == NULL)
		s1 = NULL;

	if (s2 == NULL)
		s2 = NULL;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++, len++)
		;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		ptr[j] = s1[j];

	for (k = 0; s2[k] != '\0'; k++, j++)
		ptr[j] = s2[k];
	ptr[j] = '\0';

	return (ptr);
}
