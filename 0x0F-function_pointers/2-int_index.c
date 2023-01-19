#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer and compares
 * @array: array of integers
 * @size: size of the array
 * @cmp: compare function
 *
 * Return: index of the first element for which the cmp
 * function does not return 0
 * returns -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
