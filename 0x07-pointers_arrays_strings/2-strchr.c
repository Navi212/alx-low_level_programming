#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: pointer to first occurrence of character in the string
 * @c: character to laocate
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	char **p;
	unsigned int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s;
			break;
		}
		s++;
	}

	return (*ptr);
}
