#include "main.h"

/**
 * print_numbers - A function that prints 0-9 followed
 * by a new line
 * Return: 0 on success
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
