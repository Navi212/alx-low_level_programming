#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * Description: A function that checks for a lowe case character.
 * Return: 0 on success.
 */
int _islower(int c)
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
