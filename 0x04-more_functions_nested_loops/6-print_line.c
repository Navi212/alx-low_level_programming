#include "main.h"

/**
 * print_line - Draws a line in the terminal
 * @n: Argument 1
 * Return: The value of argument 1
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
