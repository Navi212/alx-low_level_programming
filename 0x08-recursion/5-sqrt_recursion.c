#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 * @n: input number
 *
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}

/**
 * _sqrt - calculates the square root
 *@base: input value to calculate square root
 *@pow: input
 *
 * Return: root
 */
int _sqrt(int base, int pow)
{
	if (pow * pow == base)
	{
		return (pow);
	}
	else if (pow * pow > base)
	{
	return (-1);
	}
	else
	{
		return (_sqrt(base, pow + 1));
	}
}
