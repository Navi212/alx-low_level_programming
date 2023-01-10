#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string
 * @str: string to copy
 *
 * Return: pointer to copied string on success
 * NULL on failure
 */

char *_strdup(char *str)
{
	int i, j;
	char *strcp;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	strcp = (char *)malloc(sizeof(char) * i);
	
	if (strcp == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		strcp[j] = str[j];
		j++;
	}

	strcp[j] = '\0';

	return (strcp);
}
