#include "main.h"

/**
 * print_square - Prints square on the terminal
 * @size: Argument 1
 * Return: The argument value
 */
void print_square(int size)
{
	int r;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
