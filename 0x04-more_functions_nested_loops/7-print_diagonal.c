#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Argument 1
 * Return: The argument 1 value
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
