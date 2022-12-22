#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: 0 on success
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (*s1);
		if (*s2 > *s1)
			return (*s1 - *s2);
		if (*s1 > *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	if (*s2 != '\0')
		return (*s2);

	return (0);
}
