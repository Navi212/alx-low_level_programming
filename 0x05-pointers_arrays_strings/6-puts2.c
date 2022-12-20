#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: String Argument.
 *
 * Return: Nothing.
 */

void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		if (i % 2 == 0)
		{
			_putchar(str[j]);
		}
	}

	_putchar('\n');
}
