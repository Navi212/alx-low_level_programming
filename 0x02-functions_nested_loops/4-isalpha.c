#include "main.h"

/**
 * _isalpha - A function that checks alphabetic character.
 * @c : Argument passed fior checking.
 *
 * Description: THis program for alphabetic character and
 * returns 1 if the character is a letter, lowercase or uppercase
 * and returns 0 if otherwise.
 * Return: 0 on success.
 */
int _isalpha(int c)
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
