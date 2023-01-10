#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: string to copy
 *
 * Return: a pointer to the copie string
 * NULL if failed
 * NULL if str = NULL
 */

char *_strdup(char *str)
{
	int i, j;
	char *strdp;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strdp = (char *)malloc(sizeof(char) * i);

	if (strdp == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		strdp[j] = str[j];
	strdp[j] = '\0';

	return (strdp);
}
