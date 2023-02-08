#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to an unsigned
 * int
 * @b: string
 *
 * Return: converted binary result (unsigned int)
 * or 0 if string contains characters other than 1s and 0s
 * or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, pow = 0, len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << pow;
		pow++;
	}
	return (sum);
}
