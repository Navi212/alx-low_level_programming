#include "main.h"

/**
 * print_to_98 - Function that prints the natural numbers.
 * @n: Argument ot be passed
 *
 * Description: This program prints the natural numbers
 * from input argument n to 98.
 * Return: 0 on Success.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; ++n)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar(',');
				_putchar(' ');
				break;
			}

			else
			{
				_putchar(n);
			}
		}

	}

	else
	{
		for (; n >= 98; --n)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar(',');
				_putchar(' ');
				break;
			}

			else
			{
				_putchar(n);
			}
		}
