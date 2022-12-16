#include "main.h"

/**
 * print_numbers - Prints numbers 0 through 9
 *
 * Return: The numbers 0 through 9
 */
void print_numbers(void)
{
	int i;

	for(i = 0; i <= 9; i++)
	{
		_putchar((i % 10) + '0');
	}

	_putchar('\n');
}
