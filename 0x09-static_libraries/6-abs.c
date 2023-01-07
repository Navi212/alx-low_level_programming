#include "main.h"

/**
 * _abs - Function prints absolute value.
 * @n: Argument to be passed for check.
 * Description: This program prints the absolute
 * value of an inputed number excluding negative values.
 * Return: 0 on success.
 */
int _abs(int n)
{
	int num;

	if (n < 0)
	{
		num = n * -1;
		return (num);
	}

	else
	{
		return (n);
	}
}
