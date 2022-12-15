#include "main.h"

/**
 * print_numbers - Function that print snumbers
 * Descrition: This function prints numbers from 0 through 9
 * Return: 0 on success
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
		_putchar('0' + i);
	_putchar('\n');
}
