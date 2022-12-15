#include "main.h"

/**
 * int _isupper(int c) - A function that checks for uppercase character
 * @c: Argument 1
 * Return: 0 on success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
