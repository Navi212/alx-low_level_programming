#include "main.h"

/**
 * print_line - Draws a line in the terminal
 * @n: Argument 1
 * Return: The value of argument 1
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}

		else
		{
			_putchar('\n');
		}
	}
}
