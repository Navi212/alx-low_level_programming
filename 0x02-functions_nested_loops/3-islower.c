#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * Description: A function that checks for a lowe case character.
 * Return: 0 on success.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
