#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to get its bit value
 * @index: index or bit location to check
 *
 * Return: value of the bit at index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_status;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit_status = (n >> index) & 1;

	if (bit_status & 1)
		return (bit_status);

	if ((bit_status & 1) == 0)
		return (bit_status);

	else
		return (-1);
}

