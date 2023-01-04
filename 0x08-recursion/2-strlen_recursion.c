#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: input string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	else
	{
		i += 1;
		_strlen_recursion(++s);
		return (i);
	}
}
