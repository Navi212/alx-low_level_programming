#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1
 * at a given index
 * @n: number to set its bit index
 * @index: index or position to set
 *
 * Return: 1 on success
 * or -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}
