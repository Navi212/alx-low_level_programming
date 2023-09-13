#include "search_algos.h"

/**
 * linear_search- A function that searches an array of
 * integers using the Linear search algorithm
 * @array: Array of integers
 * @size: The size of the array
 * @value: The value to search for in the array
 *
 * Return: The index of the found value
 * otherwise -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
