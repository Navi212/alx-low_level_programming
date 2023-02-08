#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: number to set its bit index
 * @index: index or position to set
 *
 * Return: 1 on success
 * or -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
