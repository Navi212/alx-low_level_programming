#include "main.h"

/**
 * print_last_digit - Function that checks last digit of a number.
 * @num: Argument to be passed for check.
 * Description: This program checks for the last digit of an inputed
 * number and prints it out.
 * Return: 0 on success
 */
int print_last_digit(int num)
{
	int lastnum;

	lastnum = num % 10;

	if (lastnum < 0)
	{
		lastnum *= -1
	}

	_putchar(lastnum + '0');

	return (lastnum);
}
