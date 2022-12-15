#include "main.h"

/**
 * _isdigit - A function that checks for a digit 0-9
 * @c: ARGUMENT 1
 * Return: 0 on success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
