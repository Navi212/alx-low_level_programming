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

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: nothing
 *
 */

void puts_half(char *str)
{
	int len, n;

	len = _strlen(str);
	if (len % 2 != 0)
	{
		for (n = (len - 1) / 2; str[n] != '\0'; n++)
			_putchar(str[n]);
		_putchar('\n');
	}

	else
	{
		for (n = len / 2; str[n] != '\0'; n++)
			_putchar(str[n]);
		_putchar('\n');
	}
}
