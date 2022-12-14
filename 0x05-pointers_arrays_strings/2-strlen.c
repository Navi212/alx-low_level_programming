#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: Pointer argument.
 *
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
