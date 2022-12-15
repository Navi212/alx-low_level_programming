#include "main.h"

/**
 * print_numbers - A function that prints numbers 0 through 9
 * Return: 0 on success
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
