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
	int low, high, mid, i;

	low = 0;
	high = size - 1;

	while (low < high)
	{
		mid = (low + high) / 2;

		printf("searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
