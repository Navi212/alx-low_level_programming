#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a param
 * @array: array
 * @size: number of array elements
 * @action: function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size > 0 && action != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
