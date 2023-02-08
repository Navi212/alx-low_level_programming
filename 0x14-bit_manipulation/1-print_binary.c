#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation
 * of a number
 * @n: number
 *
 * Return: nothing
 */
void cal_binary(unsigned long int n);
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	cal_binary(n);
}

/**
 * cal_binary - performs operation (number to binary)
 * @n: number
 *
 * Return: nothing
 */
void cal_binary(unsigned long int n)
{
	if (n == 0)
		return;

	cal_binary(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
