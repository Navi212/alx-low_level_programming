#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 through 9
 * Return: 0 on success
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		if ((i == '2') || (i == '4'))
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
