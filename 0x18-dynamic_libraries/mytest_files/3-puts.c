#include "main.h"

/**
 * _puts - Prints string to stdout.
 * @str: Pointer argument.
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	char cha;

	while (*str != '\0')
	{
		cha = *str;
		_putchar(cha);

		str++;
	}

	_putchar('\n');
}
