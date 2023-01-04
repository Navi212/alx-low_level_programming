#include "main.h"

/**
 * _print_rev_recursion - reverses a string
 * @s: input string to reverse
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
		_print_rev_recursion(++s);
	_putchar(*s);
}
