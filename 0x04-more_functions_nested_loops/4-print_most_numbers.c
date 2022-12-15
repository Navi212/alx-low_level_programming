#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 through 9
 * Return: 0 on success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
		_putchar(i);
	}
	_putchar(10);
}
