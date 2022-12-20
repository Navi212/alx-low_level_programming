#include "main.h"

/**
 * print_array - Prints array elements.
 * @a: Pass array to function.
 * @n: Pass array size to function.
 *
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);

		else
			printf("%d\n", a[i]);
	}
}
