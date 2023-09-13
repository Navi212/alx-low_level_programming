#include "search_algos.h"

/**
 * binary_search- A function that searches for a value
 * in a sorted array of integers using Binary search
 * algorithm
 * @array: Array of integers
 * @size: The size of the array
 * @value: The value to search for in the array
 *
 * Return: The index of the found value.
 * otherwise -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, i;

	high = size - 1;
	low = 0;

	while (low <= high)
	{
		printf("searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (value == array[i])
			return (i);
		if (value < array[i])
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
