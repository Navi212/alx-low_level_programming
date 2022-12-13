#include <main.h>

/**
 * print_sign - Function to print sign of a number.
 * @n : Argument to be passed for check.
 *
 * Description: This program accepts input and checks
 * the sign of the inputed number.
 * This returns 1 and prints + if input is greater than 0.
 * This returns 0 and prints 0 if inputed number is zero.
 * This returns -1 and prints - if inputed number is less than 0.
 * Return: 0 on success.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
