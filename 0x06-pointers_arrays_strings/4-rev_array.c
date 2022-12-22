#include "main.h"

/**
 * reverse_array - Reverses a string
 * @a: array
 * @n: array elements
 *
 * Return: 0 on success
 */

void reverse_array(int *a, int n)
{
	int j;
	int k;
	int tmp;

	j = 0;
	k = n / 2;
	n = n - 1;

	while (n >= k)
	{
		tmp = a[j];
		a[j] = a[n];
		a[n] = tmp;
		n--;
		j++;
	}
}
