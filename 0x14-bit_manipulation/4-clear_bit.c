#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: number to set its bit value
 * @index: index or location to set
 *
 * Return: 1 on success
 * or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
