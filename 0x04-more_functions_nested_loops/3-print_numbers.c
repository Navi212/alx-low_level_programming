#include "main.h"

/**
 * print_numbers - Function that print snumbers
 * Descrition: This function prints numbers from 0 through 9
 * Return: 0 on success
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
