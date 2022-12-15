#include "main.h"

/**
 * print_most_numbers - A function that prints 0-9 followed
 * by a new line excluding 2 and 4
 * Return: 0 on success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
