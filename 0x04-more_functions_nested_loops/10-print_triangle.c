#include "main.h"

/**
 * print_triangle - Draws triangle on the terminal
 * @size: Argument 1
 * Return: The value of argument 1
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > a; b--)
			{
				_putchar(' ');
			}

			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
